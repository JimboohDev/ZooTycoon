/******************************************************
** Program: tiger.h
** Author: Jimwel Aguinaldo
** Date: 05/06/2016
** Description: Virtual zoo that houses tigers, polar bears, penguins
** Input: Buy animals, name, disease choice, baby choice
** Output: User info
******************************************************/
#ifndef TIGER_H
#define TIGER_H
#include "animal.h"
#include <iostream>

using namespace std;

class Tiger:public Animal
{
	private:
		float avg_cost;
		float payoff;
	public:
		/* Constructor */
		Tiger();
		Tiger(int age);

		/*Accessor */
		float get_avg_cost();
		float get_payoff();

};

#endif


