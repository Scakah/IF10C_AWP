#include <iostream>
#include <string.h>
#include <time.h>

using namespace std;

int main()
{
	char* cp_eingabe = (char*)calloc(sizeof(char), 15);
	int i_stellen = 0;


	do {

		//Eingabe

		cout << "\nZielsystem (Moeglichkeiten: bin, hex; stop zum anhalten): ";
		cin >> cp_eingabe;
		cout << "Stellen: ";
		cin >> i_stellen;


		//Verarbeitung
		int randomNum = 0;
		for (int a = 0; a < i_stellen; a++)
		{
			randomNum += rand() % 10;
			randomNum *= 10;
		}

		randomNum /= 10;

		if (!(strcmp(cp_eingabe, "bin")))
		{
			cout << "Zahl: " << randomNum << " Eingabe, um das ergebnis anzuzeigen \n";
			getchar();
			getchar();

			while (randomNum != 0)
			{
				cout << "Ergebnis: " << randomNum / 2 << ", Rest: " << randomNum % 2 << "\n";
				randomNum = (randomNum - randomNum % 2) / 2;
			}
		}
		else if (!(strcmp(cp_eingabe, "hex")))
		{
			cout << "Zahl: " << randomNum << " Eingabe, um das ergebnis anzuzeigen \n";
			getchar();
			getchar();

			while (randomNum != 0)
			{
				cout << "Ergebnis: " << randomNum / 16 << ", Rest: " << randomNum % 16 << "\n";
				randomNum = (randomNum - randomNum % 16) / 16;
			}
		}
		else if (!(strcmp(cp_eingabe, "stop")))
		{
			goto Lstop;
		}
		else
		{
			cout << "Eingabe Fehlerhaft";
		}

	} while (getchar());

	//Wenn eure Konsole nicht eh offen bleibt...
Lstop:
	getchar();
}

