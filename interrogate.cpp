/***********************************************************************************
 * File name: interrogate.cpp
 * Author: Jose L. Sanchez
 * Date: 11/19/17
 * Description: class used to interrogate junk yard manager.  Randomizes junk yard
 * manager questioning
 ***********************************************************************************/
#include "interrogate.hpp"
#include "items.hpp"


Interrogate::Interrogate():Actor()
{
}

// interrogate junk yard manager
Items Interrogate::action()
{
	int x = rand() % 100;

	if (x < 50)
		return Items::NONE;
	else
		return Items::YELLOW_STRIPED_VAN;
}
