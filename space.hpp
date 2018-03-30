/***********************************************************************************
 * File name: space.hpp
 * Author: Jose L. Sanchez
 * Date: 11/19/17
 * Description: header files for space.cpp
 ***********************************************************************************/


#ifndef SPACE_H
#define SPACE_H

#include <iostream>
#include <sstream>

#include "detective.hpp"
#include "fbiagent.hpp"
#include "interrogate.hpp"

class Space
{
  public:
	//  4 Space pointers :
	// top, right, left, and bottom.
	Space *top;
	Space *right;
	Space *left;
	Space *bottom;

  protected:
	// actors
	static FBIagent fbiAgent;
	static Detective detective;
	static Interrogate interrogate;

	static int turn;

	const static int MAX_TURNS = 24;

  public:
	Space();
	virtual void menu() = 0;
	void timeOut();
};

#endif
