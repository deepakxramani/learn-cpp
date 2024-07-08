#include<iostream>
using namespace std;

class Employee
{
    private:
        int id;
        string name;
        long salary;
        long da,hra;
    public:
        Employee()
        {
            cout<<"Enter Employee ID: ";
            cin>>id;
            cout<<"Enter Employee Name: ";
            cin>>name;
            cout<<"Enter Salary: ";
            cin>>salary;
            cout<<"Employee Created!"<<endl;
            da=(salary*60)/100;
            hra=(salary*35)/100;
        }
        void putEmployee()
        {
            cout<<"ID"<<"\t"<<"Name"<<"\t"<<"Salary"<<"\t"<<"Da"<<"\t"<<"Hra"<<endl;
            cout<<id<<"\t"<<name<<"\t"<<salary<<"\t"<<da<<"\t"<<hra<<endl;
        }
};

int main()
{
    Employee E1;
    E1.putEmployee();

    Employee E2;
    E2.putEmployee();

    Employee E3;
    E3.putEmployee();

} 