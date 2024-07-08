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
   friend void operator++(Numbers &T)	
   {
   	T.a=++T.a;
   	T.b=++T.b;
   	T.c=++T.c;
   	
   }
};

int main()
{
  Numbers N;
  N.getNumbers();
  N.putNumbers();
  ++N;
  //- is independent function & N move as parameter
  N.putNumbers();
 	
}