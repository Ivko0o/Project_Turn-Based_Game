#include "Humans.h"

Soldier::Soldier() : Unit(EArmorType::eMedium, 420, 0, 250, 7, 8) {};

Archer::Archer() : Unit(EArmorType::eMedium, 535, 0, 300, 10, 3) {};

Knight::Knight() : Unit(EArmorType::eHeavy, 835, 0, 700, 45, 10) {};

Healer::Healer() : Unit(EArmorType::eUnarmored, 290, 200, 100, 2, 0) {};
void Healer::Heal() {};