#include<iostream>
using namespace std;

int sum(int n)
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

int  main()
{
    int a, n;
    cout<<"Enter Number: "<<endl;
    cin>>n;
    a=sum(n);
    cout<<"Reverse: "<<a<<endl;
    return 0;
}
