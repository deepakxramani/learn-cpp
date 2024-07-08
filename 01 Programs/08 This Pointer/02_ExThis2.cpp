#include<iostream>
using namespace std;
class Person
{  private:
	string name;
	int age;
   public:
      void getPerson(string name,int age)	
      { this->name=name;
      	this->age=age;
	  }
	  void putPerson()
	  {
	  	cout<<name<<","<<age<<endl;
	  }
	 Person elder(Person);
};
Person Person::elder(Person T)
{
	 if(T.age>age)
	 {return(T);
	 }
	 else
	 {
	 	return(*this);
	 }
}

int main()
{
  Person P1,P2,P3;
  P1.getPerson("Jack",4);
  P2.getPerson("Peter",10);
  P3=P1.elder(P2);
  P3.putPerson();
  
}
