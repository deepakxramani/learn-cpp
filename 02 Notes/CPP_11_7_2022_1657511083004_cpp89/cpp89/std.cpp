/*
1] Bottom to top approach
2] Reusabilty: same data and functions used by each object
3] Reduce Program Size
4] program are divided into objects
5] Objects Contains Data as well as functions known as encapsulation
6] Abstraction-data hiding
7] new data and functions are easily insert when require
*/

#include<iostream>
using namespace std;
class Cbse
{ private:
   int rollno;
   string name;
   float h,e,p,c,m;
  public:
   void getStudent()
   {
     cout<<"Enter Rollno:";
     cin>>rollno;
     cout<<"Enter Name:";
     cin>>name;
   }
   void getMarks()
   { cout<<"Enter Hindi Marks:";
     cin>>h;
     cout<<"Enter English Marks:";
     cin>>e;
     cout<<"Enter Maths Marks:";
     cin>>m;
     cout<<"Enter Physics Marks:";
     cin>>p;
     cout<<"Enter Chemistry Marks:";
     cin>>c;
     }
  void showResult()
  {
   cout<<"Roll Number:"<<rollno<<endl;
   cout<<"Name:"<<name<<endl;
   cout<<"Hindi:"<<h<<endl;
   cout<<"English:"<<e<<endl;
   cout<<"Physics:"<<p<<endl;
   cout<<"Chemistry:"<<c<<endl;
   cout<<"Maths:"<<m<<endl;
   calculate();
  }
  void calculate()
  {
  	 float total=p+c+m+e+h;
  	 float per=total/5;
  	 cout<<"Total:"<<total<<endl;
  	 cout<<"Percentage:"<<per<<endl;
  	 if(per>=60)
	   { cout<<"Pass"<<endl;
		} 
	 else
	 { cout<<"Fail"<<endl;
		 }	
  }
};
int main()
{
	Cbse s1,s2;
	s1.getStudent();
	s2.getStudent();
	
	s1.getMarks();
	s2.getMarks();
	
	s1.showResult();
	s2.showResult();

}


