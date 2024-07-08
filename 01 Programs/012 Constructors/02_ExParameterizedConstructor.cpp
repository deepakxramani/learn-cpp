#include<iostream>
using namespace std;
class Num
{ private:
	 int n;
  public:
  	 Num()
  	 { cout<<"Default COnstructor"<<endl;
	   }
  	 Num(int n){
  	 	this->n=n;
	   }
     void getValue()
	 { cout<<"Enter Number:";
	   cin>>n; 
		  }	 
	void putValue()
	 { cout<<n<<endl;
		  }	 	  
 };



int main()
{ 	 
   Num N;
   N.putValue();
   N.getValue();
   N.putValue();
   Num M(1000);
   M.putValue();
}





