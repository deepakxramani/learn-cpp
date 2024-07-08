#include<iostream>
using namespace std;

int reverse(int n)
{
    int r,s=0;
    while(n)
    {
        r=n%10;
        s=(s*10)+r;
        n=n/10;
    }
    return(s);
}
int main()
{
    int a, n;
    cout<<"Enter Number to Reverse: "<<endl;
    cin>>n;
    a=reverse(n);
    cout<<"Reverse: "<<endl;
    
    return 0;
}