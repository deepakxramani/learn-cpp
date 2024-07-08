
#include<iostream>
using namespace std;
class Bank
{ private:
   int accountnumber;
   string name;
   long balance;
  public:
   void openAccount()
   {
     cout<<"Enter Account Number:";
     cin>>accountnumber;
     cout<<"Enter Name:";
     cin>>name;
     cout<<"Enter Balance:";
     cin>>balance;
   }
   
  void showAccount()
  {
   cout<<"Account Number:"<<accountnumber<<endl;
   cout<<"Name:"<<name<<endl;
   cout<<"Balance:"<<balance<<endl;
  }
  void deposit()
  { long amt;
    cout<<"Enter Amount U want to Deposit:";
    cin>>amt;
    if(amt>0)
	balance+=amt;
	else
	cout<<"Invalid Amount Value"<<endl;
  	   }
  	   
  void withdrawal()
  { long amt;
    cout<<"Enter Amount U want to Withdraw:";
    cin>>amt;
    if(amt>0)
    { if(balance>=amt)
	   balance-=amt;
	  else
	   cout<<"Less Balance...."<<endl; 
	   }
	else
	cout<<"Invalid Amount Value"<<endl;
  	   }
  	   
  	   
  	   
};
int main()
{
     Bank C;
	 C.openAccount();
	 C.showAccount();
	 C.deposit();
	 C.showAccount();
	 C.withdrawal();
	 C.showAccount();
	 
}


