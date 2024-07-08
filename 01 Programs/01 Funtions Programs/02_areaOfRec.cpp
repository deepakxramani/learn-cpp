#include<iostream>
using namespace std;

float area(float l, float b)
{
    float area=l*b;
    return(area);
}
int main()
{
    int a=55, b=89, ra;
    ra=area(a,b);
    cout<<"Area of Rectangle:"<<ra<<endl;

    ra=area(20,40);
    cout<<"Area of Rectangle: "<<ra;
}