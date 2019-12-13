#include<iostream>

using namespace std;

int main()
{
	double d_betrag = 0.0;
	char c_waehrung = ' ';
	char c_weiterenBetragUmrechnen = 'n';

	cout << "---Waehrungsumrechner (Euro -> ?)---\n\n"
		"Moegliche Eingaben fuer Zielwaehrungen: \n"
		"a: Umrechnung in Australische Dollar\n"
		"d: Umrechnung in US-Dollar\n"
		"p: Umrechnung in Britische Pfund\n"
		"r: Umrechnung in Russische Rubel\n"
		"y: Umrechnung in Yen\n"
		;

	do
	{
		if (c_weiterenBetragUmrechnen == 'j' || c_weiterenBetragUmrechnen == 'J')
		{
			c_weiterenBetragUmrechnen = 'n';
			cout << "\nUmrechnung eines weiteren Betrages.";
		}

		cout << "\nUmzurechnender Betrag (in EUR): ";
		cin >> d_betrag;
		cout << "Zielwaehrung: ";
		cin >> c_waehrung;

		switch(c_waehrung) {
		case 'a': case 'A':
			cout << "Der Betrag ist: " << (d_betrag * 1.62) << endl;
			break;
		case 'd': case 'D':
			cout << "Der Betrag ist: " << (d_betrag * 1.11) << endl;
			break;
		case 'R': case 'r':
			cout << "Der Betrag ist: " << (d_betrag * 71.09) << endl;
			break;
		case 'P': case 'p':
			cout << "Der Betrag ist: " << (d_betrag * 0.86) << endl;
			break;
		case 'Y': case 'y':
			cout << "Der Betrag ist: " << (d_betrag * 120.76) << endl;
			break;
		default: break;
		}
		cout << "\nBetaetigen Sie die Taste 'j', wenn ein weiterer Betrag umgerechnet werden soll: ";
		cin >> c_weiterenBetragUmrechnen;
	} while (c_weiterenBetragUmrechnen == 'j' || c_weiterenBetragUmrechnen == 'J');

	return 0;
}
