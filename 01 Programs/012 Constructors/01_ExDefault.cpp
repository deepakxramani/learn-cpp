#include<iostream>
using namespace std;
int sum(int x=0,int y=600,int z=80)
{
  int t=x+y+z;
  return(t);
}

int main()
{
int t;
t=sum(20,90,10);
cout<<t<<endl;
t=sum(20,90);
cout<<t<<endl;
t=sum(20);
cout<<t<<endl;
t=sum();
cout<<t<<endl;
}

