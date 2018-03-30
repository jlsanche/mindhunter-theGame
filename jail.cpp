/***********************************************************************************
 * File name: jail.cpp
 * Author: Jose L. Sanchez
 * Date: 11/19/17
 * Description: jail menu and execute fucntions
 ***********************************************************************************/
#include "jail.hpp"
#include "utility.hpp"
#include "mindhunter.hpp"


Jail::Jail():Space()
{
}

void Jail::menu()
{
	// print menu introduction
	std::cout << std::endl;
	std::cout << "Time to find serial killer: " << turn << std::endl;
	std::cout << "The serial killer was found in the yellow stiped van," << std::endl;
	std::cout <<  "and was arrested by the authorities" << std::endl;
	std::cout << "You are at the jail cell where the serial killer is awaiting execution:" << std::endl;
	std::cout << "1. Watch serial killer be executed in electric chair" << std::endl;
	std::cout << "2. Exit program" << std::endl;
	std::cout << "Enter your choice: ";

	// get selection
	int select = getNumber(1, 3);

	// execute selection
	if (select == 1)
	{
		execute();
		exit(0);
	}
	if (select == 2)
	{
		std::cout << "Thank you for catching Donald the Splittsville Splitter!" << std::endl;
		exit(0);
	}


}

// execute serial killer
void Jail::execute()
{
	std::cout << "The serial killer has been executed" << std::endl;
}

