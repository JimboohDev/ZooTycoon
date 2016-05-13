#ifndef SHARK_H
#define SHARK_H
#include "animal.h"
#include <iostream>

using namespace std;

class Shark:public Animal
{
	private:
		float avg_cost;
		float payoff;
	public:
		/* Constructor */
		Shark();
		Shark(int age);

		/* Accessor */
		float get_avg_cost();
		float get_payoff();

};

#endif

