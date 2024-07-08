#include<iostream>
using namespace std;

class BankAPP
{
    private:
        int accNum;
        string name;
        long balance;
    public:
        void openAccount()
        {
            cout<<"Enter Account Number:"<<endl;
            cin>>accNum;

            cout<<"Enter Name:"<<endl;
            cin>>name;

            cout<<"Enter Blanace:"<<endl;
            cin>>balance;
        }
        void showAccount()
        {
            cout<<accNum<<"\t\t"<<name<<"\t\t"<<balance;
            cout<<"\n";
        }
        void deposit()
        {
            int amt;
            cout<<"Enter Amount you want to Deposit:"<<endl;
            cin>>amt;
            if(amt>0)
            {
                balance=balance+amt;
            }
            else
            {
                cout<<"Invalid Amount Value...";
            }
        }
        void withdrawl()
        {
            int amt;
            cout<<"Enter Amount you want to Withdraw:"<<endl;
            cin>>amt;
            if(balance>=amt)
            {
                balance=balance-amt;
            }
            else
            {
                cout<<"Less Balance...";
            }
        }
        int search(int);

};
int BankAPP::search(int an)
{
    if(accNum==an)
    {
        showAccount();
        return(1);
    }
        return(0);
}

int main()
{
    BankAPP H[3];
    int i,ch,an,found;
    for(i=0;i<=2;i++)
    {
        H[i].openAccount();
    }

    do{
        cout<<"Main Menu\n1]Show All Accounts\n2]Display by Account Number\n3]Deposit\n4]Withdrawl\n5]Exit";
        cout<<"\nEnter Your Choice: ";
        cin>>ch;
            
            switch(ch)
            {
                case 1:
                    for(i=0;i<=2;i++)
                    {
                        H[i].showAccount();
                    }
                    break;
                case 2:
                    cout<<"Enter Account Number you want to Search:"<<endl;
                    cin>>an;
                    found=0;
                    for(i=0;i<=2;i++)
                    {
                        found=H[i].search(an);
                        if(found)
                        {
                            break;
                        }
                    }
                    if(!found)
                    {
                        cout<<"Account Number doesn't exist...";
                    }break;
                case 3:
                    cout<<"Enter Account Number For Deposit: ";
                    cin>>an;
                    found=0;
                    for(i=0;i<=2;i++)
                    {
                        found=H[i].search(an);
                        if(found)
                        {
                            H[i].deposit();
                            break;
                        }
                    }
                    if(!found)
	                { 
                        cout<<"Account Number Not Exist...."<<endl;
	                }break;
                case 4:
                    cout<<"Enter Account Number For Withdrawl: ";
                    cin>>an;
                    found=0;
                    for(i=0;i<=2;i++)
                    {
                        found=H[i].search(an);
                        if(found)
                        {
                            H[i].withdrawl();
                            break;
                        }
                    }   
                        if(!found)
                        {
                            cout<<"Account Number Not Exist...."<<endl;
                        }break;
                    case 5:
                        cout<<"Sayonara...;)"<<endl;
                        break;
                    default:
                        cout<<"Wrong Choice...*_*"<<endl;
                        break;
            }
    }while(ch!=5);
}

