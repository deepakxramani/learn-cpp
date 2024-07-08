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
        int searchByCategory(string);
};
int Fortis::searchByCategory(string cat)
{
    if(status==cat)
    {
        return(1);
    }
    else
    {
        return(0);
    }
}
int main()
{
    Fortis F[3];
    int i,ch,found,count;
    string cat;
    for(i=0;i<=2;i++)
    {
        F[i].getpatient();
    }
    do{
        cout<<"\nMain Menu\n1]Show All Patients\n2]Show by Category\n3]Exit";
        cout<<"\nEnter Your Choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                cout<<"P.Id"<<"\t"<<"P.Name"<<"\t\t"<<"Status"<<"\t\t"<<"Discount %"<<"\t"<<"Dis.Amount"<<"\t\t"<<"Amt."<<"\t\t"<<"Net Amt."<<endl;
                cout<<"---------------------------------------------------------------------------------------------------------"<<endl;
                for(i=0;i<=2;i++)
                {
                    F[i].showpatient();
                }break;
            case 2:
                cout<<"Enter Patient Category to Search"<<endl;
                cin>>cat;
                cout<<"P.Id"<<"\t"<<"P.Name"<<"\t\t"<<"Status"<<"\t\t"<<"Discount %"<<"\t"<<"Dis.Amount"<<"\t\t"<<"Amt."<<"\t\t"<<"Net Amt."<<endl;
                cout<<"---------------------------------------------------------------------------------------------------------"<<endl;
                found=0;
                count=0;
                for(i=0;i<=2;i++)
                {
                    found=F[i].searchByCategory(cat);
                    if(found)
                    {
                        F[i].showpatient();
                        count++;
                    }
                }
                if(count==0)
                {
                    cout<<"Sorry, No Record Found..."<<endl;
                }break;
            case 3:
                {cout<<"Sayonara...;)"<<endl;}
                break;
            default:
                cout<<"Invalid Input"<<endl;
                break;
        }
    }while(ch!=3);

    return 0;
}