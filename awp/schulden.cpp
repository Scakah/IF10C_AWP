#include <iostream>

using namespace std;

int main() {

	double d_einkommen = 0.0;
	double d_ausgaben = 0.0;
	double d_eingabe = 0.0;
	char c_eingabe = '\0';
	
	
	cout << "(A)usgabe, (E)innahme, (B)erechnen oder (S)top?" << endl;
	cin >> c_eingabe;
	
	while(c_eingabe != 'S' && c_eingabe != 's') 
	{	
		if(c_eingabe == 'E') {
		
			cout << "Eingabe eingeben: \n";
			cin >> d_eingabe;
			d_einkommen += d_eingabe;
		}
		if(c_eingabe == 'A') {
		
			cout << "Ausgabe eingeben: \n";
			cin >> d_eingabe;
			d_ausgaben += d_eingabe;
		}
		if(c_eingabe == 'B') {
			double d_bilanz = d_einkommen - d_ausgaben;
			cout << "Die Bilanz ist: " << d_bilanz << endl;
			if(d_bilanz < 0) {
			
				cout << "Mehr Sparen!" << endl;
			}
			if (d_bilanz == 0) {
				
				cout << "Nicht noch mehr ausgeben!" << endl;
			}
			if ( d_bilanz > 0) {
				cout << "Vielleicht etwas mehr ausgeben..." << endl;
			}

		}
		cout << "(A)usgabe, (E)innahme, (B)erechnen oder (S)top?" << endl;
		cin >> c_eingabe;
	}

}

