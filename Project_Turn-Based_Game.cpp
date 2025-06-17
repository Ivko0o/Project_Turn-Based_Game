#include <iostream>
#include "Humans.h"
#include "Undead.h"

int main()
{
	Unit* soldier = new Soldier();
	Unit* skeleton = new Skeleton();

	soldier->Attack(skeleton);
	std::cout << skeleton->GetHealth();



 
}
