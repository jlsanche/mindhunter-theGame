/***********************************************************************************
 * File name: detective.cpp
 * Author: Jose L. Sanchez
 * Date: 11/19/17
 * Description: header file for detective.cpp
 ***********************************************************************************/
#ifndef DETECTIVE_H
#define DETECTIVE_H

#include "items.hpp"
#include "actor.hpp"

class Detective: public Actor
{
private:
	enum Competence{NONE,INCOMPETENT,SOMEWHAT_INCOMPETENT,COMPETENT};

public:
	Detective();
	Items action();


private:
	int competence();

	
};

#endif
