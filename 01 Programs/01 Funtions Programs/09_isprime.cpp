#include<iostream>
using namespace std;


int isprime(int n)
{   int i=2;
    if(n==0 || n==1)
    {
        cout<<"Entered Number is not a Prime Number!";
    }
    else if(i%n==0)
    {
       cout<<"Entered Number is not a Prime Number!"; 
    }
    else
    {
        cout<<"Entered Number is a Prime Number!"; 
    }
    return (0);
}

int main()
{
    int x,num;
    cout<<"Enter Number to Check: "<<endl;
    cin>>num;
    x=isprime(num);
    return 0;
}