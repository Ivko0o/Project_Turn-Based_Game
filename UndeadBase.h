#pragma once
#include "Base.h"

class UndeadBase : public Base
{
public:
	UndeadBase(const std::string& fileName) : Base(fileName) {};
	bool CreateUnit() override;

private:

};

