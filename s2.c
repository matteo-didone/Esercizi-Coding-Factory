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

struct libro biblioteca[4];

// PROTOTIPI
void visualizza(struct libro l);
int leggiIntero(int min, int max);
float leggiReale(float min, float max);

int main()
{
    // definizione della variabile
    struct libro miolibro;
    int dimBiblioteca = sizeof(biblioteca) / sizeof(biblioteca[0]);
    int i = 0;

    while (i < dimBiblioteca)
    {
        printf("\nInserisci il titolo (max 99 caratteri): ");
        fgets(miolibro.titolo, sizeof(miolibro.titolo), stdin);
        miolibro.titolo[strcspn(miolibro.titolo, "\n")] = '\0';

        printf("\nInserisci l'autore (cognome nome - max 49 caratteri): ");
        fgets(miolibro.autore, sizeof(miolibro.autore), stdin);
        miolibro.autore[strcspn(miolibro.autore, "\n")] = '\0';

        printf("\nInserisci il prezzo (max due cifre decimali): ");
        float inputPrice =  scanf("%.2f", &miolibro.prezzo);
        // Do while pensa in negativo 

        printf("\nInserisci l'anno di pubblicazione (max 4 cifre): ");
        scanf("%d", &miolibro.anno_pubblicazione);

        // Consumare il carattere newline residuo nel buffer di input
        getchar();
    }

    visualizza(miolibro);
    return 0;
}

void visualizza(struct libro l)
{
    printf("\ntitolo: %s autore: %s anno: %d prezzo: %f\n", l.titolo, l.autore, l.anno_pubblicazione, l.prezzo);
}

int leggiIntero(int min, int max)
{
    return 0;
}

float leggiReale(float min, float max)
{
    return 0;
}
