#include<iostream>
using namespace std;
class BankApp
{ 
  private:
  	int accountno;
  	string name;
  	long balance;
 public:
    void openAccount()
	{ cout<<"Enter Account Number:";
	  cin>>accountno;
	  cout<<"Enter Name:";
	  cin>>name;
	  cout<<"Enter Balance:";
	  cin>>balance;
	 } 
	void showAccount()
	{ cout<<accountno<<"\t\t"<<name<<"\t\t"<<balance<<endl;
		 } 	
	 
	void deposit()
	 { long amount;
	   cout<<"Enter Amount U want to deposit:";
	   cin>>amount;
	   if(amount>0)
	   { balance=balance+amount;
	   }
	   else
	   { cout<<"Invalid Amount Value";
	   }
	 } 
	 
	void withdrawal() 
	{ long amount;
	    cout<<"Enter Amount U want to Withdrawal:";
	   cin>>amount;
	   if(balance>=amount)
	   { balance=balance-amount;
	   }
	   else
	   { cout<<"Less Balance....";
	   }
	  
	}
	
   int search(int);
};

int BankApp::search(int an)
{
	 if(accountno==an)
	 { showAccount();
	   return(1);
	 }
	 return(0);
}

int main()
{  BankApp C[3];
   int i,ch,an,found;
   for(i=0;i<=2;i++)
   { C[i].openAccount();
   }

   do{

   cout<<"Main Menu\n1] Show All Accounts\n2] Display By Id\n3] Deposit\n4] Withdrawal\n5] Exit"<<endl;
   cout<<"Enter Ur Choice:";
   cin>>ch;
   switch(ch)   
   {
   	case 1:
   		 for(i=0;i<=2;i++)
   	     { C[i].showAccount();
			}
		break;
	case 2:
	   cout<<"Enter Account Number U Want to Search?";
	   cin>>an;
	   found=0;
	   for(i=0;i<=2;i++)
	   { found=C[i].search(an);
	      if(found)
	      {break;}
	   }
	   
	   if(!found)
	   { cout<<"Account Number Not Exist...."<<endl;
	   }
	   break;
	case 3:
	   cout<<"Enter Account Number U Want to Search For Deposit?";
	   cin>>an;
	   found=0;
	   for(i=0;i<=2;i++)
	   { found=C[i].search(an);
	      if(found)
	      {
		  C[i].deposit();
		  break;}
	   }
	   
	   if(!found)
	   { cout<<"Account Number Not Exist...."<<endl;
	   }	
	   break;
	case 4:
	   cout<<"Enter Account Number U Want to Search For Withdrawal?";
	   cin>>an;
	   found=0;
	   for(i=0;i<=2;i++)
	   { found=C[i].search(an);
	      if(found)
	      {
		  C[i].withdrawal();
		  break;}
	   }
	   
	   if(!found)
	   { cout<<"Account Number Not Exist...."<<endl;
	   }		   
	   break;
	case 5:
	  cout<<"Good Bye..."<<endl;
	  break;
	default:
	   cout<<"Wrong Option..."<<endl;     
	   
	   	
   }
   
}while(ch!=5);
   
   
   
	
}




