#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    // Attributi privati
    int salary;
    string name;

public:
    // Setter
    void setSalary(int s)
    {
        salary = s;
    }

    void setName(string myName)
    {
        name = myName;
    }

    // Getter
    int getSalary()
    {
        return salary;
    }

    string getName()
    {
        return name;
    }
};

int main()
{
    Employee myObj;
    myObj.setSalary(50000);
    cout << "Salary of myObj: " << myObj.getSalary() << endl;

    Employee maria;
    maria.setName("Maria");
    maria.setSalary(75000);
    cout << maria.getName() << " earns " << maria.getSalary() << endl;

    Employee giuseppe;
    giuseppe.setName("Giuseppe");
    giuseppe.setSalary(60000);
    cout << giuseppe.getName() << " earns " << giuseppe.getSalary() << endl;

    return 0;
}
