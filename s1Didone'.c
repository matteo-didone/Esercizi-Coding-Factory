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
{
    // definizione della variabile
    struct libro miolibro;
    // assegnazione di valori
    miolibro.prezzo = 67.32;
    miolibro.anno_pubblicazione = 2023;

    printf("\nInserisci il titolo (max 99 caratteri): ");
    fgets(miolibro.titolo, sizeof(miolibro.titolo), stdin);
    miolibro.titolo[strcspn(miolibro.titolo, "\n")] = '\0'; // Rimuove il carattere newline

    printf("\nInserisci l'autore (cognome nome - max 49 caratteri): ");
    fgets(miolibro.autore, sizeof(miolibro.autore), stdin);
    miolibro.autore[strcspn(miolibro.autore, "\n")] = '\0'; // Rimuove il carattere newline

    visualizza(miolibro);
    return 0;
}

void visualizza(struct libro l)
{
    printf("\ntitolo: %s autore: %s anno: %d prezzo: %f\n", l.titolo, l.autore, l.anno_pubblicazione, l.prezzo);
}
