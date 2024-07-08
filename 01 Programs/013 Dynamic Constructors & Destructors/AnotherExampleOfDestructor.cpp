#include<iostream>
using namespace std;
class Person
{ private:
	string name;
  public:
  	Person()
  	{ cout<<"Enter Person Name:";
  	  cin>>name;
	  cout<<"Person Created:"<<name<<endl;
	  }
	~Person()  
	{
		cout<<"Person Destroy:"<<name<<endl;
	}
};

int main()
{ Person P1,P2;

  { 
  Person P3;
  }
  
  Person P4;

}
