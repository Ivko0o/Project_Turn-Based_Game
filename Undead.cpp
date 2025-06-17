#include "Undead.h"

//Skeleton
const EArmorType skeletonArmor = EArmorType::eMedium;
const int skeletonAttack = 5;
const int skeletonHP = 500;
const int skeletonMP = 0;
const int skeletonGoldCost = 100;
const int skeletonArmorDurability = 8;

Skeleton::Skeleton() : Unit(skeletonArmor, skeletonHP, skeletonMP, skeletonGoldCost, skeletonAttack, skeletonArmorDurability) {};

void Skeleton::Attack(Unit* target) {
	target->TakeDamage(skeletonAttack);
}

void Skeleton::TakeDamage(int damage) {
	if (m_armor == EArmorType::eUnarmored) {
		m_health -= damage;
		if (skeletonArmorDurability > 0)
			skeletonArmorDurability--;
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