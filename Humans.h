#pragma once
#include "Unit.h"

class Soldier : public Unit {
public:
	Soldier();
	
private:
	
};


class Archer : public Unit {
public:
	Archer();

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
