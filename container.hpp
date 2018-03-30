/***********************************************************************************
 * File name: container.cpp
 * Author: Jose L. Sanchez
 * Date: 11/19/17
 * Description: header file for container.cpp
 ***********************************************************************************/


#ifndef CONTAINER_H
#define CONTAINER_H

#include <iostream>
#include "items.hpp"


class Container
{

public:

	static const int MAX_ITEMS = 10;

private:

	Items items[MAX_ITEMS];
	int numItems;
	
public:
	
	Container();
	bool addItem(Items item);
	Items getItem(int index);
	int getNumItems();
	bool hasItem(Items item);
};

#endif

