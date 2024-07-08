#include<iostream>
using namespace std;
class Numbers
{ private:
	 int a,b;
  public:
    void getNumbers()	 
    {
    	 cout<<"Enter Numbers:";
    	 cin>>a>>b;
	}
	
	void putNumbers()
	{ cout<<a<<","<<b<<endl;
	}
   friend Numbers operator +(Numbers T1,Numbers T2)	
   { Numbers R;
   	R.a=T1.a+T2.a;
   	R.b=T1.b+T2.b;
   	return R;
   }
};

int main()
{
  Numbers N1,N2,N3;
  N1.getNumbers();
  
  N2.getNumbers();

  N3=N1+N2;
  //N1 and N2 move as parameter
 N1.putNumbers();	
 N2.putNumbers();

 N3.putNumbers();
}


