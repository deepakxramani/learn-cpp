#include<iostream>
using namespace std;

void print(char x, int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        cout<<x;
    }
}
int main()
{
    print('*',20);
}