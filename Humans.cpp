#include "Humans.h"

//Soldier
const EArmorType soldierArmor = EArmorType::eMedium;
const int soldierAttack = 7;
const int soldierHP = 420;
const int soldierMP = 0;
const int soldierGoldCost = 250;
const int soldierArmorDurability = 8;

Soldier::Soldier() : Unit(soldierArmor, soldierHP, soldierMP, soldierGoldCost, soldierAttack, soldierArmorDurability) {};
void Soldier::Attack(Unit* target) {
	target->TakeDamage(soldierAttack);
}
void Soldier::TakeDamage(int damage) {
	if (m_armor == EArmorType::eUnarmored) {
		m_health -= damage;
	}
	else if (m_armor == EArmorType::eLeather) {
		int reducedDamage = static_cast<int>(damage * 0.75);
		m_health -= reducedDamage;
	}
	else if (m_armor == EArmorType::eMedium) {
		int reducedDamage = static_cast<int>(damage * 0.50);
		m_health -= reducedDamage;
	}
	else {
		int reducedDamage = static_cast<int>(damage * 0.25);
		m_health -= reducedDamage;
	}
};

//Archer
const EArmorType archerArmor = EArmorType::eMedium;
const int archerAttack = 10;
const int archerHP = 535;
const int archerMP = 0;
const int archerGoldCost = 300;
const int archerArmorDurability = 3;

Archer::Archer() : Unit(archerArmor, archerHP, archerMP, archerGoldCost, archerAttack, archerArmorDurability) {};
void Archer::Attack(Unit* target) {
	target->TakeDamage(archerAttack);
}
void Archer::TakeDamage(int damage) {
	if (m_armor == EArmorType::eUnarmored) {
		m_health -= damage;
	}
	else if (m_armor == EArmorType::eLeather) {
		int reducedDamage = static_cast<int>(damage * 0.75);
		m_health -= reducedDamage;
	}
	else if (m_armor == EArmorType::eMedium) {
		int reducedDamage = static_cast<int>(damage * 0.50);
		m_health -= reducedDamage;
	}
	else {
		int reducedDamage = static_cast<int>(damage * 0.25);
		m_health -= reducedDamage;
	}
};

Knight::Knight() : Unit(EArmorType::eHeavy, 835, 0, 700, 45, 10) {};

Healer::Healer() : Unit(EArmorType::eUnarmored, 290, 200, 100, 2, 0) {};
void Healer::Heal() {};