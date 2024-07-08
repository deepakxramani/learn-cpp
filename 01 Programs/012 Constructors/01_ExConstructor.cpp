#include<iostream>
using namespace std;
class Num
{ private:
	 int n;
  public:
  	 Num(){
  	 	n=100;
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
   Num N;//jump to default constructor
   N.putValue();
   N.getValue();
   N.putValue();
}





