/***********************************************************************************
 * File name: interrogate.hpp
 * Author: Jose L. Sanchez
 * Date: 11/19/17
 * Description: header file for interrogate.cpp
 ***********************************************************************************/
#ifndef INTERROGATE_H
#define INTERROGATE_H

#include "items.hpp"
#include "actor.hpp"

class Interrogate : public Actor
{
  public:
	Interrogate();
	Items action();
};

#endif
