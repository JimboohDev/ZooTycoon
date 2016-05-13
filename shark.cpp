#include "shark.h"
#include <iostream>

using namespace std;

/* Constructors */
Shark::Shark()
{
	age = 3;
	avg_cost = 5.00;
	payoff = 100.00;
}

Shark::Shark(int age)
{
	this -> age = age;
	avg_cost = 10.00;
	payoff = 2000.00;
}

/* Accessors */
float Shark::get_avg_cost()
{
	return avg_cost;
}

float Shark::get_payoff()
{
	return payoff;
}
