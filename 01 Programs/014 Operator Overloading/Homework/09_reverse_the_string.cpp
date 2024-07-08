#include<iostream>
using namespace std;
class String
{ private:
	 char x[30];

  public:
     void getString()	 
     {
     	cout<<"Enter String:";
     	cin.getline(x,30);
	 }
	 void putString()
	 { cout<<x<<endl;
	 }
  String reverse();	 
  
};
String String::reverse()
{ int i,j=0;
  String R;
  for(i=0;x[i];i++);
  for(i=i-1;i>=0;i--)
  { R.x[j++]=x[i];
  }
  
   R.x[j]=0;	  
   return(R);
}
int main()
{ String S,K;
  S.getString();
  S.putString();
  K=S.reverse();
  
  K.putString();
}