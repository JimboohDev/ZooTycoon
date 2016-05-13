/******************************************************
** Program: tiger.cpp
** Author: Jimwel Aguinaldo
** Date: 05/06/2016
** Description: Virtual zoo that houses tigers, polar bears, penguins
** Input: Buy animals, name, disease choice, baby choice
** Output: User info
******************************************************/
#include "tiger.h"
#include <iostream>

using namespace std;

/* Constructors */
/*********************************************************************
** Function: Tiger::Tiger()
** Description: Default Constructors
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
Tiger::Tiger()
{
	age = 3;
	avg_cost = 5.00;
	payoff = 1000.00;
}

/*********************************************************************
** Function: Tiger::Tiger(int age)
** Description: Non-default constructor
** Parameters: int age
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
Tiger::Tiger(int age)
{
	this -> age = age;
	avg_cost = 10.00;
	payoff = 2000.00;
}


/* Accessors */
/*********************************************************************
** Function: Tiger::get_avg_cost()
** Description: get member average cost
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
float Tiger::get_avg_cost()
{
	return avg_cost;
}

/*********************************************************************
** Function: Tiger::get_payoff()
** Description: get member payoff
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
float Tiger::get_payoff()
{
	return payoff;
}


