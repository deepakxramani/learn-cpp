/*Function Overriding in Inheritance
  when base class and derive class contain same signature of fn
   known as function overriding in inheritance

*/
#include<iostream>
using namespace std;
class Base
{  public:
	 void show()
	 { cout<<"Base Version"<<endl;
	 }
};

class Derive:Base
{  public:
	 void show()
	 { 
	 Base::show();
	 cout<<"Derive Version"<<endl;
	 }
};
int main()
{
	Derive D;
    //D.show(); Derive class does not recognize this function
	D.show();
}
/* in above example we can not achieve polymorphism becos
   show fn invoke by two diffrent method first via D object and then
   Base Class name */
   




