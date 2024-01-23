/******************************************************************************

Matteo Didone' 23/01/2024

Ogni oggetto Veicolo deve avere almeno le seguenti caratteristiche (attributi privati):
targa
marca
modello
cilindrata
anno di acquisto
numero posti
disponibile
codice sede

La classe deve avere almeno i seguenti metodi (pubblici):
costruttore con e senza parametri
getNumeroPosti, getDisponibile, getCodiceSede, getCilindrata– che restituiscono i valori degli attributi relativi
setDisponibile, setCodiceSede – che modificano i valori degli attributi relativi
concatena – che restituisce una stringa con tutti i dati dell’oggetto su cui è invocata

Prevedere un metodo main per testare la funzionalità, che:
preveda la creazione di almeno 2 oggetti di tipo veicolo
invochi il metodo concatena e visualizzi le caratteristiche di tutti i veicoli
visualizzi cilindrata e codice sede di tutti i veicoli disponibili (se ce ne sono) con numero di posti n (inserito da tastiera con controllo)

*******************************************************************************/
#include <iostream>
using namespace std;

class Veicolo
{
    // Sono tutti privati di default
    string targa;
    string marca;
    int modello;
    int cilindrata;
    int annoDiAcquisto;
    int numeroPosti;
    bool disponibile;
    int codiceSede;

public:
    // Costruttore senza parametri
    Veicolo()
    {
        this->targa = "";
        this->marca = "";
        this->modello = 0;
        this->cilindrata = 0;
        this->annoDiAcquisto = 0;
        this->numeroPosti = 0;
        this->disponibile = false;
        this->codiceSede = 0;
    }

    // Costruttore con parametri (overloading)
    Veicolo(string targa, string marca, int modello, int cilindrata, int annoDiAcquisto, int numeroPosti, bool disponibile, int codiceSede)
    {
        this->targa = targa;
        this->marca = marca;
        this->modello = modello;
        this->cilindrata = cilindrata;
        this->annoDiAcquisto = annoDiAcquisto;
        this->numeroPosti = numeroPosti;
        this->disponibile = disponibile;
        this->codiceSede = codiceSede;
    }

    // Getters
    string getTarga()
    {
        return this->targa;
    }

    string getMarca()
    {
        return this->marca;
    }

    int getModello()
    {
        return this->modello;
    }

    int getCilindrata()
    {
        return this->cilindrata;
    }

    int getAnnoDiAcquisto()
    {
        return this->annoDiAcquisto;
    }

    int getNumeroPosti()
    {
        return this->numeroPosti;
    }

    bool getDisponibile()
    {
        return this->disponibile;
    }

    int getCodiceSede()
    {
        return this->codiceSede;
    }

    // Setters
    void setTarga(string targa)
    {
        this->targa = targa;
    }

    void setMarca(string marca)
    {
        this->marca = marca;
    }

    void setModello(int modello)
    {
        this->modello = modello;
    }

    void setCilindrata(int cilindrata)
    {
        this->cilindrata = cilindrata;
    }

    void setAnnoDiAcquisto(int annoDiAcquisto)
    {
        this->annoDiAcquisto = annoDiAcquisto;
    }

    void setNumeroPosti(int numeroPosti)
    {
        this->numeroPosti = numeroPosti;
    }

    void setDisponibile(bool disponibile)
    {
        this->disponibile = disponibile;
    }

    void setCodiceSede(int codiceSede)
    {
        this->codiceSede = codiceSede;
    }

    // Metodo che restituisce una stringa con tutti i dati dell’oggetto su cui è invocata
    void concatena()
    {
        cout << "Targa: " << this->targa << endl;
        cout << "Marca: " << this->marca << endl;
        cout << "Modello: " << this->modello << endl;
        cout << "Cilindrata: " << this->cilindrata << endl;
        cout << "Anno di acquisto: " << this->annoDiAcquisto << endl;
        cout << "Numero posti: " << this->numeroPosti << endl;
        cout << "Disponibile: " << this->disponibile << endl;
        cout << "Codice sede: " << this->codiceSede << endl;
    }
};

int main()
{

    // Prevedere un metodo main per testare la funzionalità, che:
    // Preveda la creazione di almeno 2 oggetti di tipo veicolo
    // Invochi il metodo concatena e visualizzi le caratteristiche di tutti i veicoli
    // Visualizzi cilindrata e codice sede di tutti i veicoli disponibili (se ce ne sono) con numero di posti n (inserito da tastiera con controllo)

    // Istanziamo un primo oggetto veicolo, una Fiat 500
    Veicolo veicolo1("AB123CD", "Fiat", 500, 1200, 2015, 5, true, 123);

    // Istanziamo un secondo oggetto veicolo, una Ferrari 458
    Veicolo veicolo2("EF456GH", "Ferrari", 458, 2000, 2020, 5, true, 123);

    cout << "Caratteristiche del primo veicolo: " << endl;
    // Visualizzo le caratteristiche del primo computer
    veicolo1.concatena();

    cout << endl;

    cout << "Caratteristiche del secondo veicolo: " << endl;
    // Visualizzo le caratteristiche del second computer
    veicolo2.concatena();

    // Creazione di una array dei veicoli creati
    Veicolo listaVeicoli[] =
        {
            Veicolo("AB123CD", "Fiat", 500, 1200, 2015, 5, true, 123),
            Veicolo("EF456GH", "Ferrari", 458, 2000, 2020, 5, true, 123),
        };

    // Controllo input inserito dall'utente
    int numeroPostiFromInput;
    do
    {
        cout << "Inserisci il numero di posti che il tuo veicolo deve avere: ";
        cin >> numeroPostiFromInput;

        if (cin.fail() || numeroPostiFromInput <= 0)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Input non valido. Inserisci un numero di posti maggiore di zero." << endl;
        }
        else
        {
            break;
        }
    } while (true);

    // Uso una flag per tenere traccia se ci sono veicoli disponibili o meno
    bool veicoliDisponibili = false;

    // Itero per tutti gli elementi dell'array che ho dichiarato sopra
    for (int i = 0; i < sizeof(listaVeicoli) / sizeof(listaVeicoli[0]); i++)
    {
        // Se il veicolo è disponibile e ha il numero di posti richiesto, stampo le sue caratteristiche
        if (listaVeicoli[i].getDisponibile() && listaVeicoli[i].getNumeroPosti() == numeroPostiFromInput)
        {
            cout << "Veicoli disponibili con " << numeroPostiFromInput << " posti:" << endl;

            cout << "Veicolo " << i + 1 << ":" << endl;
            cout << "Cilindrata: " << listaVeicoli[i].getCilindrata() << endl;
            cout << "Codice sede: " << listaVeicoli[i].getCodiceSede() << endl;
            cout << endl;

            // Imposto il flag a true poiché ho trovato almeno un veicolo disponibile
            veicoliDisponibili = true;
        }
    }

    // Verifico se ci sono veicoli disponibili o meno e stamp un messaggio appropriato
    if (!veicoliDisponibili)
    {
        cout << "Non ci sono veicoli disponibili con " << numeroPostiFromInput << " posti." << endl;
    }

    return 0;
}