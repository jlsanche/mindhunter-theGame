/***********************************************************************************
 * File name: container.cpp
 * Author: Jose L. Sanchez
 * Date: 11/19/17
 * Description: container class for actor items (max 10 )
 ***********************************************************************************/


#include "container.hpp"
#include "items.hpp"


Container::Container()
{
	numItems = 0;
}


// add item to container
bool Container::addItem(Items item)
{
	if (numItems < MAX_ITEMS)
	{
		items[numItems++] = item;
		return true;
	}

	return false;
}

// get item at index 
Items Container::getItem(int index)
{
	if (index > 0 || index < MAX_ITEMS)
	{
		return items[index];
	}

	else return Items::NONE;

}

// return number of items in container
int Container::getNumItems()
{
	return numItems;
}

// return true if item in container
bool Container::hasItem(Items item)
{
	for (int i = 0; i < numItems; i++)
	{
		if (items[i] == item)
			return true;
	}

	return false;
}