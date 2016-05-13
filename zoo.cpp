/******************************************************
** Program: zoo.cpp
** Author: Jimwel Aguinaldo
** Date: 05/06/2016
** Description: Virtual zoo that houses tigers, polar bears, penguins
** Input: Buy animals, name, disease choice, baby choice
** Output: User info
******************************************************/
#include "zoo.h"
#include <ctime> 

/* Constructors */
/*********************************************************************
** Function: Zoo::Zoo()
** Description: Default-Constructor
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
Zoo::Zoo()
{
	day = 1;
	money = 100000.00;
	num_tigers = 0;
	num_polarbears = 0;
	num_penguins = 0;
	num_sharks = 0;
	avg_food = 0;
	payoff = 0;

	tiger_exhibit = NULL;
	pb_exhibit = NULL;
	penguin_exhibit = NULL;
	shark_exhibit = NULL;

}

/* Mutators */
/*********************************************************************
** Function: Zoo::set_money(float money)
** Description: Mutate member money
** Parameters: float money
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
void Zoo::set_money(float money)
{
	this -> money = money;
}

/*********************************************************************
** Function: Zoo::set_avg_food(float avg_food)
** Description: Mutate member average food
** Parameters: float avg_food
** Pre-Conditions: nont
** Post-Conditions: none
*********************************************************************/ 
void Zoo::set_avg_food(float avg_food)
{
	this -> avg_food = avg_food;
}

/*********************************************************************
** Function: Zoo::set_payoff(float payoff)
** Description: Mutate member payoff
** Parameters: float payoff
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
void Zoo::set_payoff(float payoff)
{
	this -> payoff = payoff;
}

/*********************************************************************
** Function: Zoo::set_day()
** Description: Mutate member day
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
void Zoo::set_day()
{
	day++;
}

/*********************************************************************
** Function: Zoo::set_num_tigers()
** Description: mutate member number of tigers
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
void Zoo::set_num_tigers()
{
	num_tigers++;
}

/*********************************************************************
** Function: Zoo::set_num_polarbears()
** Description: Mutate member number of polarbears
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
void Zoo::set_num_polarbears()
{
	num_polarbears++;
}

/*********************************************************************
** Function: Zoo::set_num_penguins()
** Description: Mutate member number of penguins
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
void Zoo::set_num_penguins()
{
	num_penguins++;
}

/*********************************************************************
** Function: Zoo::set_num_sharks()
** Description: Mutate member number of sharks
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
void Zoo::set_num_sharks()
{
	num_sharks++;
}

/* Accessors */
/*********************************************************************
** Function: Zoo::get_money()
** Description: Access member money
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
float Zoo::get_money()
{
	return money;
}

/*********************************************************************
** Function: Zoo::get_avg_food()
** Description: Access member average food
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
float Zoo::get_avg_food()
{
	return avg_food;
}

/*********************************************************************
** Function: Zoo::get_payoff()
** Description: Access member payoff
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
float Zoo::get_payoff()
{
	return payoff;
}

/*********************************************************************
** Function: Zoo::get_day()
** Description: Access member day
** Parameters: none 
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
int Zoo::get_day()
{
	return day;
}

/*********************************************************************
** Function: Zoo::get_num_tigers()
** Description: Access member number of tigers
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
int Zoo::get_num_tigers()
{
	return num_tigers;
}

/*********************************************************************
** Function: Zoo::get_num_polarbears()
** Description: Access member number of polarbears
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
int Zoo::get_num_polarbears()
{
	return num_polarbears;
}

/*********************************************************************
** Function: Zoo::get_num_penguins()
** Description: Access member number of penguins
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
int Zoo::get_num_penguins()
{
	return num_penguins;
}

/*********************************************************************
** Function: Zoo::get_num_sharks()
** Description: Access member number of sharks
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
int Zoo::get_num_sharks()
{
	return num_sharks;
}

/* Deconstructor */
/*********************************************************************
** Function: Zoo::~Zoo()
** Description: Destructor
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: All dynamic memory is deallocated
*********************************************************************/ 
Zoo::~Zoo()
{
	delete [] tiger_exhibit;
	delete [] pb_exhibit;
	delete [] penguin_exhibit;
	delete [] shark_exhibit;
}


