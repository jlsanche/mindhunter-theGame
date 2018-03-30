/***********************************************************************************
 * File name: items.cpp
 * Author: Jose L. Sanchez
 * Date: 11/19/17
 * Description: uses items enum toString
 ***********************************************************************************/
#include "items.hpp"

// print item
std::string toString(Items item)
{
	switch (item)
	{
	case NONE: return "None";
	case NAME: return "Name of Serial Killer";
	case KNIFE: return "Knife";
	case FINGERPRINTS: return "Finger prints";
	case APARTMENT_ADDRESS: return "Apartment Address";
	case YELLOW_STRIPED_VAN: return "Yellow Striped Van";
	case DONE: return "Done";
	}

	return "";
}