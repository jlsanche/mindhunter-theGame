/***********************************************************************************
 * File name: detective.cpp
 * Author: Jose L. Sanchez
 * Date: 11/19/17
 * Description: create detective class object.  Sets a random competence function.
 * The more competent the easier to catch serial killer and vice versa.
 ***********************************************************************************/


#include "detective.hpp"
#include "stdlib.h"
#include "time.h"


Detective::Detective():Actor()
{
	srand((unsigned int)time(0));
}

Items Detective::action()
{

	// get detective competence level
	if (competence() >= Competence::COMPETENT)
	{
		return Items::APARTMENT_ADDRESS;

	}

	else if (competence() >= Competence::SOMEWHAT_INCOMPETENT)
	{
		return Items::FINGERPRINTS;

	}

	else if (competence() >= Competence::INCOMPETENT)
	{
		return Items::KNIFE;

	}

	else
		return Items::NONE;
}

// return a competence lkevel
int Detective::competence()
{
	int x = (rand() % Competence::COMPETENT) + 1;

	if (x == 0) return Competence::NONE;
	else if (x == 1) return Competence::INCOMPETENT;
	else if (x == 2) return Competence::SOMEWHAT_INCOMPETENT;
	else return Competence::COMPETENT;
}

