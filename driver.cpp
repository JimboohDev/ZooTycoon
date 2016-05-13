/******************************************************
** Program: driver.cpp
** Author: Jimwel Aguinaldo
** Date: 05/06/2016
** Description: Virtual zoo that houses tigers, polar bears, penguins
** Input: Buy animals, name, disease choice, baby choice
** Output: User info
******************************************************/
#include "zoo.h"
#include "tiger.h"
#include "polarbear.h"
#include "penguin.h"
#include <iostream>
#include <cstdlib>

using namespace std;

/*********************************************************************
** Function: main()
** Description: Driver for program
** Parameters: none
** Pre-Conditions: class zoo must exist
** Post-Conditions: gameover is true
*********************************************************************/ 
int main()
{
	Zoo zootopia;
	string playername;
	bool gameover = false;
	srand(time(0));
	
	system("clear");
	
	cout << "******************************" << endl;
	cout << "      	  ZOO-TYCOON         " << endl;
	cout << "******************************" << endl;
	
	/* Day 1 */
	cout << "Please enter your name: ";
	cin >> playername;
	
	system("clear");
	
	cout << "Day " << zootopia.get_day() << endl;
	cout << "~You will now choose your animals!" << endl;
	cout << endl;

	zootopia.buy_animals(playername, &gameover);
	cout << endl;

	/* Day 2 */
	while(!gameover)
	{
		zootopia.begin_day(playername);
		cout << "~You will now buy animals!" << endl;
		cout << endl;
		zootopia.buy_animals(playername, &gameover);
	}
		
	
	return 0;
}

