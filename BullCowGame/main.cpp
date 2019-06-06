#include <iostream>
#include <string>

using namespace std;

void printIntro();

void playGame();

string getGuess();

int main() {
	printIntro();
	playGame();
	return 0;
}

void playGame()
{
	// loop for the numbers of turns asking for guess
	constexpr int NUMBER_OF_TURNS = 5;
	for (int i = 0; i < NUMBER_OF_TURNS; i++) {
		string guess = getGuess();
		cout << "your guess was: " << guess << endl;
	}
}

void printIntro() {
	// introduce the game
	constexpr int WORD_LENGTH = 5;
	cout << "Welcom to Bowls And Cows, a fun word game \n";
	cout << "Cany you guess the " << WORD_LENGTH;
	cout << " letters isogram I'm thinking about? \n";
	return;
};

string getGuess() {
	cout << "enter your guess \n";
	string  Guess = "";
	getline(cin, Guess);
	return Guess;
};
