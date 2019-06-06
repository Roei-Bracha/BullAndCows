#pragma once

#include <string>

class FBullCowGame {
public:
	void Reset(int WordLength);
	int GetMaxTries();
	int GetCurrentTry();
	bool isGameWon();
	bool CheckGuessValidity(bool guess);

private:
	int MyCurrentTry;
	int MaxTries;
	bool isIsogram(std::string word);
};