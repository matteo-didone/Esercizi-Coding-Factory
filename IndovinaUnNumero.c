/* Autore: Cognome Nome                   Data: 05/12/2023
Scopo del programma: Indovinare un numero */

// LIBRERIE DA INCLUDERE
#include <stdio.h>
#include <stdbool.h>

// VARIABILI GLOBALI

// PROGRAMMA PRINCIPALE
int main()
{
    // VARIABLI LOCALI AL MAIN
    int min = 0;
    int max = 128;
    int attemptsCounter = 0;

    bool isNumberGuessed = false;
    int average;

    do
    {
        // Calcola la media corrente
        average = (max + min) / 2;

        printf("Il numero a cui stai pensando e' %d? (Rispondi S o N) ", average);

        // Leggi il carattere in input
        char inputCharacter;
        scanf(" %c", &inputCharacter);

        if (inputCharacter == 'S' || inputCharacter == 's')
        {
            printf("Ho indovinato!\n");
            isNumberGuessed = true;
        }
        else if (inputCharacter == 'N' || inputCharacter == 'n')
        {
            printf("Il numero a cui stai pensando e' > %d? (Rispondi S o N) ", average);

            // Leggi il carattere in input per la risposta alla nuova domanda
            scanf(" %c", &inputCharacter);

            if (inputCharacter == 'S' || inputCharacter == 's')
            {
                min = average + 1;
            }
            else if (inputCharacter == 'N' || inputCharacter == 'n')
            {
                max = average - 1;
            }
        }

        attemptsCounter++;

    } while (!isNumberGuessed);

    printf("Ho indovinato in %d tentativi.\n", attemptsCounter);

    return 0;
}