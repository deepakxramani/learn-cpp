#include<iostream>
using namespace std;
class SBIndore;
class SBIndia
{ private:
	 long bankbalance;
  public:
     void getBalance()
	 { cout<<"Enter Bank Balance India:";
	   cin>>bankbalance; 
		  }	 
	void putBalance()
	 { cout<<"Bank Balance India:"<<bankbalance<<endl; 
		  }	 	  
    friend void RBI(SBIndia&,SBIndore&);	
};

class SBIndore
{ private:
	 long bankbalance;
  public:
     void getBalance()
	 { cout<<"Enter Bank Balance Indore:";
	   cin>>bankbalance; 
		  }	 
	void putBalance()
	 { cout<<"Bank Balance Indore:"<<bankbalance<<endl; 
		  }	 	  
    friend void RBI(SBIndia&,SBIndore&);	
};
void RBI(SBIndia &ind,SBIndore &indr)
{
	ind.bankbalance=ind.bankbalance+indr.bankbalance;
	indr.bankbalance=0;
}
int main()
{ SBIndia ind;
  SBIndore indr;
  
  ind.getBalance();
  ind.putBalance();
  
  indr.getBalance();
  indr.putBalance();
  
  RBI(ind,indr);
  ind.putBalance();
  indr.putBalance();
	
}





