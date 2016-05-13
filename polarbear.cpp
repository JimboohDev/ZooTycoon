/******************************************************
** Program: polarbear.cpp
** Author: Jimwel Aguinaldo
** Date: 05/06/2016
** Description: Virtual zoo that houses tigers, polar bears, penguins
** Input: Buy animals, name, disease choice, baby choice
** Output: User info
******************************************************/
#include "polarbear.h"
#include <iostream>

/* Constructor */
/*********************************************************************
** Function: Polarbear::Polarbear()
** Description: Default Constructor
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
Polarbear::Polarbear()
{
	age = 3;
	avg_cost = 30.00;
	payoff = 250.00;
}

/*********************************************************************
** Function: Polarbear::Polarbear(int age)
** Description: Non-Default Constructor
** Parameters: int age
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
Polarbear::Polarbear(int age)
{
	this -> age = age;
	avg_cost = 60.00;
	payoff = 500.00;
}

/* Accessories */
/*********************************************************************
** Function: Polarbear::get_avg_cost()
** Description: get member average cost
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
float Polarbear::get_avg_cost()
{
	return avg_cost;
}

/*********************************************************************
** Function: Polarbear::get_payoff()
** Description: get member payoff
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
float Polarbear::get_payoff()
{
	return payoff;
}
