#include <iostream>
using namespace std;
 
struct Employee 
{
    char name[50];
    int salary;
    int employeeCode;
    char dept[5];
};
int main() 
{
    Employee e;
    cout << "Enter name of employee : ";
    cin>>e.name;
    cout << "Enter department : ";
    cin>>e.dept;
    cout << "Enter salary of employee : ";
    cin >> e.salary;
    cout << "Enter employee code : ";
    cin >> e.employeeCode;
    cout << "\n*** Employee Details ***" << endl;
    cout << "Name : " << e.name << endl << "Salary : "<< e.salary << endl;
    cout << "Employee Code : " << e.employeeCode << endl << "Department : " << e.dept <<endl;
}
