#include <iostream>

using namespace std;

double d_gesamtbetragBerechnen(double d_gesamtbetrag, double d_preisDesPostens);

int main () {
	int i_anzahl = 0;
	double d_preisDerWare, d_preisDesPostens, d_gesamtPreis = 0;
	char c_weitereWareImWarenkorb;

	cout << "Onlinehändler - Neuer Warenkorb wird angelegt";
	do {
		cout << "\nStückzahl: ";
		cin >> i_anzahl;
		cout<<"\nPreis der Ware: ";
		cin >> d_preisDerWare;

		d_preisDesPostens = d_preisDerWare * i_anzahl;
		int i_test = 11;
		d_gesamtPreis = d_gesamtbetragBerechnen(i_test, d_preisDesPostens);

		cout << "\nWeitere Artikel:";
		cin >> c_weitereWareImWarenkorb;
	}		
	while  (c_weitereWareImWarenkorb);

	cout << d_gesamtPreis;
	getchar();	
}

double d_gesamtbetragBerechnen( double d_gesamtPreis, double d_preisDesPostens)
{	
	return d_gesamtPreis + d_preisDesPostens;
}
