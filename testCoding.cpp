/******************************************************************************

Matteo Didone' 18/01/2024

Ogni oggetto CD deve avere almeno le seguenti caratteristiche (attributi privati):
Titolo
Autore
NumeroBrani
DurataComplessiva

La classe deve avere almeno i seguenti metodi (pubblici):
costruttore – che ha come parametri: Titolo, Autore, NumeroBrani, DurataComplessiva
getTitolo, getAutore, getBrani, getDurata – che restituiscono i valori degli attributi relativi
setTitolo, setAutore, setBrani, setDurata – che modificano i valori degli attributi relativi
concatena – che restituisce una stringa con tutti i dati dell’oggetto su cui è invocata

Prevedere un metodo main per testare la funzionalità, che:
preveda la creazione di almeno 2 oggetti di tipo CD
invochi il metodo concatena e visualizzi le caratteristiche dei CD
confronti la durata complessiva dei CD (invocando il metodo getDurata) e visualizzi Titolo e DurataComplessiva del CD con durata massima

*******************************************************************************/
#include <iostream>
using namespace std;

class Cd
{
    // They're all private by default
    string title;
    string author;
    int numberOfSongs;
    int totalTime; // in seconds

public:
    // Constructor with parameters
    Cd(string title, string author, int numberOfSongs, int totalTime)
    {
        this->title = title;
        this->author = author;
        this->numberOfSongs = numberOfSongs;
        this->totalTime = totalTime;
    }

    // Getters
    string getTitle()
    {
        return this->title;
    }

    string getAuthor()
    {
        return this->author;
    }

    int getNumberOfSongs()
    {
        return this->numberOfSongs;
    }

    int getTotalTime()
    {
        return this->totalTime;
    }

    // Setters
    void setTitle(string title)
    {
        this->title = title;
    }

    void setAuthor(string author)
    {
        this->author = author;
    }

    void setNumberOfSongs(int numberOfSongs)
    {
        this->numberOfSongs = numberOfSongs;
    }

    void setTotalTime(int totalTime)
    {
        this->totalTime = totalTime;
    }

    // Metodo che restituisce una stringa con tutti i dati dell’oggetto su cui è invocata
    void printInfo()
    {
        cout << "Il CD di " << author << " chiamato " << title << ", della durata di " << totalTime << " secondi, al suo interno contiene " << numberOfSongs << " canzoni" << endl;
    }
};

int main()
{
    // Istanziamo un oggetto cd e lo chiamiamo "pinkFloydMasterpiece"
    Cd pinkFloydMasterpiece("The Dark Side of the Moon", "Pink Floyd", 10, 43 * 60);
    
    // Istanziamo un secondo oggetto cd e lo chiamiamo "anotherCd"
    Cd anotherCd("The Wall", "Pink Floyd", 10, 43 * 60);

    // Visualizzo le caratteristiche del primo cd
    pinkFloydMasterpiece.printInfo();

    // Visualizzo le caratteristiche del second cd
    anotherCd.printInfo();

    // Confronto la durata complessiva dei CD (invocando il metodo getDurata) e visualizzo Titolo e DurataComplessiva del CD con durata massima
    int durationPinkFloydMasterpiece = pinkFloydMasterpiece.getTotalTime();
    int durationAnotherCd = anotherCd.getTotalTime();

    if (durationPinkFloydMasterpiece > durationAnotherCd)
    {
        cout << "Il CD con durata massima è " << pinkFloydMasterpiece.getTitle() << " con una durata di " << durationPinkFloydMasterpiece << endl;
    }
    else if (durationPinkFloydMasterpiece < durationAnotherCd)
    {
        cout << "Il CD con durata massima è " << anotherCd.getTitle() << " con una durata di " << durationAnotherCd << endl;
    }
    else
    {
        cout << "I CD hanno la stessa durata" << endl;
    }

    return 0;
}