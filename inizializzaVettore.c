/* Autore: Didone' Matteo                   Data: 06/12/2023
Scopo del programma: Inizializzare un Vettore come mostrato nel file Vettori e Record
*/

// LIBRERIE DA INCLUDERE
#include <stdio.h>

// VARIABILI GLOBALI

// PROGRAMMA PRINCIPALE
int main()
{
    // VARIABLI LOCALI AL MAIN
    int myNumbers[] = {25, 50, 75, 100};
    int i;
    for (i = 0; i < 4; i++)
    {
        printf("%d\n", myNumbers[i]);
    }

    int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};
    int j, k; // i indice riga, j indice colonna

    for (j = 0; j < 2; j++)
    {
        for (k = 0; k < 3; k++)
        {
            printf("%d\n", matrix[j][k]);
        }
    }

    // USCITA DAL PROGRAMMA - codice di uscita dal programma = 0
    return 0;
}
