
#include<iostream>
using namespace std;
class TwoNum
{ private:
	int x,y;
  public:
    void getValue()
	{ cout<<"Enter Two Numbers:";
	  cin>>x>>y;
		}	
	void putValue()
	{ cout<<x<<","<<y<<endl;
		}	
		
	void swap()
	{ int t=x;
	   x=y;
	   y=t;
		 
	}
		
	int max()	
	{ /*if(x>y)
	   return x;
	  else
	  return y;*/
	  return x>y?x:y;
	  
    }
		
	};
	
int main()
{  TwoNum T;
    T.getValue();
    T.putValue();
    T.swap();
    T.putValue();
    int k=T.max();
    cout<<k<<endl;
    
    
	
		}		
		
