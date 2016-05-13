/******************************************************
** Program: penguin.cpp
** Author: Jimwel Aguinaldo
** Date: 05/06/2016
** Description: Virtual zoo that houses tigers, polar bears, penguins
** Input: Buy animals, name, disease choice, baby choice
** Output: User info
******************************************************/
#include "penguin.h"

/*********************************************************************
** Function: Penguin::Penguin()
** Description: Default Constructor of Penguin
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
Penguin::Penguin()
{
	age = 3;
	avg_cost = 10;
	payoff = 50;
}

/*********************************************************************
** Function: Penguin::Penguin(int age)
** Description: Non-default Constructor
** Parameters: int age
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
Penguin::Penguin(int age)
{
	this -> age = age;
	avg_cost = 20;
	payoff = 100;
}

/*********************************************************************
** Function: Penguin::get_avg_cost()
** Description: get member average cost
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
float Penguin::get_avg_cost()
{
	return avg_cost;
}

/*********************************************************************
** Function: Penguin::get_payoff()
** Description: get member payoff
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
float Penguin::get_payoff()
{
	return payoff;
}


