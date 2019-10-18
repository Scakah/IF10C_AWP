
#include <iostream>

	using namespace std;

	int main()
	{
		int i_Zeit = 0; float f_Betrag = 0.0;
		char c_Taste;
		const int iTakt = 15;
		const float f_einheit = 0.5;

		cout << "Press 'P' for ticket! \n";
		cin >> c_Taste;

		if (c_Taste == 'P' || c_Taste == 'p')
		{
			i_Zeit = i_Zeit + iTakt;
			f_Betrag = f_einheit * i_Zeit / iTakt;
			cout << "O zum Bestaetigen";
			cin >> c_Taste;

			if (c_Taste == '\n')
			{
				
				cout << "Parkzeit " << i_Zeit << " minuten \n Betrag: " << f_Betrag;
			}
			else
			{
				//Fehler??
				cerr << "Fehler";
			}
		}
		else
		{
			//cerr = "Fehlerkanal"
			cerr << "Fehler!";
		}

		getchar();
		getchar();
		return 0;

	}