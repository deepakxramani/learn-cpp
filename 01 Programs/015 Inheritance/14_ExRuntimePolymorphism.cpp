/*
          Student
          
      BA			Bsc    
      
	      

*/

#include<iostream>
using namespace std;
class Student
{  protected:
	 int rollno;
	 string name;
   public:
     virtual void get()	 
      {  }
    virtual void put()
      {   }
	
};

class Bsc:public Student
{  private:
	 int p,c,m;
   public:
      void get()	 
      { cout<<"Enter Roll Number:";
        cin>>rollno;
        cout<<"Enter Name:";
        cin>>name;
     
	  cout<<"Enter P,C & M Marks:";
        cin>>p>>c>>m;
              }
      void put()
      { cout<<"Roll Number:"<<rollno<<endl;
         cout<<"Name:"<<name<<endl;
	
	    cout<<p<<","<<c<<","<<m<<endl;
	   }
	
};


class Ba:public Student
{  private:
	 int his,eco,geo;
   public:
      void get()	 
      { cout<<"Enter Roll Number:";
        cin>>rollno;
        cout<<"Enter Name:";
        cin>>name;
     
	  cout<<"Enter History,Economics & Geography Marks:";
        cin>>his>>eco>>geo;
              }
      void put()
      { cout<<"Roll Number:"<<rollno<<endl;
         cout<<"Name:"<<name<<endl;
	
	    cout<<his<<","<<eco<<","<<geo<<endl;
	   }
	
};



int main()
{  
   Student *S;
   Bsc S1;
   Ba S2;
   S=&S1;
   S->get();
   S->put();
   
   S=&S2;
   S->get();
   S->put();
   	
	
}
