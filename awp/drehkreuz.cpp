#include <iostream>

using namespace std;

int main () {

	cout << "Schleifensteuerung:\n--------------------" << endl;

	for(int a = 30; a>0; a--) {
	cout << "Signal Drehkreuz" << endl;
	getchar();
	cout << "Noch " << a << " Plaetze frei \n";

	}
	cout << "Keine Plätze mehr frei \n";

}
