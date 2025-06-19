#pragma once
#include "Base.h"

class HumanBase : public Base
{
public:
	HumanBase(const std::string& fileName) : Base(fileName) {};
	bool CreateUnit() override;

private:
};

