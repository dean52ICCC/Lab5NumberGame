#include "Game.h"
#include <iostream>
#include <time.h>
#include <string>

//Constructor and destructor
Game::Game() {}
Game::~Game() {}

//Gives random number from 0 to given max
int Game::rNumber(int max) {
	srand(time(NULL));
	return rand() % max;
}

//Displays win text and adds 1 to current wins
void Game::win() {
	std::cout << winMsg[rNumber(10)] << std::endl;
	wins++;
}

//Displays lose text and adds 1 to current losses
void Game::lose() {
	std::cout << loseMsg[rNumber(10)] << std::endl;
	losses++;
}

//Asks if the player wants to retry and returns true or false
void Game::retry(bool& play) {
	//Asks for retry and gets input
	std::string retry;
	std::cout << retryMsg[rNumber(10)] << std::endl;
	std::cout << "(Y/N)" << std::endl;
	std::cin >> retry;

	//Checks if player said yes to retrying
	if (retry == "y" || retry == "Y") {
		play = true;
	}
	else {
		play = false;
	}
}

//Displays wins and losses
void Game::winLoss() {
	std::cout << "Wins: " << wins << std::endl;
	std::cout << "Losses: " << losses << std::endl;
}

void Game::guessing() {
	int answer = rNumber(100);
	int guess;
	int tries = 20;

	std::cout << "Guess a number between 0 and 100;" << std::endl;

	do {
		std::cin >> guess;
		if (guess == answer) {
			win();
			break;
		}
		tries--;
	} while (tries > 0);
	if (tries == 0) {
		lose();
		std::cout << "The answer was: " << answer << std::endl;
	}
}