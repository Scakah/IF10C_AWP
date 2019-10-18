#include <iostream>

using namespace std;

int main()
{
	//Felder
	unsigned int i_jahreszahl = 0;
	bool b_istschaltjahr = false;

	//Eingabe holen
	cout << "Jahreszahl eingeben: ";
	cin >> i_jahreszahl;

	//Verarbeitung
	/*   falls i_jahreszahl durch 4 teilbar ist, ist %4 0. 0 ist false; !0 ist ist true*/
	if (!(i_jahreszahl % 4))
	{
		b_istschaltjahr = true;
	}
	if (!(i_jahreszahl % 100))
	{
		b_istschaltjahr = false;
	}
	if (!(i_jahreszahl % 400))
	{
		b_istschaltjahr = true;
	}
	
	//Ausgabe
	if (b_istschaltjahr)
	{
		cout << i_jahreszahl << "IST EIN Schaltjahr!";
	}
	if (!b_istschaltjahr)
	{
		cout << i_jahreszahl << "IST KEIN Schaltjahr!";
	}
}