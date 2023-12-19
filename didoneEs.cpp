#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    // Attributi privati
    int salary;
    string nameVariable;

public:
    // Setter
    void setSalary(int s)
    {
        salary = s;
    }

    void setName(string myName)
    {
        nameVariable = myName;
    }

    // Getter
    int getSalary()
    {
        return salary;
    }

    string getName()
    {
        return nameVariable;
    }
};

int main()
{
    string name;

    Employee myObj;
    myObj.setSalary(50000);
    cout << "Salary of myObj: " << myObj.getSalary() << endl;

    Employee maria;
    cout << "Inserisci il nome del primo dipendente: " << endl;
    cin >> name;
    maria.setName(name);
    maria.setSalary(75000);
    cout << maria.getName() << " earns " << maria.getSalary() << endl;

    Employee giuseppe;
    cout << "Inserisci il nome del secondo dipendente: " << endl;
    cin >> name;
    giuseppe.setName(name);
    giuseppe.setSalary(60000);
    cout << giuseppe.getName() << " earns " << giuseppe.getSalary() << endl;

    return 0;
}
