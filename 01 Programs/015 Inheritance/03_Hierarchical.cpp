/*
          Student
          
      BA			Bsc    
      
	      

*/

#include<iostream>
using namespace std;
class Student
{  private:
	 int rollno;
	 string name;
   public:
      void getStudent()	 
      { cout<<"Enter Roll Number:";
        cin>>rollno;
        cout<<"Enter Name:";
        cin>>name;
      }
      void putStudent()
      { cout<<"Roll Number:"<<rollno<<endl;
         cout<<"Name:"<<name<<endl;
	  }
	
};

class Bsc:public Student
{  private:
	 int p,c,m;
   public:
      void getBsc()	 
      {  getStudent();
	  cout<<"Enter P,C & M Marks:";
        cin>>p>>c>>m;
              }
      void putBsc()
      { putStudent(); 
	    cout<<p<<","<<c<<","<<m<<endl;
	   }
	
};


class Ba:public Student
{  private:
	 int his,eco,geo;
   public:
      void getBa()	 
      {  getStudent();
	  cout<<"Enter History,Economics & Geography Marks:";
        cin>>his>>eco>>geo;
              }
      void putBa()
      { putStudent(); 
	    cout<<his<<","<<eco<<","<<geo<<endl;
	   }
	
};



int main()
{  Bsc S1;
   Ba S2;
  
   S1.getBsc();
   S2.getBa();
  
   S1.putBsc();
   S2.putBa();
	
	
}
