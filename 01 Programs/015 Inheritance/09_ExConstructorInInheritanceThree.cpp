#include<iostream>
using namespace std;
class Student
{  private:
	 int rollno;
	 string name;
   public:
      Student(int rollno,string name)	 
      { 
	     this->name=name;
	     this->rollno=rollno;
	  
	   }
      void putStudent()
      { cout<<"Roll Number:"<<rollno<<endl;
         cout<<"Name:"<<name<<endl;
	  }
	
};

class Academic:public Student
{  private:
	 int p,c,m;
   public:
      Academic(int rollno,string name,int p,int c,int m):Student(rollno,name)	 
      {  
	     this->p=p;
	     this->c=c;
	     this->m=m;
	        }
      void putAcademic()
      { putStudent(); 
	    cout<<p<<","<<c<<","<<m<<endl;
	   }
	
};

int main()
{  Academic S(100,"Peter Kumar",90,78,89);
  
   S.putAcademic();
	
	
}
