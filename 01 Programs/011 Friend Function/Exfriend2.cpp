#include<iostream>
using namespace std;

class Bank
{ private:
	 long bankbalance;
  public:
     void getBalance()
	 { cout<<"Enter Bank Balance:";
	   cin>>bankbalance; 
		  }	 
	void putBalance()
	 { cout<<"Bank Balance:"<<bankbalance<<endl; 
		  }	 	  
    friend void CA(Bank,int t,int r);	
};
void CA(Bank B,int t,int r)
{
	long amt=B.bankbalance*t*r/100;
	cout<<"Amount:"<<amt<<endl;
}

int main()
{ 	Bank SBI,PNB;
    SBI.getBalance();
    
    PNB.getBalance();
    
	SBI.putBalance();
	CA(SBI,1,3);
	PNB.putBalance();
    CA(PNB,1,5);
    

}





