/******************************************************************************

Classe Arciere: versione cpp

*******************************************************************************/
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

class Arciere
{
	// Attributi della classe
	string nome;
	int punti;

//Metodi Pubblici
public:
	// Costruttore
	Arciere(string n)
	{
		punti = 0;
		nome = n;
	}

	int getPunti()
	{
		return punti;
	}

	void resetPunti()
	{
		punti = 0;
	}

	void tiro()
	{
		int guadagno; // Punti ottenuti nel tiro. 
		int x; // Rappresenta le coordinate orizzontali (asse delle x) del punto in cui la freccia colpisce il bersaglio
		int y; // Rappresenta le coordinate verticali (asse delle y) del punto in cui la freccia colpisce il bersaglio
		float dove;

		// Andiamo a generare le coordinate x ed y in maniera casuale all'interno di un intervallo specifico
		x = -40 + rand() % 81; // Restituisce un numero casuale tra 0 e RAND_MAX. Con % 81, il risultato viene limitato tra 0 e 80. L'intervallo finale sarà quindi da -40 a +40. 
		y = -40 + rand() % 81;

		//  Si dichiara una variabile float 'dove' che rappresenta la distanza euclidea dal punto di impatto al centro del bersaglio. Questa distanza viene calcolata utilizzando il teorema di Pitagora con le coordinate x e y.
		dove = sqrt(x * x + y * y);

		if (dove > 30)
			guadagno = 0;
		else if (dove > 20)
			guadagno = 1;
		else if (dove > 10)
			guadagno = 5;
		else
			guadagno = 10;
		cout << "x:" << x << " y:" << y << " d:" << dove << " punti del tiro:" << guadagno;
		punti = punti + guadagno;
		cout << " Arciere " << nome << " punti totali:" << punti << endl;
	}
};

int main()
{
	// Dichiaro una variabile che conterrà la risposta dell'utente 
	char risp;
	
	Arciere Gino("Gino"); // Creo un arciere di nome Gino
	Arciere Piero("Piero"); // Creo un arciere di nome Piero
	
	do
	{
		srand(time(NULL));
		cout << "Inizia la sfida" << endl;
		Gino.resetPunti();
		Piero.resetPunti();

		// Per 10 volte itero il ciclo
		for (int j = 0; j < 10; j++)
		{
			// Gino fa tre tiri
			for (int i = 0; i < 3; i++)
				Gino.tiro();
			// Piero fa tre tiri
			for (int i = 0; i < 3; i++)
				Piero.tiro();
		}

		// Utilizzando il metodo getPunti() vado a prendere i punti dei due giocatori e li vado poi a confrontare
		if (Gino.getPunti() == Piero.getPunti())
			cout << "Pareggio" << endl;
		else if (Gino.getPunti() > Piero.getPunti())
			cout << "Ha vinto Gino" << endl;
		else
			cout << "Ha vinto Piero" << endl;
		cout << "Se vuoi ripetere premi s o S + invio:";
		
		cin >> risp; // Prendo in input la risposta che dà l'utente
		risp = toupper(risp); // Converto la risposta dell'utente in una stringa maiuscola
		
	} while (risp == 'S'); // Se la risposta dell'utente è "S" allora torna ad eseguire il ciclo
	return 0;
}
