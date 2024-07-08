//overload + two add to two time as friend function

#include<iostream>
using namespace std;
class Time
{ private:
	int h,m,s;
  public:
     void getTime()
	 { cout<<"Enter Hours Minutes & Seconds:";
	   cin>>h>>m>>s;
	  	 }	
     void putTime()
	 { cout<<h<<":"<<m<<":"<<s<<endl;
		  } 	
	 friend Time operator + (Time,Time);
};

Time operator + (Time A,Time B)
{  	Time R;
   R.h=A.h+B.h;
   R.m=A.m+B.m;
   R.s=A.s+B.s;
   
   R.m+=R.s/60;
   R.s%=60;
   R.h+=R.m/60;
   R.m%=60;
   int d=R.h/24;
   cout<<"Days:"<<d<<endl;
   R.h%=24;
   
   
   
   return(R);
}

int main()
{ Time T1,T2,T3;
  T1.getTime();
  T2.getTime();
  
  T1.putTime();
  T2.putTime();
 	
  T3=T1+T2;	
  //T1  and T2  move as parameter
  T3.putTime();	
}
