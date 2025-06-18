#include "Humans.h"

const int healerHealAmount = 100;

//Soldier
const EArmorType soldierArmor = EArmorType::eMedium;
const int soldierAttack = 7;
const int soldierHP = 420;
const int soldierMP = 0;
const int soldierGoldCost = 250;
const int soldierArmorDurability = 8;

Soldier::Soldier() : Unit(soldierArmor, soldierHP, soldierMP, soldierGoldCost, soldierAttack, soldierArmorDurability) {};	//Default Constructor

void Soldier::Attack(Unit* target) {
	target->TakeDamage(soldierAttack);
}

void Soldier::HealedByHealer() {
	m_health += healerHealAmount;
	if (m_health > soldierHP)
		m_health = soldierHP;
}

//Archer
const EArmorType archerArmor = EArmorType::eMedium;
const int archerAttack = 10;
const int archerHP = 535;
const int archerMP = 0;
const int archerGoldCost = 300;
const int archerArmorDurability = 3;

Archer::Archer() : Unit(archerArmor, archerHP, archerMP, archerGoldCost, archerAttack, archerArmorDurability) {};		//Default constructor
void Archer::Attack(Unit* target) {
	target->TakeDamage(archerAttack);
}
void Archer::HealedByHealer() {
	m_health += healerHealAmount;
	if (m_health > archerHP)
		m_health = archerHP;
}

//Knight
const EArmorType knightArmor = EArmorType::eHeavy;
const int knightAttack = 45;
const int knightHP = 835;
const int knightMP = 0;
const int knightGoldCost = 700;
const int knightArmorDurability = 10;

Knight::Knight() : Unit(knightArmor, knightHP, knightMP, knightGoldCost, knightAttack, knightArmorDurability) {};	//Default constructor
void Knight::Attack(Unit* target) {
	target->TakeDamage(knightAttack);
}
void Knight::HealedByHealer() {
	m_health += healerHealAmount;
	if (m_health > knightHP)
		m_health = knightHP;
}

//Healer
const EArmorType healerArmor = EArmorType::eUnarmored;
const int healerAttack = 2;
const int healerHP = 290;
const int healerMP = 200;
const int healerGoldCost = 100;
const int healerArmorDurability = 0;

Healer::Healer() : Unit(healerArmor, healerHP, healerMP, healerGoldCost, healerAttack, healerArmorDurability) {};
void Healer::Attack(Unit* target) {
	target->TakeDamage(healerAttack);
}

void Healer::Heal(Unit* target) {
	if (m_mana >= 100 && target->IsHuman()) {
		target->HealedByHealer();
		m_mana -= 100;
	}	
}

//Magician
const EArmorType magicianArmor = EArmorType::eLeather;
const int magicianAttack = 10;
const int magicianHP = 325;
const int magicianMP = 200;
const int magicianGoldCost = 250;
const int magicianArmorDurability = 3;
const int magicianAttackMPCost = 50;


Magician::Magician() : Unit(magicianArmor, magicianHP, magicianMP, magicianGoldCost, magicianAttack, magicianArmorDurability) {};
void Magician::Attack(Unit* target) {
	if (m_mana >= magicianAttackMPCost) {
		target->TakeDamage(magicianAttack);
		m_mana -= magicianAttackMPCost;
	}
	else {
		std::cout << "Not enough mana for attack!\n";
	}
}

void Magician::HealedByHealer() {
	m_health += healerHealAmount;
	if (m_health > magicianHP)
		m_health = magicianHP;
}