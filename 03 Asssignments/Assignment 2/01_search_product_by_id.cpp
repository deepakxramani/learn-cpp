#include<iostream>
using namespace std;

class Product
{
    private:
        int id;
        string productname;
    public:
        void getProduct()
        {
            cout<<"Enter product id: ";
            cin>>id;
            cout<<"Enter product name: ";
            cin>>productname;
        }
        void showProduct()
        {
            cout<<"Product ID: "<<id<<"  "<<"Product Name: "<<productname<<endl;
        }
        
        static int search(Product *pro,int n)
        
       {
            
            Product P;
            
            
            for(int i=0;i<=9;i++)
            {
                if(i==-1)
                {
                    cout<<"Product Not Found..."<<endl;
                }
                else
                {   P=pro[i];
                    P[i].showProduct();
                }
            }
            
        }
};


int main()
{
    Product P[10];
    

    for(int i=0;i<=9;i++)
    {
        P[i].getProduct();
    }

    int j = Product.search(P,200); 

    for(int i=0;i<=9;i++)
    {
        P[i].showProduct();
    }

    return 0;
}