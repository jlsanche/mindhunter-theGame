/***********************************************************************************
 * File name: jail.hpp
 * Author: Jose L. Sanchez
 * Date: 11/19/17
 * Description: header file for jail.cpp
 ***********************************************************************************/

#ifndef JAIL_H
#define JAIL_H

#include <iostream>
#include "space.hpp"



class Jail: public Space
{
public:
	Jail();
	void menu();
	void execute();
};

#endif
