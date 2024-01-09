/******************************************************************************

Classe Arciere: versione c#

*******************************************************************************/
using System;
using System.Security.Cryptography;
using System.Security.Cryptography.X509Certificates;
class Arciere
{
	// Creo un oggetto chiamato "random" di classe Random per generare un nuovo numero casuale
	Random random = new Random();
	string nome;
	int punti;

	// Costruttore 
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
		double dove; // In C++ ho usato una variabile di tipo float, mentre qua sto usando una variabile Double

		// Metodo Next della classe Random genera un numero casuale intero nell'intervallo [-40, 40), il che significa che il valore può essere -40 ma non può essere 40. Quindi, x e y saranno assegnati a due numeri interi casuali compresi tra -40 e 39
		x = random.Next(-40, 40);
		y = random.Next(-40, 40);
		// Teorema di pitagora applicato alle due coordinate
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
		char risp; // Carattere che andrà a salvare la lettera inserita dall'utente
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
			else Console.WriteLine("Ha vinto Piero");+

			Console.Write("Se vuoi ripetere premi s (o S) + invio: ");
			// Legge una riga di input dalla console utilizzando il metodo ReadLine() e assegna il risultato alla variabile ins
			/* Operatore di coalescenza nulla (??) viene utilizzato per fornire un valore di fallback nel caso in cui il risultato di Console.ReadLine() sia nullo.
			Se l'utente preme semplicemente "Invio" senza inserire alcun testo (cosa che restituirebbe una stringa nulla), il valore di ins verrà impostato su "n".
			Se l'input è nullo o vuoto, la variabile ins sarà assegnata alla stringa "n".
			*/
			ins = Console.ReadLine() ?? "n";

			// Costrutto try catch, che prova a convertire in maiuscolo il valore inserito dall'utente
			// Se non riesce a convertire in maiuscolo il valore, allora lancia un'eccezione di classe FormatException chiamata fe
			// Infine, se viene lanciata l'eccezione, il valore 
			try { risp = Convert.ToChar(ins.ToUpper()); } catch (FormatException fe) { risp = 'n'; }
		} while (risp == 'S');
	} // Chiude Main
}
