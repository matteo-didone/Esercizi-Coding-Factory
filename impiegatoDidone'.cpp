/* Autore: Didone' Matteo  Data: 20/12/2023
 */

/******************************************************************************
Crea una classe impiegato e due sue istanze (nome: Giuseppe salario: 50000 e nome: Maria salario: 75000)
Puoi partire da esempio1.cpp
Aggiungi il costruttore, l'attributo nome, i metodi setNome e getNome
Disegna la rappresentazione UML della classe
*******************************************************************************/

// Including io stream library
#include <iostream>
// Adding "using namespace std;" prevents me from having to write "std::" in front of every cin/cout statement
// Instead of writing: std::cout << "Hello, World!" << std::endl;
// I can just write: cout << "Hello, World!" << endl;
using namespace std;

class Impiegato
{
    // Di default, è privato
    string name;
    int salary;

public:
    // Costruttore senza parametri che crea una impiegato con nome sconosciuto e salario zero
    Impiegato()
    {
        name = "unknown";
        salary = 0;
    }

    // Costruttore con parametri che crea una impiegato con nome e salario passati come parametri
    Impiegato(string n, int s)
    {
        name = n;
        salary = s;
    }

    // Metodo che restituisce il nome della impiegato
    string getName()
    {
        return name;
    }

    // Metodo che restituisce il salario della impiegato
    int getSalary()
    {
        return salary;
    }

    // Metodo che imposta il nome della impiegato
    void setName(string n)
    {
        name = n;
    }

    // Metodo che imposta il salario della impiegato
    void setSalary(int s)
    {
        salary = s;
    }

    // Metodo che stampa il nome dell'impiegato e il suo salario
    void printNameSalary() 
    {
        cout << "Nome: " << name << endl;
        cout << "Salario: " << salary << endl;
    }
};

int main()
{
    // Istanziamo un oggetto Impiegato e lo chiamiamo "impiegatoGiuseppe"
    Impiegato impiegatoGiuseppe;
    // Istanziamo un oggetto Impiegato e lo chiamiamo "impiegataMaria"
    Impiegato impiegataMaria;

    // Impostiamo il nome di impiegatoGiuseppe a "Giuseppe"
    impiegatoGiuseppe.setName("Giuseppe");
    // Impostiamo il salario di impiegatoGiuseppe a 50000
    impiegatoGiuseppe.setSalary(50000);

    // Impostiamo il nome di impiegataMaria a "Maria"
    impiegataMaria.setName("Maria");
    // Impostiamo il salario di impiegataMaria a 75000
    impiegataMaria.setSalary(75000);

    // Stampo il nome e il salario dell'impiegato Giuseppe
    impiegatoGiuseppe.printNameSalary();

    // Stampo il nome e il salario dell'impiegata Maria
    impiegataMaria.printNameSalary();

    return 0;
}