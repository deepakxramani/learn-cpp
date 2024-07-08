#include<iostream>
using namespace std;

int product(int n)
{
    int p=1,i=1;
    while(i<=n)
    {
        p=p*i;
        i++;
    }
    return(p);
}
int main()
{
    int num, x;
    cout<<"Enter Number: "<<endl;
    cin>>num;
    x=product(num);
    cout<<"Product of n Numbers: "<<x<<endl;
    return 0;
}