/***********************************************************************************
 * File name: mindhunter.hpp
 * Author: Jose L. Sanchez
 * Date: 11/19/17
 * Description: header file for mindhunter.cpp
 ***********************************************************************************/

#ifndef MINDHUNTER_H
#define MINDHUNTER_H

#include <iostream>


#include "space.hpp"
#include "apartment.hpp"
#include "policestation.hpp"
#include "jail.hpp"
#include "junkyard.hpp"
#include "fbiagent.hpp"




class Mindhunter
{
	// locations
	FBIagent fbiAgent;
	Apartment apartment;
	Junkyard junkyard;
	PoliceStation policeStation;
	Jail jail;

public:

	Mindhunter();
	void start();
	void introduction();
	void menu();


};

#endif

