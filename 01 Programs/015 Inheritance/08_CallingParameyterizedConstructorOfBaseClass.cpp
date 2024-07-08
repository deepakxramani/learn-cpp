#include<iostream>
using namespace std;

class Base
{ public:
	 Base()
	 {
	 	cout<<"Default Constructor Base Version..."<<endl;
	 }
    Base(int x)
	 {
	 	cout<<"Base Version..."<<x<<endl;
	 }
	 
};

class Derive:public Base
{ public:
	 Derive():Base(10000)
	 {
	 	cout<<"Default Constructor Derive Version..."<<endl;
	 }
	 Derive(int x,int y):Base(y)
	 {
	 	cout<<"Derive Version..."<<x<<","<<y<<endl;
	 } 
};

int main()
{    
	 Derive D;
     //By Default Derive class constructor(Any) always invoke the base class default constructor
    //implicitly
    Derive D1(100,200);
       
}
	
	
	
