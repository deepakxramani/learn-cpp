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
   Numbers operator +(Numbers T)	
   { Numbers R;
   	R.a=a+T.a;
   	R.b=b+T.b;
   	return R;
   }
};

int main()
{
  Numbers N1,N2,N3,M;
  N1.getNumbers();
  
  N2.getNumbers();
  M.getNumbers();
  N3=N1+N2+M;
  //N1 call + and N2 move as parameter
 N1.putNumbers();	
 N2.putNumbers();
 M.putNumbers();
 N3.putNumbers();
}


