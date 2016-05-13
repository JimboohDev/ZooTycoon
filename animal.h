/******************************************************
** Program: animal.h
** Author: Jimwel Aguinaldo
** Date: 05/06/2016
** Description: Virtual zoo that houses tigers, polar bears, penguins
** Input: Buy animals, name, disease choice, baby choice
** Output: User info
******************************************************/
#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

using namespace std;

class Animal
{
	protected:
		int age;
		int babies;
	public:
		/* Constructors */
		Animal();

		/* Mutators */
		void set_age(int age);
		void set_babies(int babies);
		void increase_age();

		/* Accessors */
		int get_age();
		int get_babies();

};

#endif
