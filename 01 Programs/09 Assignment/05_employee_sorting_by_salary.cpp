
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
   cout<<id<<","<<name<<","<<salary<<endl;
   
  }
  friend void sorting(Employee *E,int n)
  { int i,j;
    Employee T;
     for(i=0;i<n;i++)
     {
     	for(j=0;j<(n-1)-i;j++)
     	{
     		 if(E[j].name>E[j+1].name)
     		 { T=E[j];
     		   E[j]=E[j+1];
     		   E[j+1]=T;
     		 	
			  }
		 }
	 }
  	
  }
};
int main()
{
	Employee E[3];
	int i;
	for(i=0;i<=2;i++)
	{E[i].getEmployee();}
	sorting(E,3);
	
	for(i=0;i<=2;i++) 
    {E[i].putEmployee();
		}	
}