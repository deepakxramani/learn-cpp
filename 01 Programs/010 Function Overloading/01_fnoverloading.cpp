#include<iostream>
using namespace std;
double volume(double r)
{	double v=4.0/3.0*3.14*r*r*r;
	return(v);
}

double volume(double r,double h)
{
	double v=3.14*r*r*h;
	return(v);
}

double volume(double l,double b,double h)
{
	double v=l*b*h;
	return(v);
}

int main()
{ double v;
  v=volume(3,5);
  cout<<"Cylinder:"<<v<<endl;
  v=volume(3,5,4);
  cout<<"Cuboid:"<<v<<endl;
  v=volume(5);
  cout<<"Sphere:"<<v<<endl;

  }

    
    