/* Others */
/*********************************************************************
** Function: Zoo::print_user_info(string name)
** Description: Print user info
** Parameters: string name
** Pre-Conditions: one user must be playing
** Post-Conditions: none
*********************************************************************/ 
void Zoo::print_user_info(string name)
{
	cout << "----------------------" << endl;
	cout << name << endl;
	cout << "Money: " << money << endl;
	cout << "Tigers: " << num_tigers << endl;
	cout << "Polar Bears: " << num_polarbears << endl;
	cout << "Penguins: " << num_penguins << endl;
	cout << "Sharks: " << num_sharks << endl;
	cout << "*********************" << endl;

	for(int i = 0; i < num_tigers; i++)
		cout << "Tiger [" << i << "]   " << "Age: " << tiger_exhibit[i].get_age() << endl;
	for(int i = 0; i < num_polarbears; i++)
		cout << "Polar bear [" << i << "]   " << "Age: " << pb_exhibit[i].get_age() << endl;
	for(int i = 0; i < num_penguins; i++)
		cout << "Penguin [" << i << "]   " << "Age: " << penguin_exhibit[i].get_age() << endl;
	for(int i = 0; i < num_sharks; i++)
		cout << "Shark [" << i << "]   " << "Age: " << shark_exhibit[i].get_age() << endl;


}

/*********************************************************************
** Function: Zoo::buy_animals(string name, bool *gameover)
** Description: Allow user to buy animals
** Parameters: string name, bool *gameover
** Pre-Conditions: user must have enough money
** Post-Conditions: usery buys or skips buying animals
*********************************************************************/ 
void Zoo::buy_animals(string name, bool *gameover)
{
	int choice;
	bool finish = false;

	while(!finish)
	{
		print_user_info(name);
		cout << "Choose following number that corresonds to the animal" << endl;
		cout << "(1) Tiger" << endl;
		cout << "(2) Polar Bear" << endl;
		cout << "(3) Penguin" << endl;
		cout << "(4) Shark" << endl;
		cout << "(5) End Game" << endl;
		cout << "(0) Finish" << endl;
		cout << "Enter Choice: ";;
		cin >> choice;

		if(choice == 1)
		{
			if(money - 10000 >= 0)
			{
				set_num_tigers();   //Increase number of tigers +1
				money -= 10000;   //Deduct 10000 from users money
				add_tiger(3);
			}
			else
			{
				cout << "Insufficient Funds! GAME OVER" << endl;
				*gameover = true;
				return;
			}
		}
		else if(choice == 2)
		{
			if(money - 5000 >= 0)
			{
				set_num_polarbears();
				money -= 5000;
				add_polarbear(3);
			}
			else
			{
				cout << "Insufficient Funds!" << endl;
				*gameover = true;
				return;
			}
		}
		else if(choice == 3)
		{
			if(money - 1000 >= 0)
			{
				set_num_penguins();
				money -= 1000;
				add_penguin(3);
			}
			else
			{
				cout << "Insufficiet Funds, Game over!" << endl;
				*gameover = true;
				return;
			}
		}
		else if(choice == 4)
		{
			if(money - 1000 >= 0)
			{
				set_num_sharks();
				money -= 1000;
				add_shark(3);
			}
			else
			{
				cout << "Insufficient Funds, Game over!" << endl;
				*gameover = true;
				return;;
			}
		}
		else if(choice == 5)
		{
			cout << "Thanks for playing!" << endl;
			*gameover = true;
			break;
			/*delete [] tiger_exhibit;
			delete [] pb_exhibit;
			delete [] penguin_exhibit;
			delete [] shark_exhibit;
			//delete gameover;*/
			//exit(1);
		}
		else if(choice == 0)
			break;
	}

}

/*********************************************************************
** Function: Zoo::increase_animal_age()
** Description: Increase all animals age +1
** Parameters: none
** Pre-Conditions: Must have atleast one animal
** Post-Conditions: All animals will have age increased +1
*********************************************************************/ 
void Zoo::increase_animal_age()
{
	cout << "Aging Animals....." << endl;
	for(int i = 0; i < num_tigers; i++)
		tiger_exhibit[i].increase_age();

	for(int i = 0; i < num_polarbears; i++)
		pb_exhibit[i].increase_age();

	for(int i = 0; i < num_penguins; i++)
		penguin_exhibit[i].increase_age();
	
	for(int i = 0; i < num_sharks; i++)
		shark_exhibit[i].increase_age();
}

