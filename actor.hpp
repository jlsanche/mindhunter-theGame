/***********************************************************************************
 * File name: actor.hpp
 * Author: Jose L. Sanchez
 * Date: 11/19/17
 * Description: header file for actor.cpp
 ***********************************************************************************/

#ifndef ACTOR_HPP
#define ACTOR_HPP

#include "items.hpp"

class Actor
{
public:
	Actor();
	
	virtual Items action()=0;
};

#endif
