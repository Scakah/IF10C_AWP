#include <iostream>

using namespace std;

int main()
{
	//VARIABLENDEKLARATION
	int i_Zeit = 0; float f_Betrag = 0.0;
	char c_Taste;
	const int iTakt = 15;
	const float f_einheit = 0.5;

	//ANLEITUNG
	cout << "Press 'P' for ticket! \n";
	
	//EINGABE
	cin >> c_Taste;

	//VERARBEITUNG

	//'Wenn' fall
	if (c_Taste == 'P' || c_Taste == 'p')
	{
		//EINGABE
		cin >> c_Taste;

		//VERARBEITUNG
		i_Zeit = i_Zeit + iTakt;
		f_Betrag = f_einheit * i_Zeit / iTakt;

		//AUSGABE
		if (c_Taste == 'o')
		{
			cout << "Parkzeit " << i_Zeit << " minuten \n Betrag: " << f_Betrag;
		}
		else
		{
			cout << "MAXIMAL 15 MINUTEN!";
		}
	}
	//'sonst' fall
	else
	{
		cout << "Fehler!";
	}

	getchar();
	getchar();
	return 0;

}