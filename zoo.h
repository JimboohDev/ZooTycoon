/******************************************************
** Program: zoo.h
** Author: Jimwel Aguinaldo
** Date: 05/06/2016
** Description: Virtual zoo that houses tigers, polar bears, penguins
** Input: Buy animals, name, disease choice, baby choice
** Output: User info
******************************************************/
#ifndef ZOO_H
#define ZOO_H
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "animal.h"
#include "tiger.h"
#include "polarbear.h"
#include "penguin.h"
#include "shark.h"

using namespace std;

class Zoo
{
	private:
		int day;
		float money;
		float avg_food;
		float payoff;
		int num_tigers; //Number of Tigers
		int num_polarbears; //Number of Polarbears
		int num_penguins;   //Number of Penguins
		int num_sharks;  //Number of Sharks
		
		Tiger *tiger_exhibit; //Array of Tigers	
		Polarbear *pb_exhibit;  //Array of Polarbears
		Penguin *penguin_exhibit;  //Array of Penguins
		Shark *shark_exhibit;  //Array of Sharks
		
	public:
		/* Constructors */
		Zoo();

		/* Mutators */ 
		void set_money(float money);
		void set_avg_food(float avg_food);
		void set_payoff(float payoff);
		void set_day(); //Increment day +1
		void set_num_tigers(); //Increases number of tigers +1
		void set_num_polarbears(); //Increases number of polar +1
		void set_num_penguins(); //Increases number of penguins +1
		void set_num_sharks();  //Increase number of sharks +1

		/* Accessors */
		float get_money();
		float get_avg_food();
		float get_payoff();
		int get_day();
		int get_num_tigers();
		int get_num_polarbears();
		int get_num_penguins();
		int get_num_sharks();

		/* Deconstructors */
		~Zoo();
		
		/* Other */
		void buy_animals(string name, bool *gameover);
		void print_user_info(string name);
		void apply_payoff();

		void begin_day(string playername);   //All consisting task to begin day
		void charge_avg_food();	//Charge user for feeding animals
		void increase_animal_age();   //Increase all animal age +1
			
		void add_tiger(int age);
		void add_polarbear(int age);
		void add_penguin(int age);
		void add_shark(int age);

		void remove_tiger();
		void remove_polarbear();
		void remove_penguin();
		void remove_shark();
	
		void random_event();	
		void sickness_event();   //Sicknees occurs in the event
		void boom_event();   //A boom in zoo attendance occurs
		void baby_event();   //A baby animal is born
};

#endif
