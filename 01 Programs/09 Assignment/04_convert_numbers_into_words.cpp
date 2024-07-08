
#include<iostream>
using namespace std;
int main()
{

  int n,t;
   string values[]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
   string tens[]={"","","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
   cout<<"Enter Number:";
   cin>>n;
   if(n>=1000 && n<=9999)
   { t=n/1000;
     cout<<values[t]<<" "<<"thousand ";
     n=n%1000;
   	
   }
 
 
   if(n>=100 && n<=999)
   { t=n/100;
     cout<<values[t]<<" "<<"hundred ";
     n=n%100;
   	
   }
   if(n>=20 && n<=99)
   {t=n/10;
    cout<<tens[t]<<" ";
    n=n%10;
   	
   }
        
   if(n>0 && n<=19)
   {
   	cout<<values[n]<<" ";
   }
   
}