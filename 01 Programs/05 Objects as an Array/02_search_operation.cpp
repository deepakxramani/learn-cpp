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
            cout<<"ID"<<"\t\tProduct"<<"\t\tRate"<<endl;
            cout<<productid<<"\t\t"<<productname<<"\t\t"<<productrate<<endl;
        }
        int search(int);
};
int Product::search(int pid)
{
    if(productid==pid)
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
    int pid,found=0;
        cout<<"Enter product ID you want to Search: ";
        cin>>pid; 
    for(i=0;i<=2;i++)
    {
        found=P[i].search(pid);
        if(found)
        {
            break;
        }
    }
    if(!found)
        {
            cout<<"Invalid Product ID...";
        }
       
    return 0;
}