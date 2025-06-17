#pragma once
#include "Unit.h"

class Soldier : public Unit {
public:
	Soldier();
	void Attack(Unit* target) override;
	void TakeDamage(int damage) override;

private:
	
};

class Archer : public Unit {
public:
	Archer();
	void Attack(Unit* target);
	void TakeDamage(int damage) override;

private:

};

class Knight : public Unit {
public:
	Knight();

private:

};

class Healer : public Unit {
public:
	Healer();
	void Heal();
private:

};
