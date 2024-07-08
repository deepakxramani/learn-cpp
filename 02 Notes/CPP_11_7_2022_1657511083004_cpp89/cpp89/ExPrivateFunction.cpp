#include<iostream>
using namespace std;
class InterestCalculator
{ private:
	float p,r,t,intamt;
  float calculate()	
  { float amt=p*r*t/100;
     return(amt);
  }
  public:
  	void getValues()
  	{  cout<<"Enter P,R,T:";
  	   cin>>p>>r>>t;
  	   intamt=calculate();
 	  }
 	void putValues()  
 	{ cout<<"Amount:"<<p<<" Rate:"<<r<<" Time:"<<t<<endl;
 	  
 	  cout<<"Interest Amount:"<<intamt<<endl;
 	 }

};

int main()
{
   InterestCalculator I,J;
   I.getValues();
   
   I.putValues();	
   
   J.getValues();
   
   J.putValues();	

}

