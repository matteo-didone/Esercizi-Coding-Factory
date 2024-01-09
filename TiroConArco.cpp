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
	string nome;
	int punti;

public:
	// costruttore
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
		int guadagno;
		int x;
		int y;
		float dove;
		x = -40 + rand() % 81;
		y = -40 + rand() % 81;
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
	char risp;
	Arciere Gino("Gino");
	Arciere Piero("Piero");
	do
	{
		srand(time(NULL));
		cout << "Inizia la sfida" << endl;
		Gino.resetPunti();
		Piero.resetPunti();
		for (int j = 0; j < 10; j++)
		{
			for (int i = 0; i < 3; i++)
				Gino.tiro();
			for (int i = 0; i < 3; i++)
				Piero.tiro();
		}
		if (Gino.getPunti() == Piero.getPunti())
			cout << "Pareggio" << endl;
		else if (Gino.getPunti() > Piero.getPunti())
			cout << "Ha vinto Gino" << endl;
		else
			cout << "Ha vinto Piero" << endl;
		cout << "Se vuoi ripetere premi s o S + invio:";
		cin >> risp;
		risp = toupper(risp);
	} while (risp == 'S');
	return 0;
}
