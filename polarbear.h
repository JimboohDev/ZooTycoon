/******************************************************
** Program: polarbear.cpp
** Author: Jimwel Aguinaldo
** Date: 05/06/2016
** Description: Virtual zoo that houses tigers, polar bears, penguins
** Input: Buy animals, name, disease choice, baby choice
** Output: User info
******************************************************/
#ifndef POLARBEAR_H
#define POLARBEAR_H
#include "animal.h"
#include <iostream>

using namespace std;

class Polarbear:public Animal
{
	private:
		float avg_cost;
		float payoff;
	public:
		/* Constructor */
		Polarbear();
		Polarbear(int age);

		/* Accessors */
		float get_avg_cost();
		float get_payoff();
};

#endif
