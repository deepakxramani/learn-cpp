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
        {
            cout<<"Enter Product ID:"<<endl;
            cin>>productid;
            
            cout<<"Enter Product Name:"<<endl;
            cin>>productname;

            cout<<"Product Rate: "<<endl;
            cin>>productrate;
        }
        
        void putProduct()
        {
            cout<<productid<<"\t\t"<<productname<<"\t\t"<<productrate<<endl;
        }
        int search(int,int);
};
int Product::search(int min, int max)
{
    if(productrate>=min && productrate<=max)
    {
        putProduct();
        return 1;
    }
    return(0);
}
int main()
{
    Product P[3];
    int i;
    for(i=0;i<=2;i++)
    {
        P[i].getProduct();
    }
    int min,max,found=0,count=0;
        cout<<"Enter Min and Max Rate: ";
        cin>>min>>max; 
    for(i=0;i<=2;i++)
    {
        found=P[i].search(min,max);
        if(found)
        {
            count++;
        }
    }
    if(count==0)
        {
            cout<<"No Product Found...";
        }
        else
        {
            cout<<"Product Found..."<<count<<endl;
        }   
    
    return 0;
}