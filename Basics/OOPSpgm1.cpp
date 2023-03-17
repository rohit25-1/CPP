#include <iostream>
using namespace std;

class EMPLOYEE
{

    int employee_number;
    string employee_name;
    float basic;
    float da;
    float it;
    float net_salary;

public:
    void read_data()
    {
        cout << "Enter the employee number: ";
        cin >> employee_number;

        cout << "Enter the employee name: ";
        cin >> employee_name;

        cout << "Enter the basic salary: ";
        cin >> basic;
    }

    void calculate_net_salary()
    {
        da = basic * 0.52;

        it = (basic + da) * 0.30;
        net_salary = basic + da - it;
    }
    void print_data()
    {
        cout << "Employee number: " << employee_number << endl;
        cout << "Employee name: " << employee_name << endl;
        cout << "Basic salary: " << basic << endl;
        cout << "Dearness Allowance: " << da << endl;
        cout << "Income Tax: " << it << endl;
        cout << "Net salary: " << net_salary << endl;
    }
};

int main()
{
    const int N = 3;
    EMPLOYEE employees[N];
    for (int i = 0; i < N; i++)
    {
        cout << "Enter data for employee " << i + 1 << ":" << endl;
        employees[i].read_data();
    }

    for (int i = 0; i < N; i++)
    {
        cout << "\nCalculating net salary for employee " << i + 1 << ":" << endl;
        employees[i].calculate_net_salary();
        employees[i].print_data();
    }

    return 0;
}
