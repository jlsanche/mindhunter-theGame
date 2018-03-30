/**
 * junkyard.h
 /***********************************************************************************
 * File name: junkyard.hpp
 * Author: Jose L. Sanchez
 * Date: 11/19/17
 * Description: header file for junkyard.cpp
 ***********************************************************************************/

#ifndef JUNKYARD_H
#define JUNKYARD_H

#include <iostream>
#include "space.hpp"

class Junkyard : public Space
{
  public:
	Junkyard();
	void menu();
	void action();
};

#endif
