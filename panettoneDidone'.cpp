/* Autore: Didone' Matteo  Data: 20/12/2023
 */

/******************************************************************************
Crea la classe panettone e modifica la sua rappresentazione UML in base alle tue scelte
*******************************************************************************/

// Including io stream library
#include <iostream>
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
    void getExpirationDate()
    {
        cout << "Data di scadenza: " << expiration_day << "/" << expiration_month << "/" << expiration_year << endl;
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
};

int main()
{
    // Creo una serie di panettoni
    Panettone p1(1000, "Motta", false, 3000, 2021, 12, 31);
    Panettone p2(500, "Bauli", true, 2000, 2021, 12, 31);
    Panettone p3(750, "Pandoro", false, 2500, 2021, 12, 31);

    // Modifico le informazioni dei panettoni
    p1.setWeight(1500);
    p1.setBrand("Pandoro");
    p1.setCeliac(true);
    p1.setCalories(2500);
    p1.setExpirationDate(2022, 12, 31);

    p2.setWeight(1000);
    p2.setBrand("Motta");
    p2.setCeliac(false);
    p2.setCalories(3000);
    p2.setExpirationDate(2022, 12, 31);

    p3.setWeight(500);
    p3.setBrand("Bauli");
    p3.setCeliac(true);
    p3.setCalories(2000);
    p3.setExpirationDate(2022, 12, 31);

    // Stampo le informazioni dei panettoni
    p1.printInfo();
    p2.printInfo();
    p3.printInfo();

    return 0;
}