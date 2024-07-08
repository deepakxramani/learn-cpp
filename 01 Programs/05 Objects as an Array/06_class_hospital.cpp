#include<iostream>
using namespace std;
class Fortis
{
    private:
        int pid;
        string patientName;
        string status;
        string GE,BM,BPL;
        int billamount;
        float discount,discountamt,netamt;
    public:
        void getpatient()
        {
            cout<<"Enter Patient ID"<<endl;
            cin>>pid;
            cout<<"Enter Patient Name"<<endl;
            cin>>patientName;
            cout<<"Enter Patient Status (GE,BM OR BPL)"<<endl;
            cin>>status;
            cout<<"Enter Bill Amount"<<endl;
            cin>>billamount;
        }
        void showpatient()
        {   
            if(status=="GE")
            {
                discount=20;
                discountamt=billamount*discount/100;
                netamt=billamount-discountamt;
                cout<<pid<<"\t"<<patientName<<"\t\t"<<status<<"\t\t"<<discount<<"\t\t"<<discountamt<<"\t\t\t"<<billamount<<"\t\t"<<netamt<<endl;

            }
            if(status=="BM")
            {
                discount=0;
                discountamt=billamount*discount/100;
                netamt=billamount-discountamt;
                cout<<pid<<"\t"<<patientName<<"\t\t"<<status<<"\t\t"<<discount<<"\t\t"<<discountamt<<"\t\t\t"<<billamount<<"\t\t"<<netamt<<endl;

            }
            if(status=="BPL")
            {
                discount=100;
                discountamt=billamount*discount/100;
                netamt=billamount-discountamt;
                cout<<pid<<"\t"<<patientName<<"\t\t"<<status<<"\t\t"<<discount<<"\t\t"<<discountamt<<"\t\t\t"<<billamount<<"\t\t"<<netamt<<endl;
            }

        }
};
int main()
{
    Fortis F[3];
    int i;
    for(i=0;i<=2;i++)
    {
        F[i].getpatient();
    }
    cout<<"P.Id"<<"\t"<<"P.Name"<<"\t\t"<<"Status"<<"\t\t"<<"Discount %"<<"\t"<<"Dis.Amount"<<"\t\t"<<"Amt."<<"\t\t"<<"Net Amt."<<endl;
    for(i=0;i<=2;i++)
    {
        F[i].showpatient();
    }
    return 0;
}