#include<iostream>
using namespace std;
class Num
{ private:
	 int n;
  public:
     void getValue()//inline	//accessing private through public
     {
     	cout<<"Enter value:";
     	cin>>n;
	 }
	 void putValue()//inline
	 { cout<<n<<endl;
	 }
	 int sum();
	 int reverse();
	 int countdigit();
	 int sumdigit();
	 int isprime();
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
{
	int r,t=n,s=0;
	while(t)
	{
		r=t%10;
		s=(s*10)+r;
		t=t/10;
	}
	return(s);
}
int Num::countdigit()
{
	int r,c=0;
    while(n)
    {
        r=n%10;
        n=n/10;
        c++;
    }
    return(c);
}
int Num::sumdigit()
{
    int r,s=0,c=0;
    while(n)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    return(s);
}
int Num::isprime()
{
/*What is the algorithm for prime numbers?
Algorithm to Find Prime Number

STEP 1: Initialize a variable ”i”=2. 
STEP 2: If num is equal to 0 or 1, 
		then RETURN false. 
STEP 3: If num is equal to “i”, then 
RETURN true. 
STEP 4: If num is divisible by “i”, then RETURN false*/
int i=2;
if(n==0 || n==1)
	return (0);
else if(n%i==0)
	return (0);
else if(n==1)
	return (1);
}

int main()
{	Num T;
	T.getValue(); //expand its line here
	T.putValue(); //expand its line here	
	
	int k=T.sum();// Jump to Sum function
	cout<<"Sum: "<<k<<endl;
	
	int h=T.reverse();
	cout<<"Reverse: "<<h<<endl;
	
	int sd=T.sumdigit();
	cout<<"Sum Of Digits: "<<sd<<endl;

	int cd=T.countdigit();
	cout<<"Digits: "<<cd<<endl;
		
	int ip=T.isprime();
	cout<<"Is Prime: "<<ip<<endl;

	return 0;
}

