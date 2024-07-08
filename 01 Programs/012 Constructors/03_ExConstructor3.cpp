#include<iostream>
using namespace std;
class Person
{ private:
	 string name; 
	 int age;
	 
  public:
  	 Person(){
  	 	cout<<"Person Constructed..."<<endl;
  	 	age=0;
  	 	name="None";
	   }
  	 Person(string name,int age){
  	 	this->name=name;
  	 	this->age=age;
	   }
	Person(Person &P)   
	{   name=P.name;
		age=P.age+1;
	}
	void putPerson()
	 { cout<<name<<","<<age<<endl;
		  }	 	  
 };



int main()
{ 	 
   Person P1("Harry",10);
   P1.putPerson();
   Person P2;
   P2.putPerson();
   Person P3(P1);
   P3.putPerson();
   Person P4(P3);
   P4.putPerson();
   
}





