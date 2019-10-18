#include <iostream> // Input-/Output-Stream Bibliothek wird importiert (um z.B. cout zu verwenden)

using namespace std; // std = Standard, verkürzt std::cout auf cout

// Mainfunktion des Programms "Schere, Stein, Papier"
int main()
{
	// Definition und Initialisierung

	// Variable i_spieler1 wird deklariert und initialisiert
	// -1 = nicht belegt, 0 = Schere, 1 = Stein, 2 = Papier
	int i_spieler1 = -1;

	// -1 = nicht belegt, 0 = Spieler1 verliert, 1 = Unentschieden, 2 = Spieler1 gewinnt
	int i_ergebnis = -1;

	// Anleitung + Eingabe
	cout << "Schere (0), Stein (1), oder Papier (2)?" << endl;
	cin >> i_spieler1;

	// Zur Vereinfachung: Computer wählt Stein (= 1)
	cout << "Der Computer hat Stein gewaehlt!" << endl;

	// Verarbeitung
	// Schere verliert gegen Stein
	if (i_spieler1 == 0)
	{
		i_ergebnis = 0; // Computer gewinnt
	}

	if (i_spieler1 == 1) // Stein gegen Stein
	{
		i_ergebnis = 1; // Unentschieden
	}

	if (i_spieler1 == 2) // Papier gegen Stein
	{
		i_ergebnis = 2; // Spieler gewinnt
	}

	// Ausgabe
	if (i_ergebnis == 0)
	{
		cout << "Der Computer gewinnt!";
	}

	if (i_ergebnis == 1)
	{
		cout << "Kein Gewinner!";
	}

	if (i_ergebnis == 2)
	{
		cout << "Du gewinnst!";
	}

	// Verhindert das Schließen der Konsole nachdem das Programm durchlaufen wurde
	getchar();

	// Verhindert das Schließen der Konsole durch den Tastatur-Buffer
	getchar();

	// Gibt Fehlercode zurück, 0 = kein Fehler
	return 0;
}