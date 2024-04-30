#include <iostream>

using namespace std;

int main()
{
	string notesArray[12] =
	{
		"A",
		"A#",
		"B",
		"C",
		"C#",
		"D",
		"D#",
		"E",
		"F",
		"F#",
		"G",
		"G#"
	};

	string triadsArray[12]; //C  E  G, DF#A

	for (int i = 0; i < 12; i++)
	{
		string firstNote = notesArray[i];
		string secondNote = notesArray[(i + 4) % 12];
		string thirdNote = notesArray[(i + 7) % 12];

		triadsArray[i] = firstNote + "\t" + secondNote + "\t" + thirdNote;
	}

	for (string majorTriads : triadsArray)
	{
		cout << majorTriads << endl;
	}

	return 0;
}