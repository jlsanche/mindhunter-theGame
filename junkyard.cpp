/***********************************************************************************
 * File name: junkyard.cpp
 * Author: Jose L. Sanchez
 * Date: 11/19/17
 * Description: junkyard space class where fbi agent interrogates junk yard manager
 ***********************************************************************************/
#include "junkyard.hpp"
#include "items.hpp"
#include "utility.hpp"

Junkyard::Junkyard() : Space()
{
}

void Junkyard::menu()
{
	// print time
	turn++;
	std::cout << "Time so far: " << turn << std::endl;
	timeOut();

	std::cout << "You are at the junk yard where victim's body was found" << std::endl;

	// show fbi container
	fbiAgent.showContainer();

	// interogare junk yard manager
	Items item = interrogate.action();

	// store results
	if (item == Items::YELLOW_STRIPED_VAN && !fbiAgent.hasItem(item))
	{
		std::cout << "junk yard manager has says he saw a van with yellow stripes." << std::endl;
		fbiAgent.addItem(item);
	}
	else
		std::cout << "Junk yard manager has nothing to say." << std::endl;

	// print menu
	std::cout << std::endl;
	std::cout << "1. Interact with detective on case." << std::endl;
	std::cout << "2. Go to serial killer's apartment." << std::endl;
	std::cout << "Enter yout choice: ";

	// get selection
	int select = getNumber(1, 2);

	// execute selection
	if (select == 1)
		top->menu();
	if (select == 2)
		bottom->menu();
}
