#include <iostream>

using namespace std;

int main() {
	int i_zeit = 0;
	int i_takt = 15;
	double d_betrag = 0.0;
	const double d_einheit = 0.5;
	char c_taste;

	while(c_taste != 's') {
		cout << flush;
		i_zeit = 0;
		d_betrag = 0.0;
		cout << "(P)arken (Parkzeit um 15 min. erhoehen oder (O)k";
		do {

			cin >> c_taste;
			if(c_taste = 'p') {
				i_zeit = i_zeit + i_takt;
				d_betrag = d_einheit * i_zeit/i_takt;
				cout << "Parkzeit:" << i_zeit << " Kosten:" << d_betrag << endl;
			}

		} while( (c_taste = 'p') && (i_zeit < 45));
		if(i_zeit > 0)
		{
		cout << "Parkzeit: " << i_zeit << " Kosten: " << d_betrag << endl;
	
		}
	}


}

