#include<iostream>
using namespace std;

class Base
{ public:
	 Base()
	 {
	 	cout<<"Default Constructor Base Version..."<<endl;
	 }
};

class Derive:public Base
{ public:
	 Derive()
	 {
	 	cout<<"Default Constructor Derive Version..."<<endl;
	 }
};

int main()
{
	 Derive D;
     //By Default Derive class constructor always invoke the base class default constructor
    //implicitly
       
}
	
	
	
