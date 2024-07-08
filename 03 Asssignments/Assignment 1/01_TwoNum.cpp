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
	{ 
        cout<<x<<","<<y<<endl;
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
    int min()
    {
        if(y>x)
	    return x;
	    else
	    return y;
    }
	int Add()
    {
        int c;
        c=x+y;
        return(c);
    }	
	int subtract()
    {
        int s=x-y;
        return(s);
    }
    int Multiply()
    {
        int m;
        m=x*y;
        return(m);
    }
    float division()
    {
        float d=x/y;
        return(d);
    }
    };
	
int main()
{  TwoNum T;
    T.getValue();
    
    cout<<"Addition:"<<endl;
    int a=T.Add();
    cout<<a<<endl;
    
    cout<<"Subtraction:"<<endl;
    int s=T.subtract();
    cout<<s<<endl;
    
    cout<<"Multiplication:"<<endl;
    int M=T.Multiply();
    cout<<M<<endl;
    
    cout<<"Division:"<<endl;
    float d=T.division();
    cout<<d<<endl;
    
    cout<<"Swap:"<<endl;
    T.swap();
    T.putValue();
    
    cout<<"Max:"<<endl;
    int k=T.max();
    cout<<k<<endl;
    
    cout<<"Min:"<<endl;
    int m=T.min();
    cout<<m<<endl;
    
    return 0;
}		
		
