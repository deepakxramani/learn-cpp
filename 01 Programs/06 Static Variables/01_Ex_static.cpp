#include<iostream>
using namespace std;
class Bank
{
    private:
        int accnum;
        string name;
        long balance;
        static long bankbalance;
        static int count;
    public:
        void openaccount()
        {
            cout<<"Enter Account Number"<<endl;
            cin>>accnum;
            cout<<"Enter Name"<<endl;
            cin>>name;
            cout<<"Enter Balance"<<endl;
            cin>>balance;

            bankbalance=bankbalance+balance;
            count++;
        }
        void showbalance()
        {
            cout<<accnum<<","<<name<<","<<balance<<endl;
        }
        static void showbankbalance()
        {
            cout<<"Total Customers: "<<count<<endl;
            cout<<"Total Bank Balance: "<<bankbalance<<endl;
        }

};
long Bank::bankbalance;
int Bank::count;
int main()
{
    Bank C[3];
    int i;
    for(i=0;i<=2;i++)
    {
        C[i].openaccount();
    }
    for(i=0;i<=2;i++)
    {
        C[i].showbalance();
    }
    Bank::showbankbalance();
    return 0;
}