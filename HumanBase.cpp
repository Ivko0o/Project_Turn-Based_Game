#include "HumanBase.h"
#include "Unit.h"

bool HumanBase::CreateUnit() {
	int option = 0;
	std::cout << "Choose a unit to create:\n";
	UnitsList();
	std::cin >> option;
	while (option < 1 || option > 5) {
		std::cout << "Invalid option!Try again: ";
		std::cin >> option;
	}
	Unit* unit = nullptr;

	switch (option) {
	case 1: unit = new Soldier();
		break;
	case 2: unit = new Archer();
		break;
	case 3: unit = new Knight();
		break;
	case 4: unit = new Healer();
		break;
	case 5: unit = new Magician();
		break;
	default:
		return false;
	}
	
	if (m_gold < unit->GetGoldCost()) {
		std::cout << "Not enough gold to create unit!\n";
		delete unit;
		return false;
	}
	if (m_units.size() >= m_maxUnitCount) {
		std::cout << "Unit not created! Maximum limit reached!\n";
		delete unit;
		return false;
	}

	m_gold -= unit->GetGoldCost();
	m_units.push_back(unit);
	return true;
}

void UnitsList() {
	std::cout << "Units: \n";
	std::cout << "1. Soldier - Stats:   HP:420, MP:0, Attack: 7, ArmorType: Medium, ArmorDurability: 8, GoldCost: 250 \n";
	std::cout << "2. Archer - Stats:   HP:535, MP:0, Attack: 10, ArmorType: Medium, ArmorDurability: 3, GoldCost: 300 \n";
	std::cout << "3. Knight - Stats:   HP:835, MP:0, Attack: 45, ArmorType: Heavy, ArmorDurability: 10, GoldCost: 700 \n";
	std::cout << "4. Healer - Stats:   HP:290, MP:200, Attack: 2, ArmorType: Unarmored, ArmorDurability: 0, GoldCost: 150 \n";
	std::cout << "5. Magician - Stats:   HP:325, MP:200, Attack: 10, ArmorType: Leather, ArmorDurability: 3, GoldCost: 150 \n\n";
}