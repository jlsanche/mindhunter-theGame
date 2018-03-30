/***********************************************************************************
 * File name: utility.cpp
 * Author: Jose L. Sanchez
 * Date: 11/19/17
 * Description: class validate user inputs
 ***********************************************************************************/

#include "utility.hpp"

#include <iostream>
#include <sstream>
#include <string>

// return user inputed number betwen min and max
int getNumber(int min, int max)
{
	std::string input;
	int x = 0;

	do
	{
		// get input
		getline(std::cin, input);
		std::istringstream sin(input);
		sin >> x;
		if (!sin)
			x = min - 1;
		else if (x < min || x > max)
			std::cout << "Enter a number from " << min << " to " << max << ": ";
	} while (x < min || x > max);

	return x;
}