#pragma once
#include <iostream>
#include <fstream>

class Base
{
public:
	Base() : m_name(), m_gold() {
		if (m_baseCount >= m_maxBases)
			throw std::invalid_argument("Can not create base! Reached maximum amount of bases!\n");
		std::ifstream readingFile;
		readingFile.open("base-config.txt", std::ios::in);

		
		m_baseCount++;
	};

private:
	std::string m_name;
	int m_gold;
	int m_maxUnitCount; 

	static int m_baseCount;
	static const int m_maxBases;



};
