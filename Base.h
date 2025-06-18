#pragma once
#include <fstream>
#include <string>
#include "Unit.h"

class Base
{
public:
	Base(const std::string& fileName);

private:
	std::string m_name;
	int m_startingGold;
	int m_maxUnitCount;
	int m_maxHeroesCount;
	Unit** m_units;
	Unit** m_heroes;

	static int m_baseCount;
	static const int m_maxBases;
};
