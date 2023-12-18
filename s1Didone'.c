// Aggiungo le librerie necessarie al funzionamento del programma 
#include <stdio.h>
#include <string.h> // Libreria per la gestione delle stringhe
#include <stdbool.h> // Libreria per la gestione dei booleani

struct libro
{
    char titolo[100];
    char autore[50];
    int anno_pubblicazione;
    float prezzo;
};

// Dichiaro biblioteca, un vettore di 4 libri
struct libro biblioteca[4];

// Prototipi
void visualizza(struct libro l);
int leggiIntero(int min, int max);
float leggiReale(float min, float max);

// Metodo main, all'interno del quale viene eseguito il programma
int main()
{
    // Salvo all'interno di una variabile la dimensione dell'array
    int dimBiblioteca = sizeof(biblioteca) / sizeof(biblioteca[0]);
    int i = 0;

    while (i < dimBiblioteca)
    {
        // Creo un nuovo "miolibro" per ogni iterazione del ciclo while
        struct libro miolibro;

        // Input Titolo 
        printf("\nInserisci dati del libro %d\n", i + 1);

        // Input Titolo
        printf("\nInserisci il titolo (max 99 caratteri): ");
        fgets(miolibro.titolo, sizeof(miolibro.titolo), stdin);
        miolibro.titolo[strcspn(miolibro.titolo, "\n")] = '\0';

        // Input Autore
        printf("\nInserisci l'autore (cognome nome - max 49 caratteri): ");
        fgets(miolibro.autore, sizeof(miolibro.autore), stdin);
        miolibro.autore[strcspn(miolibro.autore, "\n")] = '\0';

        // Verifica della lunghezza della stringa Autore
        if (strlen(miolibro.autore) > 49)
        {
            printf("Errore: La lunghezza dell'autore supera il massimo consentito.\n");
            continue;  // Ripeti l'iterazione del ciclo
        }

        // Input Prezzo
        printf("\nInserisci il prezzo (max due cifre decimali): ");
        miolibro.prezzo = leggiReale(0.0, 999.99); // Controllo effettuato tramite la funzione leggiReale

        // Input Anno di pubblicazione
        printf("\nInserisci l'anno di pubblicazione (max 4 cifre): ");
        miolibro.anno_pubblicazione = leggiIntero(1000, 9999); // Controllo effettuato tramite la funzione leggiIntero

        // Consumare il carattere newline residuo nel buffer di input
        getchar();

        // Assegnazione del libro appena creato all'interno dell'array di struct biblioteca
        biblioteca[i] = miolibro;
        i++;
    }

    // Stampa di tutti i libri presenti all'interno dell'array di struct biblioteca
    for (int j = 0; j < dimBiblioteca; j++)
    {
        visualizza(biblioteca[j]); // Metodo visualizza usato per stampare i valori di ogni libro
    }

    // Restituisce 0 per indicare che il programma è terminato correttamente
    return 0;
}

/*
    Metodo visualizza, che prende in input una struct libro e stampa i valori
    dei suoi campi.
*/
void visualizza(struct libro l)
{
    printf("\nTitolo: %s\nAutore: %s\nAnno di pubblicazione: %d\nPrezzo: %.2f\n", l.titolo, l.autore, l.anno_pubblicazione, l.prezzo);
}

/*
    Metodo leggiIntero, che prende in input due interi min e max e controlla che l'input inserito sia compreso tra questi due valori
    Se l'input non è valido, viene richiesto di inserire un nuovo valore.
*/
int leggiIntero(int min, int max)
{
    // Dichiaro un intero input e un booleano flag
    int input = 0;     // Andrà a contenere il valore inserito dall'utente
    bool flag = false; // Flag che indica se l'input è valido o meno

    // Ciclo do per continuare a chiedere l'input fin tanto che non mi assicuro che è valido o meno
    do
    {
        // Usiamo scanf per leggere in input dall'utente un valore intero
        if (scanf("%d", &input) == 1)
        {
            // Se l'input è valido, allora setto il flag a true
            if (input >= min && input <= max)
            {
                flag = true;
            }
            // Altrimenti stampo un messaggio di errore
            else
            {
                printf("Errore: Inserisci un valore compreso tra %d e %d.\n", min, max);
                while (getchar() != '\n'); // Pulizia del buffer di input
            }
        }
        else // Se l'input non è valido, stampo un messaggio di errore
        {
            printf("Errore: Inserisci un valore intero valido.\n");
            // Pulizia del buffer di input per evitare loop infiniti in caso di input non valido
            while (getchar() != '\n');
        }
    } while (!flag); // Continuo a ciclare fin tanto che il flag è true

    // Restituisco l'input validato
    return input;
}

/*
    Metodo leggiReale, che prende in input due float min e max e controlla che l'input inserito sia compreso tra questi due valori
    Se l'input non è valido, viene richiesto di inserire un nuovo valore.
*/
float leggiReale(float min, float max)
{
    // Dichiaro un float input e un booleano flag
    float input;       // Andrà a contenere il valore inserito dall'utente
    bool flag = false; // Flag che indica se l'input è valido o meno

    // Ciclo do per continuare a chiedere l'input fin tanto che non mi assicuro che è valido o meno
    do
    {
        // Usiamo scanf per leggere in input dall'utente un valore float
        if (scanf("%f", &input) == 1)
        {
            // Controllo che l'input sia compreso tra il minimo e il massimo
            if (input >= min && input <= max)
            {
                // Se è compreso, imposto la flag a true
                flag = true;
            }
            else // Do un segnale di errore se non è compreso
            {
                printf("Errore: Inserisci un valore compreso tra %.2f e %.2f.\n", min, max);
            }
        }
        else // Do un segnale di errore se non è un valore reale valido
        {
            printf("Errore: Inserisci un valore reale valido.\n");
            // Pulizia del buffer di input per evitare loop infiniti in caso di input non valido
            while (getchar() != '\n');
        }
    } while (!flag);

    return input;
}
