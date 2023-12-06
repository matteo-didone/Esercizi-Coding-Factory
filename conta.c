/* Autore: Didone' Matteo                   Data: 28/11/2023
Scopo del programma: Esempio Utilizzo Switch 
*/

// LIBRERIE DA INCLUDERE
#include <stdio.h>

// VARIABILI GLOBALI

// PROGRAMMA PRINCIPALE
int main()
{
    // VARIABLI LOCALI AL MAIN
    int a_maiuscola = 0;
    int a_minuscola = 0;
    int altro = 0;
    char c = 'Z';

    // CORPO DEL PROGRAMMA
    printf("inizio \n"); 

    //SWITCH STATEMENT
    switch (c)
    {
    case 'A':
        a_maiuscola++;
        break;
    
    case 'a':
        a_minuscola++;
        break;
    
    default:
        altro++;
    }
    
    printf("Numero di A:"); 
    printf("%i", a_maiuscola); 

    printf("\nNumero di a:"); 
    printf("%i", a_minuscola);

    printf("\nNumero di altro:"); 
    printf("%i", altro);

    printf("\nfine \n");

    // USCITA DAL PROGRAMMA - codice di uscita dal programma = 0
    return 0;
}
