/***********************************************************************************
 * File name: policestation.cpp
 * Author: Jose L. Sanchez
 * Date: 11/19/17
 * Description: checks for evidence at police station
 ***********************************************************************************/
#include "policestation.hpp"
#include "items.hpp"
#include "utility.hpp"


PoliceStation::PoliceStation():Space()
{}

 
void PoliceStation::menu()
{
	// print time
	turn++;
	std::cout << "Time so far: " << turn << std::endl;
	timeOut();

	std::cout << "You are now at the police station to interact with the detective on the case" << std::endl;
	
	// sgoe fbi container
	Space::fbiAgent.showContainer();
	
	// get evidence
	Items item = detective.action();

	// store new evidence
	if (!fbiAgent.hasItem(item))
	{
		std::cout << "Detective gave you some evidence: " << toString(item) << std::endl;
		fbiAgent.addItem(item);
	}

	// no new evidence
	else
	{
		std::cout << "No more useful information obtained by detective" << std::endl;
	}

	// print menu
	std::cout << "1. Interrogate junk yard manager" << std::endl;
	std::cout << "2. Go to apartment of killer" << std::endl;
	std::cout << "Enter your choice: ";

	// get selection
	int select = getNumber(1, 2);

	// execute selection
	if (select == 1) left->menu();
	if (select == 2) bottom->menu();
}