void Zoo::charge_avg_food()
{
	cout << "Feeding Animals....." << endl;
	for(int i = 0; i < num_tigers; i++)
	{
		if(money - tiger_exhibit[i].get_avg_cost() >= 0)
			money -= tiger_exhibit[i].get_avg_cost();
		else
			cout << "Game over! You do not have enough money!" << endl;
	}
	for(int i = 0; i < num_polarbears; i++)
	{
		if(money - pb_exhibit[i].get_avg_cost() >= 0)
			money -= pb_exhibit[i].get_avg_cost();
		else 
			cout << "Game over! You do not have enough money!" << endl;
	}
	for(int i = 0; i < num_penguins; i++)
	{
		if(money - penguin_exhibit[i].get_avg_cost() >= 0)
			money -= penguin_exhibit[i].get_avg_cost();
		else 
			cout << "Game over! You do not have enough money!" << endl;
	}

	for(int i = 0; i < num_sharks; i++)
	{
		if(money - shark_exhibit[i].get_avg_cost() >= 0)
			money -= shark_exhibit[i].get_avg_cost();
		else 
			cout << "Game over! You do not have enough money!" << endl;
	}

}

/*********************************************************************
** Function: Zoo::apply_payoff()
** Description: Apply payoff to user's money
** Parameters: none
** Pre-Conditions: user must be playing
** Post-Conditions: payoff is applied to user's money
*********************************************************************/ 
void Zoo::apply_payoff()
{
	cout << "Collecting Payoff....." << endl;
	for(int i=0; i < num_tigers; i++)
		money += tiger_exhibit[i].get_payoff();
	
	for(int i=0; i < num_polarbears; i++)
		money += pb_exhibit[i].get_payoff();

	for(int i=0; i < num_penguins; i++)
		money += penguin_exhibit[i].get_payoff();

	for(int i=0; i < num_sharks; i++)
		money += shark_exhibit[i].get_payoff();

}

/*********************************************************************
** Function: Zoo::begin_day(string playername)
** Description: Run all tasks that are done to begin the day
** Parameters: string playername
** Pre-Conditions: User must go on to next day
** Post-Conditions: Day increases +1, and all tasks applied
*********************************************************************/ 
void Zoo::begin_day(string playername)
{
	system("clear");
	set_day();   //Increases day +1

	cout << "***********************" << endl;
	cout << "Day " << day << endl;
	cout << "***********************" << endl;

	increase_animal_age();   //Increase all animal age +1
	charge_avg_food();   //Charge user for feeding animals
	random_event();  //Random event takes place (Sickness, boom, baby)
}

/*********************************************************************
** Function: Zoo::add_tiger(int age)
** Description: Add tiger to the array
** Parameters: int age
** Pre-Conditions: user must buy animal or animal is born
** Post-Conditions: animal added to the array
*********************************************************************/ 
void Zoo::add_tiger(int age)
{
	if(tiger_exhibit == NULL)
	{
		Tiger newtiger;
		tiger_exhibit = new Tiger[num_tigers];
		tiger_exhibit[num_tigers-1] = newtiger;
	}
	else
	{
		Tiger *new_tiger_exhibit = new Tiger[num_tigers];
		for(int i = 0; i < num_tigers; i++)
		{
			new_tiger_exhibit[i] = tiger_exhibit[i];
		}
		delete [] tiger_exhibit;

		Tiger newtiger(age);
		new_tiger_exhibit[num_tigers-1] = newtiger;
		tiger_exhibit = new_tiger_exhibit;
		cout << tiger_exhibit[num_tigers-1].get_age() << endl;
		new_tiger_exhibit = NULL;
	}	
}

/*********************************************************************
** Function: Zoo::add_polarbear(int age)
** Description: Add polarbear to the array
** Parameters: int age
** Pre-Conditions: user must buy animal or animal is born
** Post-Conditions: animal added to the array
*********************************************************************/ 
void Zoo::add_polarbear(int age)
{
	if(pb_exhibit == NULL)
	{
		Polarbear newpolar;
		pb_exhibit = new Polarbear[num_polarbears];
		pb_exhibit[num_polarbears-1] = newpolar;
	}
	else
	{
		Polarbear *new_pb_exhibit = new Polarbear[num_polarbears];
		for(int i=0; i < num_polarbears; i++)
		{
			new_pb_exhibit[i] = pb_exhibit[i];
		}
		delete [] pb_exhibit;
		
		Polarbear newpolar(age);
		new_pb_exhibit[num_polarbears-1] = newpolar;
		pb_exhibit = new_pb_exhibit;
		new_pb_exhibit = NULL;	
	}	
}

