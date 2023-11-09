#include <string>
#ifndef Game_H
#define Game_H

//Create Game class
class Game {
private:

public:
	//Constructor and Destructor
	Game();
	~Game();

	//Creates and initializes variables
	int wins = 0;
	int losses = 0;

	//Creates and initializes winning and losing phrase arrays
	std::string winMsg[10]{ "WINNER!!!", "You Win", "Amazing, you did it.", "YOOOOOOOOOOOO!", "You the GOAT",
	"Incredible", "WE GOT A WINNER OF HERE", "W", ":)", "OH MY GOD YOU DID IT" };
	std::string loseMsg[10]{ "Awful", "LOSER!", "How could you lose that one", "Idiot", "You suck at this",
	"WROOOOONG", "Did you really think you would win?", "L", ":(", "I'm not mad, just disappointed" };
	std::string retryMsg[10]{ "Retry?", "Do you want to go again?", "Another one?", "Just one more game?", "Again?",
	"Play some more?", "Want a do-over?", "Try again?", "Once more?", "Try, try again?" };

	//Int Functions
	int rNumber(int max);
	//Bool Functions
	void retry(bool& play);
	//Void Functions
	void win();
	void lose();
	void winLoss();
	void guessing();

};

#endif
