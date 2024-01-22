/******************************************************************************

Matteo Didone' 18/01/2024

Progettare mediante un diagramma UML e implementare in linguaggio C++ (o C#) una classe Computer i cui oggetti rappresentano i computer utilizzati dai dipendenti di un’azienda.
Ogni oggetto Computer deve avere almeno le seguenti caratteristiche (attributi privati):
codice
marca
modello
velocità del processore
dimensione della memoria RAM
dimensione del disco
anno di acquisto

La classe deve avere almeno i seguenti metodi (pubblici):
costruttore – che ha come parametri: marca, modello, velocità del processore, dimensione della memoria RAM, dimensione del disco, anno di acquisto, codice
getVelPr, getDimR, getDimD– che restituiscono i valori degli attributi relativi
setVelPr, setDimR, setDimD – che modificano i valori degli attributi relativi
concatena – che restituisce una stringa con tutti i dati dell’oggetto su cui è invocata

Prevedere un metodo main per testare la funzionalità, che:
preveda la creazione di almeno 2 oggetti di tipo computer
invochi il metodo concatena e visualizzi le caratteristiche di tutti i computer
visualizzi i codici di tutti i computer (se ce ne sono) acquistati nell’anno n (inserito da tastiera con controllo)

*******************************************************************************/
#include <iostream>
using namespace std;

class Computer
{
    // They're all private by default
    int code;
    static int lastCode;
    string brand;
    string model;
    string processorSpeed;
    string ramSpace;
    string diskSpace;
    int yearOfPurchase;

public:
    // Constructor without parameters
    Computer()
    {
        this->code = 0;
        this->brand = "Unknown";
        this->model = "Unknown";
        this->processorSpeed = "Unknown";
        this->ramSpace = "Unknown";
        this->diskSpace = "Unknown";
        this->yearOfPurchase = 0;
    }

    // Constructor with parameters
    Computer(string brand, string model, string processorSpeed, string ramSpace, string diskSpace, int yearOfPurchase)
    {
        this->code = 200;
        this->brand = brand;
        this->model = model;
        this->processorSpeed = processorSpeed;
        this->ramSpace = ramSpace;
        this->diskSpace = diskSpace;
        this->yearOfPurchase = yearOfPurchase;
    }

    // Getters
    int getCode()
    {
        return this->code;
    }

    string getBrand()
    {
        return this->brand;
    }

    string getModel()
    {
        return this->model;
    }

    string getVelPr()
    {
        return this->processorSpeed;
    }

    string getDimR()
    {
        return this->ramSpace;
    }

    string getDimD()
    {
        return this->diskSpace;
    }

    int getYearOfPurchase()
    {
        return this->yearOfPurchase;
    }

    // Setters
    void setCode(int code)
    {
        this->code = code;
    }

    void setBrand(string brand)
    {
        this->brand = brand;
    }

    void setModel(string model)
    {
        this->model = model;
    }

    void setVelPr(string processorSpeed)
    {
        this->processorSpeed = processorSpeed;
    }

    void setDimR(string ramSpace)
    {
        this->ramSpace = ramSpace;
    }

    void setDimD(string diskSpace)
    {
        this->diskSpace = diskSpace;
    }

    // Metodo che restituisce una stringa con tutti i dati dell’oggetto su cui è invocata
    void concatena()
    {
        cout << "Codice: " << this->code << endl;
        cout << "Marca: " << this->brand << endl;
        cout << "Modello: " << this->model << endl;
        cout << "Velocità del processore: " << this->processorSpeed << endl;
        cout << "Dimensione della memoria RAM: " << this->ramSpace << endl;
        cout << "Dimensione del disco: " << this->diskSpace << endl;
        cout << "Anno di acquisto: " << this->yearOfPurchase << endl;
    }
};

int main()
{
    // preveda la creazione di almeno 2 oggetti di tipo computer
    // invochi il metodo concatena e visualizzi le caratteristiche di tutti i computer
    // visualizzi i codici di tutti i computer (se ce ne sono) acquistati nell’anno n (inserito da tastiera con controllo)

    // Istanziamo un primo oggetto computer, un mac
    Computer computer1("Apple", "MacBook Pro", "2.3 GHz", "16 GB", "1 TB", 2019);
    // Chiedo all'utente di dare un codice al computer1
    computer1.setCode(200);

    // Istanziamo un secondo oggetto computer, un thinkpad
    Computer computer2("Lenovo", "Thinkpad", "2.4 GHz", "8 GB", "512 GB", 2018);
    computer1.setCode(201);

    // Visualizzo le caratteristiche del primo computer
    computer1.concatena();

    // Visualizzo le caratteristiche del second computer
    computer2.concatena();

    // Visualizzo i codici di tutti i computer acquistati nell'anno n (inserito da tastiera con controllo)
    int yearFromInput;

    // Controllo input inserito dall'utente
    do
    {
        cout << "Inserisci l'anno di acquisto dei computer che vuoi visualizzare: ";
        cin >> yearFromInput;

        // Verifica se l'input è un numero valido
        if (cin.fail())
        {
            cin.clear();                                         // Pulisce il flag di errore
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora il resto dell'input
                                                                 // numeric_limits<streamsize>::max(): Restituisce il massimo valore possibile rappresentabile da un tipo streamsize. streamsize è un tipo di dato intero utilizzato per rappresentare dimensioni o indici di stream in C++. In pratica, numeric_limits<streamsize>::max() restituisce il massimo numero rappresentabile con il tipo streamsize \\ '\n' : Specifica il delimitatore('\n' rappresenta un carattere di nuova riga) fino al quale cin deve ignorare l'input.
            cout << "Input non valido. Per favore, inserisci un anno valido." << endl;
        }
        else
        {
            break; // Esci dal ciclo se l'input è valido
        }

    } while (true);

    if (computer1.getYearOfPurchase() == yearFromInput)
    {
        cout << "Codice del computer 1: " << computer1.getCode() << endl;
    }
    else if (computer2.getYearOfPurchase() == yearFromInput)
    {
        cout << "Codice del computer 2: " << computer2.getCode() << endl;
    }
    else
    {
        cout << "Non ci sono computer acquistati nell'anno " << yearFromInput << endl;
    }

    return 0;
}