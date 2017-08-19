#pragma once
#include<string>

using Fstring = std::string;
using int32 = int;

struct BullCowCount
{
	int32 Bulls = 0;
	int32 Cows = 0;
};

class FBullCowGame
{
public:
	
	FBullCowGame(); //Constructor

	void reset(); //TODO make a more rich return value.
	int32 GetMaxTries() const;
	int32 CurrentTry() const;
	bool IsGameWon() const;
	bool CheckGuessValidity(Fstring);// TODO make a more rich return value.
	BullCowCount SubmitGuess(Fstring);

private:
	//See constructor for initialisation
	int MyCurrentTry;
	int32 MyMaxTries;
	Fstring MyHiddenWord;
};

