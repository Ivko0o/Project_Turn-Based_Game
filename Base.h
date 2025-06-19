#pragma once
#include <fstream>
#include <string>
#include <vector>
#include "Unit.h"
#include "Humans.h"

class Base
{
public:
	Base(const std::string& fileName);
	int GetGold() const;
	virtual bool CreateUnit() = 0;

protected:
	std::string m_name;
	int m_gold;
	int m_maxUnitCount;
	int m_maxHeroesCount;
	std::vector<Unit*> m_units;
	std::vector<Unit*> m_heroes;

	static int m_baseCount;
	static const int m_maxBases;
};
