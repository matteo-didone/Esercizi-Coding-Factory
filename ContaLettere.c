/* Autore: Didone' Matteo                   Data: 28/11/2023
Scopo del programma: Contare Lettere

{definisce 3 variabili intere e 1 variabile carattere

esegui
   {stampa messaggio
    leggi carattere
    se (carattere!='!')
           {blocco switch...}
     } finche (carattere!='!')
 stampa variabili intere
}
*/

// LIBRERIE DA INCLUDERE
#include <stdio.h>

// VARIABILI GLOBALI

// PROGRAMMA PRINCIPALE
int main()
{
    // VARIABLI LOCALI AL MAIN
    int vowelCounter = 0;
    int consonantCounter = 0;
    int specialCharacterCounter = 0;
    char inputCharacter;

    // CORPO DEL PROGRAMMA

    do {
        // Stampa Messaggio
        printf("Inserisci Carattere (\"!\" Per Terminare Inserimento): \n"); 

        // Leggi Carattere In Input
        scanf(" %c", &inputCharacter);

        //Se Carattere in input e' diverso da !
         if (inputCharacter != '!') {
            // Blocco switch per categorizzare il carattere
            switch (inputCharacter) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    vowelCounter++;
                    break;

                // Casi Limite/Eccezionali
                default:
                    if ((inputCharacter >= 'a' && inputCharacter <= 'z') || (inputCharacter >= 'A' && inputCharacter <= 'Z')) {
                        consonantCounter++;
                    } else {
                        specialCharacterCounter++;
                    }
            }
        }
    } while (inputCharacter != '!');

    // Stampa dei risultati
    printf("Numero di vocali (a, e, i, o, u): %d\n", vowelCounter);
    printf("Numero di consonanti: %d\n", consonantCounter);
    printf("Numero di altri caratteri: %d\n", specialCharacterCounter);


    // USCITA DAL PROGRAMMA - codice di uscita dal programma = 0
    return 0;
}
