/***********************************************************************************
 * File name: mindhunter.cpp
 * Author: Jose L. Sanchez
 * Date: 11/19/17
 * Description: Game engine.  User elects from menu.  Each selection leads to 
 * spaces.  Each selection equals one hour past.  Game ends at 24 and result is
 * dsiplayed.  
 ***********************************************************************************/

#include "mindhunter.hpp"
#include "items.hpp"
#include "utility.hpp"

Mindhunter::Mindhunter()
{

	// connect spaces

	// police station
	policeStation.left = &junkyard;
	policeStation.right = &jail;
	policeStation.bottom = &apartment;

	// junkyard
	junkyard.top = &policeStation;
	junkyard.right = &jail;
	junkyard.bottom = &apartment;

	// apartment
	apartment.top = &policeStation;
	apartment.right = &jail;
	apartment.left = &junkyard;

	// jail
	jail.top = &policeStation;
	jail.left = &junkyard;
	apartment.bottom = &apartment;
}

// print introduction
void  Mindhunter::introduction()
{
	std::cout << std::endl;
	std::cout << "          Netflix's Mindhunter: The Game    " << std::endl;
	std::cout << "You are an FBI agent on the hunt for serial killer named Donald" << std::endl;
	std::cout << "the Splitstville Splitter (known to split his victims' bodies in half.)" << std::endl;
	std::cout << "The goal is to catch Donald the Splittsville Splitter." << std::endl;
	std::cout << "You have 24 hours before killer leaves town." << std::endl;
	std::cout << "The setting is the town of Splitsville" << std::endl;

}

// print menu
void Mindhunter::menu()
{
	std::cout << std::endl;
	std::cout << "You are an FBI agent assissting the local police in catching the Donald the Splittsville Splitter" << std::endl;
	std::cout << "1. Interact with detective on case at police station" << std::endl;
	std::cout << "2. Interrogate junk yard manager" << std::endl;
	std::cout << "3. Go to serial killer's apartment" << std::endl;
	std::cout << "Enter yout choice: ";

}

void Mindhunter::start()
{
	// print menu
	menu();

	// get selection
	int select = getNumber(1, 3);

	// execute selection
	if (select == 1) policeStation.menu();
	if (select == 2) junkyard.menu();
	if (select == 3) apartment.menu();

}


// run game
int main()
{

	Mindhunter game;
	game.introduction();
	game.start();


}