/*********************************************************************
** Function: Zoo::add_penguin(int age)
** Description: Add penguin to the array
** Parameters: int age
** Pre-Conditions: user must buy animal or animal is born
** Post-Conditions: animal added to the array
*********************************************************************/ 
void Zoo::add_penguin(int age)
{
	if(penguin_exhibit == NULL)
	{
		Penguin newpenguin;
		penguin_exhibit = new Penguin[num_penguins];
		penguin_exhibit[num_penguins-1] = newpenguin;
	}
	else
	{
		Penguin *new_penguin_exhibit = new Penguin[num_penguins];
		
		for(int i = 0; i < num_penguins; i++)
			new_penguin_exhibit[i] = penguin_exhibit[i];

		delete [] penguin_exhibit;

		Penguin newpenguin(age);
		new_penguin_exhibit[num_penguins-1] = newpenguin;
		penguin_exhibit = new_penguin_exhibit;
		new_penguin_exhibit = NULL;
	}
}

/*********************************************************************
** Function: Zoo::add_shark(int age)
** Description: Add shark to the array
** Parameters: int age
** Pre-Conditions: user must buy animal or animal is born
** Post-Conditions: animal added to the array
*********************************************************************/ 
void Zoo::add_shark(int age)
{
	if(shark_exhibit == NULL)
	{
		Shark newshark;
		shark_exhibit = new Shark[num_sharks];
		shark_exhibit[num_sharks-1] = newshark;
	}
	else
	{
		Shark *new_shark_exhibit = new Shark[num_sharks];
		
		for(int i=0; i < num_sharks; i++)
			new_shark_exhibit[i] = shark_exhibit[i];
		
		delete [] shark_exhibit;
		
		Shark newshark(age);
		new_shark_exhibit[num_sharks-1] = newshark;
		shark_exhibit = new_shark_exhibit;
		new_shark_exhibit = NULL;	
	}	
}


/*********************************************************************
** Function: Zoo::remove_tiger()
** Description: Remove tiger from the tiger array
** Parameters: none
** Pre-Conditions: Atleast one tiger must be allocated
** Post-Conditions: First tiger in the array is removed
*********************************************************************/ 
void Zoo::remove_tiger()
{
	Tiger *new_tiger_exhibit = new Tiger[num_tigers - 1];

	for(int i = 1; i < num_tigers-1; i++)
		new_tiger_exhibit[i] = tiger_exhibit[i];

	num_tigers--; //decrease number of tigers -1

	if(tiger_exhibit != NULL)
		delete [] tiger_exhibit;

	tiger_exhibit = new_tiger_exhibit;
}

/*********************************************************************
** Function: Zoo::remove_polarbear()
** Description: Remove polar bear from the polar bear array
** Parameters: none
** Pre-Conditions: Atleast one polar bear must be allocated
** Post-Conditions: First polar bear in the array is removed
*********************************************************************/ 
void Zoo::remove_polarbear()
{
	Polarbear *new_pb_exhibit = new Polarbear[num_polarbears - 1];
	
	for(int i = 1; i < num_polarbears - 1; i++)
		new_pb_exhibit[i] = pb_exhibit[i];

	num_polarbears--;  //decrease number of polar bears -1;

	if(pb_exhibit != NULL)
		delete [] pb_exhibit;

	pb_exhibit = new_pb_exhibit;
}

/*********************************************************************
** Function: Zoo::remove_penguin()
** Description: Remove penguin from the penguin array
** Parameters: none
** Pre-Conditions: Atleast one penguin must be allocated
** Post-Conditions: First penguin in the array is removed
*********************************************************************/ 
void Zoo::remove_penguin()
{
	Penguin *new_penguin_exhibit = new Penguin[num_penguins - 1];

	for(int i = 1; i < num_penguins - 1; i++)
		new_penguin_exhibit[i] = penguin_exhibit[i];

	num_penguins--;   //decrease number of penguins -1

	if(penguin_exhibit != NULL)
		delete [] penguin_exhibit;

	penguin_exhibit = new_penguin_exhibit;
}

/*********************************************************************
** Function: Zoo::remove_shark()
** Description: Remove shark from the shark array
** Parameters: none
** Pre-Conditions: Atleast one shark must be allocated
** Post-Conditions: First shark in the array is removed
*********************************************************************/ 
void Zoo::remove_shark()
{
	Shark *new_shark_exhibit = new Shark[num_sharks - 1];

	for(int i = 1; i < num_sharks - 1; i++)
		new_shark_exhibit[i] = shark_exhibit[i];

	num_sharks--;   //decrease number of sharks -1

	if(shark_exhibit != NULL)
		delete [] shark_exhibit;

	shark_exhibit = new_shark_exhibit;
}

