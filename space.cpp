/***********************************************************************************
 * File name: space.cpp
 * Author: Jose L. Sanchez
 * Date: 11/19/17
 * Description: sets up spaces, actors,and turns (time)
 ***********************************************************************************/
#include "space.hpp"
#include "stdlib.h"

// actors
FBIagent Space::fbiAgent;
Detective Space::detective;
Interrogate Space::interrogate;

// turn
int Space::turn=0;

Space::Space()
{
	turn = 0;
}

// time out?
void Space::timeOut()
{

	if (turn > MAX_TURNS)
	{
		std::cout << "Max Time " << MAX_TURNS << " is up, the serial killer got away! " << std::endl;
		exit(0);
	}
}