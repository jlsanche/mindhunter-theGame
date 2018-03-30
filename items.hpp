/***********************************************************************************
 * File name: items.hpp
 * Author: Jose L. Sanchez
 * Date: 11/19/17
 * Description: header file for items.cpp
 ***********************************************************************************/
#ifndef ITEMS_HPP
#define ITEMS_HPP

#include <string>

// items
enum Items { NONE, NAME, KNIFE, FINGERPRINTS, APARTMENT_ADDRESS, YELLOW_STRIPED_VAN , DONE};

std::string toString(Items item);

#endif


