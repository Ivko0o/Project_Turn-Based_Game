#include "Undead.h"

int const ghostHealAmount = 250;

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


//Ghoul
const EArmorType ghoulArmor = EArmorType::eHeavy;
const int ghoulAttack = 12;
const int ghoulHP = 400;
const int ghoulMP = 0;
const int ghoulGoldCost = 250;
const int ghoulArmorDurability = 6;

Ghoul::Ghoul() : Unit(ghoulArmor, ghoulHP, ghoulMP, ghoulGoldCost, ghoulAttack, ghoulArmorDurability) {};

void Ghoul::Attack(Unit* target) {
	target->TakeDamage(ghoulAttack);
}

void Ghoul::HealedByHealer() {
	m_health += ghostHealAmount;
	if (m_health > ghoulHP)
		m_health = ghoulHP;
}

//Necromancer
const EArmorType necromancerArmor = EArmorType::eUnarmored;
const int necromancerAttack = 4;
const int necromancerHP = 300;
const int necromancerMP = 200;
const int necromancerGoldCost = 400;
const int necromancerArmorDurability = 0;

Necromancer::Necromancer() : Unit(necromancerArmor, necromancerHP, necromancerMP, necromancerGoldCost, necromancerAttack, necromancerArmorDurability) {};

void Necromancer::Attack(Unit* target) {
	target->TakeDamage(necromancerAttack);
}

//Zombie
const EArmorType zombieArmor = EArmorType::eUnarmored;
const int zombieAttack = 15;
const int zombieHP = 250;
const int zombieMP = 0;
const int zombieGoldCost = 300;
const int zombieArmorDurability = 0;

Zombie::Zombie() : Unit(zombieArmor, zombieHP, zombieMP, zombieGoldCost, zombieAttack, zombieArmorDurability) {};

void Zombie::Attack(Unit* target) {
	target->TakeDamage(zombieAttack);
}

//Ghost
const EArmorType ghostArmor = EArmorType::eUnarmored;
const int ghostAttack = 0;
const int ghostHP = 0;
const int ghostMP = 0;
const int ghostGoldCost = 500;
const int ghostArmorDurability = 0;

Ghost::Ghost() : Unit(ghostArmor, ghostHP, ghostMP, ghostGoldCost, ghostAttack, ghostArmorDurability) {};
void Ghost::Heal(Unit* target){
	if (!target->IsHuman()) {
		target->HealedByHealer();
			//TRQBVA DA SLOJISH FUNCKIQ ZA UNISHTOJAVANE NA OBEKTA
	}
}

