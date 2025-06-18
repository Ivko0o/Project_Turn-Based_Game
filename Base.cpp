#include "Base.h"


int Base::m_baseCount = 0;
const int Base::m_maxBases = 2;

Base::Base(const std::string& fileName) : m_name(""), m_startingGold(0), m_maxUnitCount(0), m_maxHeroesCount(0), m_units(nullptr), m_heroes(nullptr) {
	if (m_baseCount >= m_maxBases)
		throw std::invalid_argument("Can not create base! Reached maximum amount of bases!\n");

	std::ifstream readingFile;
	readingFile.open(fileName, std::ios::in);

	if (!readingFile) {
		throw std::runtime_error("Could not open file: " + fileName);
	}
	else {
		std::string line;
		while (std::getline(readingFile, line)) {
			size_t pos = line.find(":");

			std::string key = line.substr(0, pos);
			std::string value = line.substr(pos + 1);
			value.erase(0, value.find_first_not_of(" \t"));

			if (key == "Name")
				m_name = value;

			else if (key == "Starting Gold")
				m_startingGold = std::stoi(value);

			else if (key == "Maximum Units") {
				m_maxUnitCount = std::stoi(value);
				m_units = new(std::nothrow) Unit * [m_maxUnitCount];
			}
			else if (key == "Maximum Heroes") {
				m_maxHeroesCount = std::stoi(value);
				m_heroes = new(std::nothrow) Unit * [m_maxHeroesCount];
			}
		}
	}

	readingFile.close();
	m_baseCount++;
};
