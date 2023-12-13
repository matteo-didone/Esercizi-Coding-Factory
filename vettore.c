// Autore: Cognome Nome                   Data: 11/12/2023
// Nome del file: vettore.c
// Scopo del programma:
// trova il valore minimo all'interno di tre vettori di interi
// di dimensione qualsiasi
// LIBRERIE DA INCLUDERE
#include <stdio.h>
// VARIABILI GLOBALI
// PROTOTIPI
int cercaMinimo(int v[],int n);
void visualizza(int v[],int n);
// PROGRAMMA PRINCIPALE
int main(){
// VARIABLI LOCALI AL MAIN
 int v1[]={4,3,5,9,7,1};
 int v2[]={5,7,8,6,2,4,9};
 int v3[]={-3,5,4,0};
 int dimv1,dimv2,dimv3,minv1,minv2,minv3;
// CORPO DEL PROGRAMMA
 printf("inizio\n"); 
 dimv1=sizeof(v1)/sizeof(v1[0]);
 dimv2=sizeof(v2)/sizeof(v2[0]);
 dimv3=sizeof(v3)/sizeof(v3[0]);
 visualizza(v1,dimv1);
 minv1=cercaMinimo(v1,dimv1);
 printf("valore minimo: %d\n",minv1);
 visualizza(v2,dimv2);
 minv2=cercaMinimo(v2,dimv2);
 printf("valore minimo: %d\n",minv2);
 visualizza(v3,dimv3);
 minv3=cercaMinimo(v3,dimv3);
 printf("valore minimo: %d\n",minv3);
 printf("\nfine\n");
// USCITA DAL PROGRAMMA - codice di uscita dal programma =0
 return 0;
}
// FUNZIONI

//trova il valore minimo
int cercaMinimo(int v[],int n)
{ 
// VARIABILI LOCALI ALLA FUNZIONE
	int i, min;
//CORPO DELLA FUNZIONE
	min=v[0];
	for (i=1; i<n; i++)
		if (v[i]<min)
			min=v[i];
	return min;
}

//visualizza in riga gli elementi di un vettore
void visualizza(int v[],int n)
{// VARIABILI LOCALI ALLA FUNZIONE
	int i;
//CORPO DELLA FUNZIONE
	printf("\nElementi: ");
	for (i=0; i<n; i++)
		printf("%d ",v[i]);
	printf("\n");
	return;
}
