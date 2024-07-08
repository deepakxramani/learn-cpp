//overload + two add to two time as member function

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
	 Time operator + (Time);
};

Time Time::operator + (Time A)
{  	Time R;
   R.h=h+A.h;
   R.m=m+A.m;
   R.s=s+A.s;
   
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
  //T1 call + t2 move as parameter
  T3.putTime();	
}
