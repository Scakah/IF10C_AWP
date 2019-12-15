#include <iostream>

using namespace std;

int main () {

	float f_anhalteweg, f_geschwindigkeit, f_abstand = 0.0;
	int i_verzoegerung, i_reaktion, i_menue = 0;
	char c_nochmal = 'J';

	while(c_nochmal == 'j' || c_nochmal == 'J') {
		
		//Reinitialisieren
		i_menue = 0;
		f_anhalteweg = f_geschwindigkeit = f_abstand = 0.0;
		i_verzoegerung = i_reaktion = i_menue = 0;
		
		//Anleitung ausgeben
		cout << "--- Bestimmung des Anhaltewegs ---" << endl;
		cout << "\n Bitte geben sie die gefahrene \nGeschwindigkeit in km/h ein: ";
		cin >> f_geschwindigkeit;
		cout << "\n\n Bitte geben sie die restliche \nStrecke bis zum Hindernis in m ein: ";
       		cin >> f_abstand;
		cout << "\nBitte geben Sie die Reaktionszeit\nin s (Schrecksekunde ca.1) ein: ";
		cin >> i_reaktion;
		
		//Menue verarbeiten
		do {
			cout << "Auf welchem Boden fahren sie?" << endl;
			cout << "(1) Nasser Asphalt,\n(2) Trockener Asphalt,\n(3) Nasser Beton,\n(4) Trockener Beton,\n(5) Schnee oder\n(6) Eis\n";
			cin >> i_menue;
			switch(i_menue) {
				case 1: 
					i_verzoegerung = 3;
					break;
				case 2: 
					i_verzoegerung = 5;
					break;
				case 3: 
					i_verzoegerung = 7;
					break;
				case 4: 
					i_verzoegerung = 9;
					break;
				case 5: 
					i_verzoegerung = 2;
					break;
				case 6:
			       		i_verzoegerung = 1;
					break;
				default:
			        	cout << "Falsche eingabe. Versuchen sie es noch einmal!" << endl;	
					break;

			}
		} while( i_menue < 1 && i_menue > 4);
	
		//Berechnen
		//v in km/h ist v/3,6 in m/s
		f_geschwindigkeit /= 3.6;
		// s	     =        v            *    t       + (                    v^2                    / ( 2 *  a             ) )
		f_anhalteweg = ( f_geschwindigkeit * i_reaktion + ( ( f_geschwindigkeit * f_geschwindigkeit ) / ( 2 * i_verzoegerung ) ) );
	
		//Ergebnis auswerten
		if(f_anhalteweg <= f_abstand)
		{
			cout << "Geschwindigkeit in m/s: " << f_geschwindigkeit << endl;
			cout << "Anhalteweg: " << f_anhalteweg << " meter";
			cout << "\n glueck gehabt!";	
		}
		else {
			cout << "Geschwindigkeit in m/s: " << f_geschwindigkeit << endl;
			cout << "Anhalteweg: " << f_anhalteweg << " meter";
			cout << "\n Ohh no!\n";
		}

		cout << "Noch eine Rechnung? (J)/(N)";
		cin >> c_nochmal;
		}
	

}
