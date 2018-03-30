/***********************************************************************************
 * File name: fbiagent.cpp
 * Author: Jose L. Sanchez
 * Date: 11/19/17
 * Description: create fbiagent class object. container and items functions
 ***********************************************************************************/

#include "fbiagent.hpp"



FBIagent::FBIagent():Actor()
{
	container.addItem(Items::NAME);
}

Items FBIagent::action() {

	// check all items
	if (!container.hasItem(Items::KNIFE)) return Items::NONE;
	if (!container.hasItem(Items::FINGERPRINTS)) return Items::NONE;
	if (!container.hasItem(Items::YELLOW_STRIPED_VAN)) return Items::NONE;
	return Items::DONE;
}

void FBIagent::addItem(Items item)
{
	container.addItem(item);
}

bool FBIagent::hasItem(Items item)
{
	return container.hasItem(item);

}
 
// show evidence container
void FBIagent::showContainer()
{
	std::cout << "Evidence collected by FBI agent so far:" << std::endl;

	for (int i = 0; i < container.getNumItems(); i++)
	{
		std::cout << toString(container.getItem(i)) << std::endl;
	}
	std::cout << std::endl;
}