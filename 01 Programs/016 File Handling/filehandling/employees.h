#include<iostream>
using namespace std;
class Employee
{
	private:
		int id;
		char name[30];
		long salary;
	public:
	 void getEmployee()	
	 { cout<<"Enter Id:";
	   cin>>id;
	   cout<<"Enter Name:";
	   cin>>name;
	   cout<<"Enter Salary:";
	   cin>>salary;
	 }
    void putEmployee()
	{ int da=salary*55/100;
	  int ns=da+salary;
	cout<<id<<"\t\t"<<name<<"\t\t"<<salary<<"\t\t"<<da<<"\t\t"<<ns<<endl;
    			}		
	int search(int id)		
	{ if(this->id==id)
	   {
	   	return 1;
	   }
	   return 0;
	}
};
