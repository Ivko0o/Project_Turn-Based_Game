#pragma once
#include "Unit.h"

class Soldier : public Unit {
public:
	Soldier();
	void Attack(Unit* target) override;
	void HealedByHealer() override;

private:
	
};

class Archer : public Unit {
public:
	Archer();
	void Attack(Unit* target);
	void HealedByHealer() override;

private:

};

class Knight : public Unit {
public:
	Knight();
	void Attack(Unit* target);
	void HealedByHealer() override;

private:

};

class Healer : public Unit {
public:
	Healer();
	void Attack(Unit* target);
	void Heal(Unit* target) override;

private:

};


class Magician : public Unit {
public:
	Magician();
	void Attack(Unit* target);
	void HealedByHealer() override;

private:

};