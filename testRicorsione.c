// Autore: Didone' Matteo                   Data: 18/12/2023
// Nome del file: testRicorsione
// Scopo del programma: calcolare il fattoriale di un numero>0

// LIBRERIE DA INCLUDERE
#include <stdio.h>

// VARIABILI GLOBALI

// PROTOTIPI
int inserIntero(int, int);
int calcFatt(int);

// PROGRAMMA PRINCIPALE
int main()
{
    // VARIABLI LOCALI AL MAIN

    int n; // Variabile che contiene il fattoriale inserito (compreso tra 1 e 16)
    int fat; // Variabile che contiene il fattoriale calcolato tramite il metodo calcFatt

    // CORPO DEL PROGRAMMA
    printf("inizio \n");
    printf("\nCalcola il fattoriale di un numero intero >0");
    printf("\nSe inserirai un numero reale, il valore verra' troncato!");
    // Modifico il valore massimo, da 16 a 20
    n = inserIntero(1, 20);  
    /*
    Poiché il valore che si va a generare sarà un numero particolarmente grande, non riuscirò a rappresentarlo con un int 
    Di conseguenza, avrò un errore di overflow
    Se volessi evitare quest'errore di overflow, dovrei utilizzare un long int, che occupa 8 byte
    */

    fat = calcFatt(n); // chiamata del metodo che calcola il fattoriale di un numero
    printf("\nFattoriale di %d = %d", n, fat);
    printf("\n\nfine\n");
    // USCITA DAL PROGRAMMA - codice di uscita dal programma =0
    return 0;
}

// FUNZIONI
// un intero occupa 4 byte=32 bit INT_MAX=2.147.483.647
// attenzione all'inserimento di valori non numerici

// Funzione di verifica dell'input inserito
int inserIntero(int min, int max)
{
    int num; // Variabile numero con la quale andremo a lavorare
    do
    {
        printf("\nIntrodurre un numero compreso tra %d e %d:", min, max);
        scanf("%d", &num); // inserimento del numero compreso tra min e max, e assegnazione del numero alla variabile num
        fflush(stdin); // svuota il buffer di input
        printf("\nHai inserito:%d", num);
        if ((num < min) || (num > max))
            printf("\nErrore!"); // Errore nel caso in cui il numero non sia compreso tra min e max
    } while ((num < min) || (num > max)); // Continua a chiedere l'input fin tanto che il numero risulta compreso tra min e max
    return num; // restituisce il numero inserito, una volta assicurato che sia compreso tra min e max
}

// Funzione ricorsiva che calcola il fattoriale vero e proprio
int calcFatt(int numero)
{
    int f; // Variabile che contiene il fattoriale calcolato
    if (numero == 0) // Caso base del metodo ricorsivo
        f = 1; // Il fattoriale di 0 è 1
    else
        f = numero * calcFatt(numero - 1); // Il fattoriale è il numero dato come parametro al metodo, moltiplicato per il fattoriale del numero precedente
    return f; // Variabile che contiene il fattoriale, e che restituiamo all'utente
}