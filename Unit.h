#pragma once
#include <cstdint>
#include <iostream>

enum class EArmorType {
	eUnarmored,
	eLeather,
	eMedium,
	eHeavy
};

class Unit
{
public:
	//Default constructor for all units
	Unit(EArmorType armor, uint16_t HP, uint16_t MP, uint16_t gold, uint16_t att, uint16_t armorDur);

	//Getters
	uint16_t GetHealth() const;
	uint16_t GetMana() const;
	EArmorType GetArmorType() const;
	uint16_t GetAttack() const;
	uint16_t GetArmorDurability() const;
	uint16_t GetGoldCost() const;

	virtual void Attack(Unit* target) = 0;
	virtual void Heal(Unit* target) {};

	virtual void TakeDamage(int damage);
	virtual bool IsHuman() const;
	virtual void HealedByHealer() {};

protected:
	EArmorType m_armor;
	uint16_t m_health;
	uint16_t m_mana;
	uint16_t m_goldCost;
	uint16_t m_attack;
	uint16_t m_armorDurability;

};

