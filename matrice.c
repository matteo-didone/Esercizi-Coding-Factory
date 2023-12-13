// Autore: Cognome Nome                   Data: 11/12/2023
// Nome del file: matrice.c
// Scopo del programma:
// somma il valore delle righe di una matrice di 10 colonne
// e salva le somme in un vettore di dimensione pari al numero
// di righe della matrice

// LIBRERIE DA INCLUDERE
#include <stdio.h>
#include <stdlib.h>
#define DIMR 6
#define DIMC 10
// VARIABILI GLOBALI
// PROTOTIPI
void visualizza(int v[],int n);
void sommaRighe(int m[][DIMC],int nr,int v[]);
// PROGRAMMA PRINCIPALE
int main(){
// VARIABLI LOCALI AL MAIN
 int m1[DIMR][DIMC];
 int v1[DIMR];
 int ir,ic;
 unsigned int seme;
// CORPO DEL PROGRAMMA
 printf("\nInserisci un valore per il seme:");
 scanf("%d",&seme);
//srand imposta il valore iniziale per il generatore di numeri pseudocasuali
//utilizzato dalla funzione rand
 srand(seme);
 printf("\nMatrice:\n"); 
 for (ir=0; ir<DIMR; ir++)
 	{
	 for (ic=0; ic<DIMC; ic++)
 		{m1[ir][ic]=rand()%90+10;
 		 printf("%d ",m1[ir][ic]);
		 }
	 printf("\n");	 
	}
 sommaRighe(m1,DIMR,v1);
 visualizza(v1,DIMR);
// USCITA DAL PROGRAMMA - codice di uscita dal programma =0
 return 0;
}
// FUNZIONI
// Restituisce un vettore i cui ogni elemento e' la somma 
// degli elementi della corrispondente riga della matrice
void sommaRighe(int m[][DIMC],int nr,int v[])
{ 
// VARIABILI LOCALI ALLA FUNZIONE
	int s,r,c;
//CORPO DELLA FUNZIONE	
	for (r=0; r<nr; r++)
		{
		  s=0;
		  for (c=0;c<DIMC;c++)
		 		s=s+m[r][c];
		  v[r]=s;		
	    }
	return;    
}
// Visualizza in colonna gli elementi di un vettore
void visualizza(int v[],int n)
{
// VARIABILI LOCALI ALLA FUNZIONE
	int i;
//CORPO DELLA FUNZIONE
	printf("\nSomme:\n");
	for (i=0; i<n; i++)
		printf("riga %d somma %d\n",i,v[i]);
	return;
}
