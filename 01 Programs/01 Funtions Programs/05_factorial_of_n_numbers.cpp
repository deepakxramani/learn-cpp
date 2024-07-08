#include<iostream>
using namespace std;

int factorial(int n)
{
    int p=1;
    while(n>1)
    {
        p=p*n;
        n--;
    }
    return(p);
}

int main()
{
    int a, n;
    cout<<"Enter Number: "<<endl;
    cin>>n;
    a=factorial(n);
    cout<<"Factorial Of N Numbers: "<<a<<endl;
    return 0;
}