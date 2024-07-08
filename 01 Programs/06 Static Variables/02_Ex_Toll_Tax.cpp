#include<iostream>
using namespace std;
class TollTax
{
    private:
        string vehicleno;
        string type;  // LV, HV, GV
        int amt;
        static int totalAmt;
        static int c1,c2,c3;    
    public:
        void getdetails()
        {
            cout<<"Enter Vehicle Number"<<endl;
            cin>>vehicleno;
            cout<<"Enter Vehicle Type"<<endl;
            cin>>type;
            cout<<"Enter Amount"<<endl;
            cin>>amt;
            totalAmt=totalAmt+amt;
            if(type=="LV")
            {
                c1++;
            }
            if(type=="HV")
            {
                c2++;
            }  
            if(type=="GV")
            {
                c3++;
            }
        }
        static void showdetails()
        {
            cout<<"Total LV: "<<c1<<"\t"<<"Total HV: "<<c2<<"\t"<<"Total GV: "<<c3<<"\t"<<"Total Amount: "<<totalAmt<<endl;
        }

};
int TollTax::totalAmt;
int TollTax::c1;
int TollTax::c2;
int TollTax::c3;

int main()
{
    TollTax T[10];
    int i;
    for(i=0;i<=9;i++)
    {
        T->getdetails();
    }
    TollTax::showdetails();
    return 0;
}