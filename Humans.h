#pragma once
#include "Unit.h"

class Soldier : public Unit {
public:
	Soldier();
	void Attack(Unit* target) override;
	bool IsHuman() const override;
	void HealedByHealer();

private:
	
};

class Archer : public Unit {
public:
	Archer();
	void Attack(Unit* target);
	bool IsHuman() const override;
	void HealedByHealer();

private:

};

class Knight : public Unit {
public:
	Knight();
	void Attack(Unit* target);
	bool IsHuman() const override;
	void HealedByHealer();

private:

};

class Healer : public Unit {
public:
	Healer();
	void Attack(Unit* target);
	bool IsHuman() const override;
	void Heal(Unit* target);

private:

};


class Magician : public Unit {
public:
	Magician();
	void Attack(Unit* target);
	bool IsHuman() const override;
	void HealedByHealer();

private:

};