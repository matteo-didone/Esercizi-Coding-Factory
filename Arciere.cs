/******************************************************************************

Classe Arciere: versione c#

*******************************************************************************/
using System;
using System.Security.Cryptography;
using System.Security.Cryptography.X509Certificates;
class Arciere
{
	Random random = new Random();
	string nome;
	int punti;

	//costruttore 
	public Arciere(string n)
	{
		punti = 0;
		nome = n;
	}

	public int GetPunti()
	{
		return punti;
	}

	public void ResetPunti()
	{
		punti = 0;
	}

	public void Tiro()
	{
		int guadagno;
		int x;
		int y;
		double dove;

		x = random.Next(-40, 40);
		y = random.Next(-40, 40);
		dove = Math.Sqrt(x * x + y * y);
		if (dove > 30)
			guadagno = 0;
		else if (dove > 20)
			guadagno = 1;
		else if (dove > 10)
			guadagno = 5;
		else guadagno = 10;
		punti = punti + guadagno;
		Console.WriteLine("x:" + x + " y:" + y + " d:" + dove.ToString("00.00") + " punti del tiro:" + guadagno + " - Arciere " + nome + " punti totali:" + punti);
	}

	static void Main()
	{
		char risp;
		string ins = "";
		Arciere Gino = new Arciere("Gino");
		Arciere Piero = new Arciere("Piero");
		do
		{
			Console.WriteLine("Inizia la sfida");
			Gino.ResetPunti();
			Piero.ResetPunti();
			for (int j = 0; j < 10; j++)
			{
				for (int i = 0; i < 3; i++)
					Gino.Tiro();
				for (int i = 0; i < 3; i++)
					Piero.Tiro();
			}
			if (Gino.GetPunti() == Piero.GetPunti())
				Console.WriteLine("Pareggio");
			else if (Gino.GetPunti() > Piero.GetPunti())
				Console.WriteLine("Ha vinto Gino");
			else Console.WriteLine("Ha vinto Piero");
			Console.Write("Se vuoi ripetere premi s (o S) + invio: ");
			ins = Console.ReadLine() ?? "n";
			try { risp = Convert.ToChar(ins.ToUpper()); } catch (FormatException fe) { risp = 'n'; }
		} while (risp == 'S');
	}// chiude Main
}
