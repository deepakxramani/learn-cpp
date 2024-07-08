#include<iostream>
using namespace std;
class Employee
{ private:
	int salary;
  public:
    void getSalary()	
    {
    	cout<<"Enter Salary:";
    	cin>>salary;
	}
	
	void putSalary()	
    {
    	cout<<"Salary:"<<salary<<endl;
	}
	
	void netSalary(int da,int hra)
	{   putSalary();
		int total=salary+da+hra;
		cout<<"Total:"<<total<<endl;
	}
	void netSalary(int commision)
	{   putSalary(); 
		int total=salary+commision;
		cout<<"Total:"<<total<<endl;
	}
};

int main()
{ Employee R,S;
  R.getSalary();
  S.getSalary();
  R.netSalary(1000,2000);
  S.netSalary(20000);
  }
