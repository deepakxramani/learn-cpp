#include<iostream>
using namespace std;
class Numbers
{ private:
	 int a,b,c;
  public:
    void getNumbers()	 
    {
    	 cout<<"Enter Numbers:";
    	 cin>>a>>b>>c;
	}
	
	void putNumbers()
	{ cout<<a<<","<<b<<","<<c<<endl;
	}
   void operator-()	
   {
   	a=-a;
   	b=-b;
   	c=-c;
   	
   }
};

int main()
{
  Numbers N;
  N.getNumbers();
  N.putNumbers();
  -N;
  //N call the minus operator
  N.putNumbers();
 	
}


