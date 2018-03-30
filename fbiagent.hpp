/***********************************************************************************
 * File name: fbiaagent.hpp
 * Author: Jose L. Sanchez
 * Date: 11/19/17
 * Description: header file for fbiagent.cpp
 ***********************************************************************************/

#ifndef FBIAGENT_H
#define FBIAGENT_H

#include "items.hpp"
#include "container.hpp"
#include "actor.hpp"

class FBIagent: public Actor
{
private:

	Container container;

public:
	FBIagent();
	Items action();
	void addItem(Items item);
	bool hasItem(Items item);
	void showContainer();
};


#endif