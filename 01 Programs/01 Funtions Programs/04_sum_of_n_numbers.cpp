#include<iostream>
using namespace std;

int sum(int n)
{
    int s=0,i=1;
    while(i<=n)
    {
        s=s+i;
        i++;
    }
    return(s);
}
int main()
{
    int a, num;
    cout<<"Enter Number: "<<endl;
    cin>>num;
    a=sum(num);
    cout<<"Sum of N Numbers: "<<a;
}