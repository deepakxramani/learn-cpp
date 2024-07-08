 
#include<iostream>
using namespace std;
class Base
{  public:
	 void show()
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
   
   DeriveOne D2;
   B=&D2;
   B->show();
  
   Base b;
   B=&b;
   B->show();
  
   
	
	
	} 
   




