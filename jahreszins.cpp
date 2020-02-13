#include <iostream>
#include <cmath>

using namespace std;

int menue(void);
float eingabeBetrag(void);
float berechneEndbetrag(float fpar_kapital, float fpar_zinssatz, int ipar_laufzeit);
float berechneEndbetrag_jaehrlich(float fpar_kapital, float fpar_zinssatz, int ipar_laufzeit);

int main() {

	//Variablen definieren und initialisieren
	float f_kapital, f_endkapital, f_zinssatz = 0;
	int i_laufzeit, i_auswahl = 0;
	char c_nochmal = 'n';
	do {
		//Bildschirm löschen
		//system("cls"); <= Windows
		system("clear"); //<= *nix Systeme

		//Funktionsaufruf -> menue
		i_auswahl = menue();
	
		switch(i_auswahl) {
		
			case 1: 
				//Eingabe (einlesen)
				cout << "Bitte geben sie das Startkapital in Euro ein: ";
				f_endkapital = eingabeBetrag();
				cout << "\nBitte geben sie den Zinssatz in Prozent ein: ";
				f_zinssatz = eingabeBetrag();
				cout << "\nBitte geben sie die Laufzeit in Jahren ein: ";
				i_laufzeit = eingabeBetrag();
				
				//Verarbeitung (Funktionsaufruf)
				f_endkapital = berechneEndbetrag( f_endkapital, f_zinssatz, i_laufzeit);
				
				//Ausgabe
				cout << "Nach " << i_laufzeit <<" Jahren: " << f_endkapital << endl;
				break;
			case 2:		
				//Eingabe (einlesen)				
				cout << "Bitte geben sie das Startkapital in Euro ein: ";
				f_endkapital = eingabeBetrag();
				cout << "\nBitte geben sie den Zinssatz in Prozent ein: ";
				f_zinssatz = eingabeBetrag();
				cout << "\nBitte geben sie die Laufzeit in Jahren ein: ";
				i_laufzeit = eingabeBetrag();
				
				//Verarbeitung und Ausgabe
				berechneEndbetrag_jaehrlich(f_endkapital, f_zinssatz, i_laufzeit);
				break;
			default:
				cout << "Dieser Menuepunkt ist nicht vorhanden";
				break;	

		}

		cout << "Nochmal?" << endl;
		cin >> c_nochmal;
		
	} while( c_nochmal == 'j' || c_nochmal == 'J'); 
}

int menue(void) {
	int i_ergebnis = 0;
		cout << "Bitte Menuepunkt auswaehlen\n";
		cout << "<1> Sparplan berechnen\n";
		cout << "<2> Sparplan mit jährlicher Ausgabe\n";
		cout << "\n Ihre Wahl:";
		cin >> i_ergebnis;
		return i_ergebnis;
}

float eingabeBetrag(void) {
	float f_eingabe = 0.0;
	cin >> f_eingabe;
	return f_eingabe;
}

float berechneEndbetrag(float fpar_kapital, float fpar_zinssatz, int ipar_laufzeit) {
	float f_ergebnis = 0.0;
	f_ergebnis = fpar_kapital * pow( 1 + (fpar_zinssatz / 100), ipar_laufzeit);
	return f_ergebnis;
}

float berechneEndbetrag_jaehrlich(float fpar_kapital, float fpar_zinssatz, int ipar_laufzeit) {
	float f_ergebnis = 0.0;
	for(int a = 1; a <= ipar_laufzeit; a++) {
		f_ergebnis = berechneEndbetrag(fpar_kapital, fpar_zinssatz, a);
		cout << "Nach dem " << a << ". Jahr:\t\t\t" << f_ergebnis << endl;
	}
}
