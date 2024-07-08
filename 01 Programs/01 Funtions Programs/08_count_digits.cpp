#include<iostream>
using namespace std;

int count(int n)
{
    int r,s=0,c=0;
    while(n)
    {
        r=n%10;
        n=n/10;
        c++;
    }
    return(c);
}

int  main()
{
    int a, n;
    cout<<"Enter Number: "<<endl;
    cin>>n;
    a=count(n);
    cout<<"There are "<<a<<" Digits"<<endl;
    return 0;
}