#include <iostream>
#include <string>
#include "FBullCowGame.h";

void printIntro();

void playGame();

std::string getGuess();

bool AskToPlayAgain();

int main() {
	printIntro();
	do {
		playGame();
	} while (AskToPlayAgain());
	return 0;
}

void playGame()
{
	FBullCowGame BCGame;
	// loop for the numbers of turns asking for guess
	constexpr int NUMBER_OF_TURNS = 5;
	for (int i = 0; i < NUMBER_OF_TURNS; i++) {
		std::string guess = getGuess();
		std::cout << "your guess was: " << guess << std::endl;
	}
}

void printIntro() {
	// introduce the game
	constexpr int WORD_LENGTH = 5;
	std::cout << "Welcom to Bowls And Cows, a fun word game \n";
	std::cout << "Cany you guess the " << WORD_LENGTH;
	std::cout << " letters isogram I'm thinking about? \n";
	return;
};

std::string getGuess() {
	std::cout << "enter your guess \n";
	std::string  Guess = "";
	std::getline(std::cin, Guess);
	return Guess;
};

bool AskToPlayAgain() {
	std::cout << "do you wnat to play agein (y/n) \n";
	std::string response = "";
	getline(std::cin, response);
	if (response[0] == 'y' || response[0] == 'Y') {
		return true;
	};
	return false;
}