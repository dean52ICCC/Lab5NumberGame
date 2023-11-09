/*
	Brayden Dean
	C++ 2023
	Due: November/10/2023
	Lab 5
	Write a number-guessing game with a random number in the range of 0 to 100 and max 20 tries.
	Users are told if they won or lost, and then asked to play again. When quitting, output the
	total wins and losses. Vary messages for losing, and asking for another game. Randomly choose
	from 10 different messages for each. At least one Do-While loop and at least one Switch statement.
	Use classes. Source code file called Lab5.cpp

*/

#include <iostream>
#include "Game.h"

int main() {
	//Create the game object
	Game nGame;

	//Create and initialize variables
	bool play = true;

	//While loop for playing
	while (play) {
		system("cls");

		nGame.guessing();
		nGame.retry(play);
	}

	//Displays amount of wins and losses
	nGame.winLoss();

	return 0;
}