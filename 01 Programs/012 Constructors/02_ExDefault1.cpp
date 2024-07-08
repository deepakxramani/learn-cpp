#include<iostream>
using namespace std;

class PNB
{ private:
	 long balance;
  public:
     void getBalance()
	 { cout<<"Enter Balance:";
	   cin>>balance; 
		  }	 
	void putBalance()
	 { cout<<"Balance:"<<balance<<endl; 
		  }	 	  
    void interestCalculator(int t,int r=6)
    {
    		long amt=balance*t*r/100;
         	cout<<"Amount(@"<<r<<"%):"<<amt<<endl;
  
	}
};



int main()
{ 	 
   PNB GC,SC;
   GC.getBalance();
   GC.putBalance();
   GC.interestCalculator(1);

   SC.getBalance();
   SC.putBalance();
   SC.interestCalculator(1,7);
      
}





