#pragma once
#include "Unit.h"
class Skeleton : public Unit {
public:
	Skeleton();
	void Attack(Unit* target) override;
	void TakeDamage(int damage) override;

private:

};

class Ghoul : public Unit {
public:

private:

};
