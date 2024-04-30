#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
	string wordToBeGuess;

	cout << "Welcome to the word guessing Game." << endl;

	cout << "P1 - ENter a word to be guessed: " << endl;
	cin >> wordToBeGuess;

	system("cls");

	string guessedAnswer(wordToBeGuess.length(), '_');
	//string answer;
	//string guessedAnswer = " ";
	int attempt = 6;

	//cout << "Welcome to the word guessing Game." << endl;

	while (attempt > 0 && guessedAnswer != wordToBeGuess)
	{
		char guessedLetter; //"g"
		cout << "Player 2- Enter a letter that you think is in that word \n";
		cin >> guessedLetter;
		attempt--;
		cout << "Attempts left. " << attempt << endl;

		//wordToBeGuess.repla
		for (int i = 0; i < wordToBeGuess.length(); i++)
		{
			if (wordToBeGuess[i] == guessedLetter)//
			{
				cout << "You guessed a letter correctly - updating the mystery word ..." << endl; 
				guessedAnswer[i] = guessedLetter; 
			}
		}
		cout << "Current word: " << guessedAnswer << endl;

	}
	if (guessedAnswer == wordToBeGuess)
	{
		cout << "You win!\n";

	}

	else
	{
		cout << "Word was ..." << wordToBeGuess << endl;
		cout << "Too many guessed - lost!\n";
	}

	return 0;
}