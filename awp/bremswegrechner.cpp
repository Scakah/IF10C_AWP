#include <iostream>

using namespade std;

int main () {

	float f_anhalteweg, f_geschwindigkeit, f_abstand = 0.0;
	int i_verzoegerung, i_reaktion, i_menue = 0;
	char c_nochmal = 'J';

	cout << "--- Bestimmung des Anhaltewegs ---" << endl;
	cout << "\n Bitte geben sie die gefahrene \nGeschwindigkeit in km/h ein: ";
	cin >> f_geschwindigkeit;
	cout << "\n\n Bitte geben sie die restliche \nStrecke bis zum Hindernis in m ein: ";
       	cin >> f_abstand;
	cout << "\nBitte geben Sie die Reaktionszeit\nin s (Schrecksekunde ca.1) ein: ";
	cin >> i_reaktion;
	do {
		cout << "(1) Nasser Asphalt, (2) Trockener Asphalt, (3) Nasser Beton, (4) Trockener Beton";
		cin >> i_menue;
		switch(i_menue) {
			case 1: 
				i_verzoegerung = 9;
				break;
			case 2: 
				i_verzoegerung = 7;
				break;
			case 3: 
				i_verzoegerung = 5;
				break;
			case 4: 
				i_verzoegerung = 3;
				break;
			default: 
				break;

		}
	} while( i_menue < 1 && i_menue > 4);
	
	f_geschwindigkeit /= 3.6;
	//TODO: Anhalteweg berechnen
	

	if(f_anhalteweg <= f_abstand)
	{
		cout << "Anhalteweg: " << f_anhalteweg;
		cout << "\n glueck gehabt!";	
	}
	else {
		cout << "Anhalteweg: " << f_anhalteweg;
		cout << "Ohh no!"
	}

	cin >> c_eingabe;
	
	

}
