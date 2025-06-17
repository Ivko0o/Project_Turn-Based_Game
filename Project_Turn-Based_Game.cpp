#include <iostream>
#include "Humans.h"
#include "Undead.h"

int main()
{
	Unit* soldier = new Soldier();
	Unit* skeleton = new Skeleton();
	Unit* healer = new Healer();
	

	std::cout << "Health: " << soldier->GetHealth() << "\n";
	std::cout << "Armor Durability: " << soldier->GetArmorDurability() << "\n";
	std::cout << "Attack: " << soldier->GetAttack() << "\n";
	std::cout << "Gold Cost: " << soldier->GetGoldCost() << "\n\n";

	skeleton->Attack(soldier);
	std::cout << "Health: " << soldier->GetHealth() << "\n";
	std::cout << "Armor Durability: " << soldier->GetArmorDurability() << "\n";
	std::cout << "Attack: " << soldier->GetAttack() << "\n";
	std::cout << "Gold Cost: " << soldier->GetGoldCost() << "\n\n";





}
