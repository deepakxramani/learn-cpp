#include<iostream>
using namespace std;
class Num
{ private:
	 int n;
  public:
     void getValue()//inline	 
     {
     	cout<<"Enter value:";
     	cin>>n;
	 }
	 void putValue()//inline
	 { cout<<n<<endl;
	 }
	 int sum();
	 int reverse();
};

int Num::sum()
{
 int s=0,i=1;
	   while(i<=n)
	   { s=s+i;
	     i++;
		   }
	   return(s);
	 }
	 
int Num::reverse()
{  int t=n,s=0,r;
   while(t) 
   {
   	 r=t%10;
   	 s=(s*10)+r;
   	 t=t/10;
   }
   return(s);
	 }	 
	 
int main()
{ Num T;
  T.getValue(); //expand its line here
  T.putValue(); //expand its line here	
  int k=T.sum();// Jump to Sum function
  cout<<k<<endl;
  int r=T.reverse();
  cout<<r<<endl;
 }

