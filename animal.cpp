/******************************************************
** Program: animal.cpp
** Author: Jimwel Aguinaldo
** Date: 05/06/2016
** Description: Virtual zoo that houses tigers, polar bears, penguins
** Input: Buy animals, name, disease choice, baby choice
** Output: User info
******************************************************/
#include "animal.h"

/* Constructors */
/*********************************************************************
** Function: Animal::Animal()
** Description: Default Constructor
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
Animal::Animal()
{
	babies = 0;
}

/* Mutators */
/*********************************************************************
** Function: Animall::set_age(int age)
** Description: Set member age
** Parameters: int age
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
void Animal::set_age(int age)
{
	this -> age = age;
}

/*********************************************************************
** Function: Animal::set_babies(int babies)
** Description: Set member number of babies
** Parameters: int babies
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
void Animal::set_babies(int babies)
{
	this -> babies = babies;
}

/*********************************************************************
** Function: Animal::increase_age()
** Description: Increase member age 
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
void Animal::increase_age()
{
	age++;
}

/* Accessors */
/*********************************************************************
** Function: Animal::get_age()
** Description: Get member age
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
int Animal::get_age()
{
	return age;
}

/*********************************************************************
** Function: Animal::get_babies()
** Description: Get member babies
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
int Animal::get_babies()
{
	return babies;
}


