#include<iostream>
using namespace std;

class Product
{
    private:
        int productid;
        string produtname;
        long rate,newRate;
        int qty;
        int stock;
    public:
        void getProduct()
        {
            cout<<"Enter Product ID:"<<endl;
            cin>>productid;
            cout<<"Enter Product Name:"<<endl;
            cin>>produtname;
            cout<<"Enter Product Rate:"<<endl;
            cin>>rate;
            cout<<"Enter Product Quantity:"<<endl;
            cin>>qty;
        }
        
        void purchase()
        {   
            int amt;
            cout<<"Enter Qunatity: ";
            cin>>qty;
            cout<<"Enter Rate of 1 quantity: ";
            cin>>rate;
            stock=0;
            if(qty>0)
            {
                stock=stock+qty;
                amt=qty*rate;
                cout<<"Amount to be paid: "<<amt<<endl;
            }
            else
            {
                cout<<"Invalid Quantity..."<<endl;
            }
            cout<<"Amount to be paid: "<<amt<<endl;
            
        }
        void sale()
        {   int qty,amt;
            cout<<"Enter product quantity you want to sale: ";
            cin>>qty;
            cout<<"Enter Rate of 1 quantity: ";
            cin>>rate;
            if(qty<=stock)
            {
                stock=stock-qty;
                newRate=rate*qty;
                cout<<"\nYou are selling stock worth: "<<newRate<<" Rs."<<endl;
                cout<<"Now available stock is: "<<stock<<" units"<<endl;
            }
            else
            {
                cout<<"Less Quantity..."<<endl;
            }

        }
        void showProduct()
        {   
            cout<<"-----------------------------------------------"<<endl;
            cout<<"P.ID"<<"\t"<<"P.Name"<<"\t\t"<<"P.Rate"<<"\t"<<"Stock"<<endl;
            cout<<"-----------------------------------------------"<<endl;
            cout<<productid<<"\t"<<produtname<<"\t\t"<<rate<<"\t"<<stock<<endl;
        }
        int search(int);


};
int Product::search(int id)
{
    if(productid==id)
    {
        showProduct();
        return(1);
    }
    else
    {
        return(0);
    }
}


int main()
{
    Product P[5];
    int i, ch, id, found;
    for(i=0;i<=2;i++)
    {
        P[i].getProduct();
    }

    do{
        cout<<"\nMain Menu\n1]Display All Records\n2]Display by ID\n3]Purchase\n4]Sale\n5]Exit";
        cout<<"\nEnter Your Choice: ";
        cin>>ch;
            switch(ch)
            {
                case 1:
                    for(i=0;i<=2;i++)
                    {
                        P[i].showProduct();
                        
                    }break;

                case 2:
                    cout<<"Enter Product ID to search product: ";
                    cin>>id;
                    found=0;
                    for(i=0;i<=2;i++)
                    {
                        found=P[i].search(id);
                        if(found)
                        {break;}
                    }
                    if(!found)
                    {
                        cout<<"Product Doesn't Exist...*_*"<<endl;
                    }break;
                case 3:
                    cout<<"Enter Product ID to Purchase product: ";
                    cin>>id;
                    found=0;
                    for(i=0;i<=2;i++)
                    {
                        found=P[i].search(id);
                        if(found)
                        {
                            P[i].purchase();
                            break;
                        }
                            
                    }break;           
                case 4:
                    cout<<"Enter Product ID to Sale product: ";
                    cin>>id;
                    found=0;
                    for(i=0;i<=2;i++)
                    {
                        found=P[i].search(id);
                        if(found)
                        {
                            P[i].sale();
                            break;
                        }
                    }
                    if(!found)
                    {
                        cout<<"Product Doesn't Exist...*_*"<<endl;
                    }break;   
                case 5:
                    cout<<"Sayonara...;)"<<endl;
                    break;
                default:
                    cout<<"Invalid Choice...*_*"<<endl;
                    break;
            }
    }while(ch!=5);
}
