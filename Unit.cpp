#include "Unit.h"


Unit::Unit(EArmorType armor, uint16_t HP, uint16_t MP, uint16_t gold, uint16_t att, uint16_t armorDur) : m_armor(armor), m_health(HP), m_mana(MP), m_goldCost(gold), m_attack(att), m_armorDurability(armorDur) {};

bool Unit::IsHuman() const {
	return true;
}

//Getters
uint16_t Unit::GetHealth() const {
	return m_health;
}

uint16_t Unit::GetMana() const {
	return m_mana;
}

EArmorType Unit::GetArmorType() const {
	return m_armor;
}

uint16_t Unit::GetAttack() const {
	return m_attack;
}

uint16_t Unit::GetArmorDurability() const {
	return m_armorDurability;
}

uint16_t Unit::GetGoldCost() const {
	return m_goldCost;
}

//Functions that perform "actions"
void Unit::TakeDamage(int damage) {
	int actualDamage = damage;
	if (m_armorDurability > 0) {
		switch (m_armor) {
		case EArmorType::eLeather: 
			actualDamage = static_cast<int>(damage * 0.75);
			break;
		case EArmorType::eMedium:
			actualDamage = static_cast<int>(damage * 0.5);
			break;
		case EArmorType::eHeavy:
			actualDamage = static_cast<int>(damage * 0.25);
			break;
		default:
			break;
		}
	}
	m_health -= damage;
	m_armorDurability--;
}
