#include<iostream>
using namespace std;
// k=max(100,200)

int max(int x, int y)
{
    if(x>y)
    return(x);
    else
    return(y);
}
int main()
{
    int a=100, b=200, c;
    c=max(a,b);    // Calling function (Actual Arguements)
    cout<<"Max: "<<c;
}
