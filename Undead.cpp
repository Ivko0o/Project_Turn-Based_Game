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
