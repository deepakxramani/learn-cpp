#include<iostream>
using namespace std;
class Product
{
	private:
		int productid;
		string productname;
		long productrate;
	public:
	   void getProduct()
	   { cout<<"Enter Product Id:";
	     cin>>productid;
	     cout<<"Enter Product Name:";
	     cin>>productname;
	     cout<<"Enter Product Rate:";
	     cin>>productrate;
		   }	
	   void putProduct()	   
	   {
	   	 cout<<productid<<"\t\t"<<productname<<"\t\t"<<productrate<<endl;
	   }
		   
};

int main()
{  Product P[3];
   int i;
   for(i=0;i<=2;i++) 
   {
   	P[i].getProduct();
   }
   
   for(i=0;i<=2;i++)
   {
   	P[i].putProduct();
   }
	
}