/*********************************************************************
** Function: Zoo::sickness_event()
** Description: A sickness event occurs, user choses which animal dies
** Parameters: none
** Pre-Conditions: random event must choose this event
** Post-Conditions: A animal wiil be removed from their array
*********************************************************************/ 
void Zoo::sickness_event()
{
	int choice;
	ifstream sickness_event;   //make input file stream object
	sickness_event.open("sickness_event.txt");  //open sickness_event.txt

	system("clear");	
	
	while(!sickness_event.eof())
	{
		string text;
		sickness_event >> text;
		cout << text << " ";
	}
	
	cout << endl;
	cout << "(1) Tiger" << endl;
	cout << "(2) Polar Bear" << endl;
	cout << "(3) Penguin" << endl;
	cout << "(4) Shark" << endl;
	cout << "Enter which animal will die: ";
	cin >> choice;
	
	if(choice == 1)
	{
		cout << "A tiger in your tiger exhibit has died....." << endl;
		remove_tiger();
	}
	else if(choice == 2)
	{
		cout << "A Polar Bear in your zoo has died....." << endl;
		remove_polarbear();
	}
	else if(choice == 3)
	{
		cout << "A Penguin has died in your zoo....." << endl;
		remove_penguin();
	}
	else if(choice == 4)
	{
		cout << "A Shark has died in your your zoo....." << endl;
		remove_shark();
	}
}

/*********************************************************************
** Function: Zoo::boom_event()
** Description: A boom event occurs, user earns 250 bonus per tiger
** Parameters: none
** Pre-Conditions: Random event must choose this event
** Post-Conditions: User gets money if tiger exist
*********************************************************************/ 
void Zoo::boom_event()
{
	int bonus = 0;
	ifstream boom_message; //make input file stream object
	boom_message.open("boom_event.txt"); //Open boom_event.txt

	system("clear");

	while(!boom_message.eof()) //While it did not reach end of file
	{
		string text;
		boom_message >> text;  //Store each word in text
		cout << text << " ";  //Print out text
	}
	cout << endl;

	for(int i = 0; i < num_tigers; i++)
	{
		money += 250;
		bonus += 250;
	}

	cout << "You have earned: " << bonus << endl;
}

/*********************************************************************
** Function: Zoo::baby_event()
** Description: A baby event occurs, user choose which animal has baby
** Parameters: none
** Pre-Conditions: Random event must choose this event
** Post-Conditions: User will recieve a baby
*********************************************************************/ 
void Zoo::baby_event()
{
	int choice;
	ifstream baby_message; //make a input file stream object
	baby_message.open("baby_event.txt"); //Open baby_event.txt

	system("clear");
	while(!baby_message.eof()) //While it did not reach end of file
	{
		string text;
		baby_message >> text; //Store each word in text
		cout << text << " "; //Print out text
	}
	baby_message.close();
	cout << endl;
	cout << "(1) Baby Tiger" << endl;
	cout << "(2) Baby Polar bear" << endl;
	cout << "(3) Baby Penguin" << endl;
	cout << "(4) Baby Shark" << endl;
	cout << "Please choose a baby: ";	
	cin >> choice;

	if(choice == 1)
	{
		num_tigers++;   //Increase number of tigers +1
		add_tiger(0);	//Add a tiger to the array
	}
	else if(choice == 2)
	{
		num_polarbears++;   //Increase number of polar bears +1
		add_polarbear(0);   //Add a polar bear to the array
	}
	else if(choice == 3)
	{
		num_penguins++;	  //Increase number of penguins +1
		add_penguin(0);	 //Add a penguin to the array
	}
	else if(choice == 4)
	{
		num_sharks++;	//Increase number of sharks +1
		add_shark(0);	//Add a shark to the array
	}

}

/*********************************************************************
** Function: Zoo::random_event()
** Description: Generates random event
** Parameters: none
** Pre-Conditions: Day must past day 1
** Post-Conditions: Random event will occur
*********************************************************************/ 
void Zoo::random_event()
{
	int event = 0;
		
	event = rand() % 6 + 1; //Generate secret number between 1 and 6
	
	if(event == 1) //If random num is 1, then sickness will occur
		sickness_event();
	
	else if(event == 2) //If random num is 2, then boom will occur
		boom_event();
	
	else if(event == 3)  //If random num is 3, then baby event will occur
		baby_event();
		
	//If 4,5,6, then nothing happens
	
}
