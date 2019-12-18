#include <iostream>
#include <Windows.h>
#include <time.h>

using namespace std;

int main() {

	//Anleitung und Initialisieren
	int i_hoehe = 0;
	int i_variante = -1;
	int i_stamm = 0;
	//Variante Einlesen mit Fehlerkorrektur
	do {
		cout << "--Weihnachtsbaum\n\nWelche Variante soll gezeichnet\nwerden? <1-4>: ";
		cin >> i_variante;
	} while (i_variante < 1 || i_variante > 5);
	cout << "- Variante " << i_variante << " -\n\n";


	//Hoehe Einlesen mit Fehlerkorrektur
	do {
		cout << "Hoehe des Baumes\neingeben <5-40>: ";
		cin >> i_hoehe;
		cout << "\n\n";
	} while (i_hoehe < 5 || i_hoehe > 40);

	//Verarbeitung
	switch (i_variante) {

	case 1:
		//Stamm ohne Blätter
		for (int a = 1; a <= i_hoehe; a++) {
			cout << "x\n";
		}
		break;
	case 2:
		//Gruebbl, baum mit nur einer seite Blätter
		for (int a = 1; a <= i_hoehe; a++) {
			for (int b = 1; b <= a; b++) {
				cout << "x ";
			}
			cout << "\n";
		}
		break;
	case 3:
		//Baum ohne Stamm
		for (int a = 1, c = 1; a <= i_hoehe; a++, c += 2) {
			//Leerstellen vor der Ebene (Achtung: 2 leerzeichen!);
			//Weniger leerzeichen mit steigender Hoehe
			for (int b = i_hoehe - a; b > 0; b--)
			{
				cout << "  ";
			}

			//Mehr zeichen mit steigender Hoehe
			for (int b = 1; b <= c; b++) {
				cout << "x ";
			}

			//Umbruch nach der Ebene
			cout << "\n";
		}
		break;
	case 4:
		cout << "Stammhoehe eingeben: <2-12>";
		cin >> i_stamm;

		cout << "\n\n";
		for (int a = 1, c = 1; a <= i_hoehe; a++, c += 2) {
			//Weniger leerzeichen mit steigender hoehe
			for (int b = i_hoehe - a; b > 0; b--)
			{
				cout << "  ";
			}

			//Mehr Zeichen je nach Hoehe
			for (int b = 1; b <= c; b++) {
				cout << "x ";
			}
			cout << "\n";
		}

		//Baumstamm nach eingegebener Stammlaenge
		for (int b = 1; b <= i_stamm; b++) {
			for (int a = 1; a < i_hoehe; a++)
			{
				cout << "  ";
			}
			cout << "H\n";
		}
		break;
	case 5:
		//Voller Baum
		cout << "Stammhoehe eingeben: <2-12>";
		cin >> i_stamm;

		cout << "\n\n";

		int i_ebenen = rand() % i_hoehe;
		int i_letzteHoehe = 1;
		for (int d = 1; d < i_ebenen; d++) {
			for (int a = i_letzteHoehe, c = 1; a <= i_hoehe; a++, c += 2) {
				//Weniger leerzeichen mit steigender hoehe
				for (int b = i_hoehe - a; b > 0; b--)
				{
					cout << "  ";
				}

				//Mehr Zeichen je nach Hoehe
				for (int b = 1; b <= c; b++) {
					cout << "x ";
				}
				cout << "\n";
				i_letzteHoehe = rand() % a;
			}

		}
		//Baumstamm nach eingegebener Stammlaenge
		for (int b = 1; b <= i_stamm; b++) {
			for (int a = 1; a < i_hoehe; a++)
			{
				cout << "  ";
			}
			cout << "H\n";
		}
		getchar();
		getchar();
	}



