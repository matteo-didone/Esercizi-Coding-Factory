/* Autore: Didone' Matteo  Data: 20/12/2023
 */

/******************************************************************************
Crea la classe panettone e modifica la sua rappresentazione UML in base alle tue scelte
*******************************************************************************/

// Including io stream library
#include <iostream>
#include <string>

// Adding "using namespace std;" prevents me from having to write "std::" in front of every cin/cout statement
// Instead of writing: std::cout << "Hello, World!" << std::endl;
// I can just write: cout << "Hello, World!" << endl;
using namespace std;

class Panettone
{
    // Di default, è privato
    int weight;
    string brand;
    bool for_celiac;
    int calories;
    int expiration_year;
    int expiration_month;
    int expiration_day;

public:
    // Costruttore senza parametri che crea un panettone basico
    Panettone()
    {
        weight = 0;
        brand = "sconosciuto";
        for_celiac = false;
        calories = 0;
        expiration_year = 0;
        expiration_month = 0;
        expiration_day = 0;
    }

    // Costruttore con parametri che crea un panettone coi parametri passati
    Panettone(int w, string b, bool c, int cal, int ey, int em, int ed)
    {
        weight = w;
        brand = b;
        for_celiac = c;
        calories = cal;
        expiration_year = ey;
        expiration_month = em;
        expiration_day = ed;
    }

    // Metodo che imposta il peso del panettone
    void setWeight(int w)
    {
        weight = w;
    }

    // Metodo che ottiene il peso del panettone
    int getWeight()
    {
        return weight;
    }

    // Metodo che imposta la marca di un panettone
    void setBrand(string b)
    {
        brand = b;
    }

    // Metodo che ottiene la marca di un panettone
    string getBrand()
    {
        return brand;
    }

    // Metodo che imposta se un panettone è adatto ai celiaci
    void setCeliac(bool c)
    {
        for_celiac = c;
    }

    // Metodo che verifica se un panettone è adatto ai celiaci
    bool getCeliac()
    {
        return for_celiac;
    }

    // Metodo che imposta le calorie di un panettone
    void setCalories(int cal)
    {
        calories = cal;
    }

    // Metodo che ottiene le calorie di un panettone
    int getCalories()
    {
        return calories;
    }

    // Metodo che imposta la data di scadenza del panettone
    void setExpirationDate(int ey, int em, int ed)
    {
        expiration_year = ey;
        expiration_month = em;
        expiration_day = ed;
    }

    // Metodo che ottiene la data di scadenza del panettone
    // Metodo che restituisce la data di scadenza del panettone come stringa
    string getExpirationDate()
    {
        return to_string(expiration_day) + "/" + to_string(expiration_month) + "/" + to_string(expiration_year);
    }

    // Metodo che stampa tutte le informazioni relative ad un panettone
    void printInfo()
    {
        cout << "Peso: " << weight << endl;
        cout << "Marca: " << brand << endl;
        cout << "Adatto ai celiaci: " << for_celiac << endl;
        cout << "Calorie: " << calories << endl;
        cout << "Data di scadenza: " << expiration_day << "/" << expiration_month << "/" << expiration_year << endl;
    }

    // Metodo per impostare tutti i parametri del panettone dall'utente
    void setParametersFromUserInput()
    {
        cout << "Inserisci il peso del panettone: ";
        cin >> weight;

        cout << "Inserisci la marca del panettone: ";
        cin.ignore(); // Ignora eventuali caratteri rimanenti nel buffer
        getline(cin, brand);

        cout << "Il panettone è adatto ai celiaci? (1 per Sì, 0 per No): ";
        cin >> for_celiac;

        cout << "Inserisci le calorie del panettone: ";
        cin >> calories;

        cout << "Inserisci l'anno di scadenza del panettone: ";
        cin >> expiration_year;

        cout << "Inserisci il mese di scadenza del panettone: ";
        cin >> expiration_month;

        cout << "Inserisci il giorno di scadenza del panettone: ";
        cin >> expiration_day;
    }
};

int main()
{
    // Creo una serie di panettoni e chiedo in input all'utente di impostare i relativi parametri
    Panettone p1;

    // Imposto i parametri del primo panettone chiedendoli all'utente
    p1.setParametersFromUserInput();

    // Imposto i parametri del secondo panettone chiedendoli all'utente
    Panettone p2;
    p2.setParametersFromUserInput();

    // Imposto i parametri del terzo panettone chiedendoli all'utente
    Panettone p3;
    p3.setParametersFromUserInput();

    // Infine, vado a stampare tutti e tre i panettoni e le relative informazioni fornite in input dall'utente 
    cout << "\nInformazioni del primo panettone:\n";
    p1.printInfo();

    cout << "\nInformazioni del secondo panettone:\n";
    p2.printInfo();

    cout << "\nInformazioni del terzo panettone:\n";
    p3.printInfo();

    return 0;
}