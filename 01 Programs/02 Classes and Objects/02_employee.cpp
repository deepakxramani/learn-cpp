
#include<iostream>
using namespace std;
class Employee
{ private:
   int id;
   string name;
   float salary;
  public:
   void getEmployee()
   {
     cout<<"Enter Id:";
     cin>>id;
     cout<<"Enter Name:";
     cin>>name;
     cout<<"Enter Salary:";
     cin>>salary;
   }
   
  void putEmployee()
  {
   cout<<"Id:"<<id<<endl;
   cout<<"Name:"<<name<<endl;
   cout<<"Salary:"<<salary<<endl;
   
   netSalary();
  }
  void netSalary()
  {
  	 float da=salary*40/100;
  	 cout<<"DA:"<<da<<endl;
  	 
  	 float hra=salary*16/100;
  	 cout<<"HRA:"<<hra<<endl;
  	 
  	 float pf=salary*12/100;
  	 cout<<"PF:"<<pf<<endl;
  	 float total=salary+da+hra-pf;
  	
  	 cout<<"Total:"<<total<<endl;
  	 
  }
};
int main()
{
	Employee E;
	E.getEmployee();
	E.putEmployee();
}


