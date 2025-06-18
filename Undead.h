#pragma once
#include "Unit.h"
class Skeleton : public Unit {
public:
	Skeleton();
	void Attack(Unit* target) override;

private:

};

class Ghoul : public Unit {
public:
	Ghoul();
	void Attack(Unit* target) override;
	void HealedByHealer() override;

private:

};

class Necromancer : public Unit {
public:
	Necromancer();
	void Attack(Unit* target) override;

private:

};

class Zombie : public Unit {
public:
	Zombie();
	void Attack(Unit* target) override;

private:

};

class Dybbik : public Zombie {														//<----- Trqbwa da go prerazgledash
public:

private:

};


class Revenant : public Zombie {
public:

private:

};

class Ghost : public Unit {
public:
	Ghost();
	void Heal(Unit* target) override;

private:

};