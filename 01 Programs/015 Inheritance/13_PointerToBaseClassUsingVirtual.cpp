 /* 
 Example of virtual function/late binding/dynamic binding/
 RTP(run time polymorphism)
 
 */
#include<iostream>
using namespace std;
class Base
{  public:
	 virtual void show()
	 { cout<<"Base Version"<<endl;
	 }
};

class DeriveOne:public Base
{  public:
	 void show()
	 { 
	 
	 cout<<"Derive Version One"<<endl;
	 }
};

class DeriveTwo:public Base
{  public:
	 void show()
	 { 
	 
	 cout<<"Derive Version Two"<<endl;
	 }
};



int main()
{  Base *B;
   DeriveOne D1;
   B=&D1;
   B->show();
   
   DeriveTwo D2;
   B=&D2;
   B->show();
  
   Base b;
   B=&b;
   B->show();
  
   
	
	
	} 
   




