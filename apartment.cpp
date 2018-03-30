
/***********************************************************************************
 * File name: apartment.cpp
 * Author: Jose L. Sanchez
 * Date: 11/19/17
 * Description:  apartment scene, checks if enough items (evidence) to catch
 * Donald in his apartment
 ***********************************************************************************/


#include "apartment.hpp"
#include "utility.hpp"


Apartment::Apartment():Space()
{
}

void Apartment::menu()
{
	// print time remaining
	turn++;
	std::cout << "Time so far: " << turn << std::endl;
	timeOut();

	std::cout << "You are now at the apartment of the serial killer" << std::endl;
	
	// get fbi agent action
	Items item = fbiAgent.action();
	fbiAgent.showContainer();

	// got all evidence?
	if (item == Items::DONE)
	{
		std::cout << "You now have all the evidence to arrest the serial killer if you can find him" << std::endl;
	}

	// yelow striped van parked outside?
	bool PARKED = false;
	int x = rand() % 100;

	if (x > 50 && item == Items::DONE)
	{
		std::cout << "van with yellow stripes spotted parked outside" << std::endl;
		PARKED = true;
	}
	
	// print menu
	std::cout << "1. Interact with detective on case" << std::endl;
	std::cout << "2. Interrogate junk yard manager" << std::endl;

	// for yelow striped van
	if (item == Items::DONE && PARKED)
	std::cout << "3. Check out van with yellow stripes parked outside" << std::endl;
	else
		std::cout << "3. Search apartment for serial killer" << std::endl;

	// get menu choice
	std::cout << "Enter your choice: ";

	int select = getNumber(1, 3);

	// exexcute choice
	if (select == 1) top->menu();
	if (select == 2) left->menu();

	if (select == 3)
	{
		if (item == Items::DONE && PARKED)
			right->menu();
			else
			this->menu();
	}

}
 
