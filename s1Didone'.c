// utilizzo struct
#include <stdio.h>
#include <string.h>

// dichiarazione della struct
struct libro
{
    char titolo[100];
    char autore[50];
    int anno_pubblicazione;
    float prezzo;
};
void visualizza(struct libro l);
int main()
{ // definizione della variabile
    struct libro miolibro;
    // assegnazione di valori
    miolibro.prezzo = 67.32;
    miolibro.anno_pubblicazione = 2023;
    printf("\nInserisci il titolo (max 99 caratteri):");
    gets(miolibro.titolo);
    printf("\nInserisci l'autore (cognome nome - max 49 caratteri):");
    gets(miolibro.autore);
    visualizza(miolibro);
    return 0;
}
void visualizza(struct libro l)
{
    printf("\ntitolo: %s autore: %s anno: %d prezzo: %f ", l.titolo, l.autore, l.anno_pubblicazione, l.prezzo);
}