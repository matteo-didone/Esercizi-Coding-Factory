// Autore: Cognome Nome                   Data: 11/12/2023
// Nome del file: vettore.c
// Scopo del programma:
// trova il valore minimo all'interno di tre vettori di interi
// di dimensione qualsiasi


// LIBRERIE DA INCLUDERE
#include <stdio.h>

// VARIABILI GLOBALI
// PROTOTIPI
int cercaMinimo(int v[], int n);
int cercaMassimo(int v[], int n);
float calcolaMedia(int v[], int n);
void visualizza(int v[], int n);

// PROGRAMMA PRINCIPALE
int main()
{
	// VARIABLI LOCALI AL MAIN
	int v1[] = {4, 3, 5, 9, 7, 1};
	int v2[] = {5, 7, 8, 6, 2, 4, 9};
	int v3[] = {-3, 5, 4, 0};
	int dimv1, dimv2, dimv3, minv1, minv2, minv3, maxv1, maxv2, maxv3;
	float avgv1, avgv2, avgv3;

	// CORPO DEL PROGRAMMA
	printf("inizio\n");

	// Andiamo a prendere la dimenisone dei byte degli array, e la dividiamo per la dimensione in byte del singolo elemento!
	dimv1 = sizeof(v1) / sizeof(v1[0]);
	dimv2 = sizeof(v2) / sizeof(v2[0]);
	dimv3 = sizeof(v3) / sizeof(v3[0]);

	visualizza(v1, dimv1);
	minv1 = cercaMinimo(v1, dimv1);
	maxv1 = cercaMassimo(v1, dimv1);
	avgv1 = calcolaMedia(v1, dimv1);
	printf("valore minimo: %d\n", minv1);
	printf("valore massimo: %d\n", maxv1);
	printf("valore medio: %.2f\n", avgv1);


	visualizza(v2, dimv2);
	minv2 = cercaMinimo(v2, dimv2);
	maxv2 = cercaMassimo(v2, dimv2);
	avgv2 = calcolaMedia(v2, dimv2);
	printf("valore minimo: %d\n", minv2);
	printf("valore massimo: %d\n", maxv2);
	printf("valore medio: %.2f\n", avgv2);

	visualizza(v3, dimv3);
	minv3 = cercaMinimo(v3, dimv3);
	maxv3 = cercaMassimo(v3, dimv3);
	avgv3 = calcolaMedia(v3, dimv3);
	printf("valore minimo: %d\n", minv3);
	printf("valore massimo: %d\n", maxv3);
	printf("valore medio: %.2f\n", avgv3);
	

	printf("\nfine\n");

	// USCITA DAL PROGRAMMA - codice di uscita dal programma =0
	return 0;
}
// FUNZIONI

// trova il valore minimo
int cercaMinimo(int v[], int n)
{
	// VARIABILI LOCALI ALLA FUNZIONE
	int i, min;
	// CORPO DELLA FUNZIONE
	min = v[0];
	for (i = 1; i < n; i++)
		if (v[i] < min)
			min = v[i];
	return min;
}

// trova il valore massimo
int cercaMassimo(int v[], int n)
{
	// VARIABILI LOCALI ALLA FUNZIONE
	int i, max;
	// CORPO DELLA FUNZIONE
	max = v[0];
	for (i = 1; i < n; i++)
		if (v[i] > max) 
			max = v[i];
	return max;
}
//calcola la media aritmetica dei valori contenuti nell'array
float calcolaMedia(int v[], int n) 
{
	//VARIABILI LOCALI ALLA FUNZIONE
	int i, sumOfElements = 0;
	float avg;

	//CORPO DELLA FUNZIONE
	for (i = 0; i < n; i++) 
	{
		sumOfElements += v[i];
	}
	avg = (float) sumOfElements / (float) n;

	return avg; 
}

// visualizza in riga gli elementi di un vettore
void visualizza(int v[], int n)
{ // VARIABILI LOCALI ALLA FUNZIONE
	int i;
	// CORPO DELLA FUNZIONE
	printf("\nElementi: ");
	for (i = 0; i < n; i++)
		printf("%d ", v[i]);
	printf("\n");
	return;
}
