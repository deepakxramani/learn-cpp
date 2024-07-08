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
      {  cout<<"Roll Number:"<<rollno<<endl;
         cout<<"Name:"<<name<<endl;
	   }
	
};

class Academic:public Student
{  private:
	 int p,c,m;
   public:
      void getAcademic()	 
      {  
	  cout<<"Enter P,C & M Marks:";
        cin>>p>>c>>m;
              }
      void putAcademic()
      {  
	    cout<<p<<","<<c<<","<<m<<endl;
	   }

/* Example for priavtely accessing the base class members in derive class!	

   class Academic:private Student
{  private:
	 int p,c,m;
   public:
      void getAcademic()	 
      {  getStudent();
	  cout<<"Enter P,C & M Marks:";
        cin>>p>>c>>m;
              }
      void putAcademic()
      { putStudent(); 
	    cout<<p<<","<<c<<","<<m<<endl;
	   }
   int main()
{  Academic S;
   
   S.getAcademic();
   S.putAcademic();   
   	
}
*/
};

int main()
{  Academic S;
   S.getStudent();
   S.getAcademic();
   
   S.putStudent();   
   S.putAcademic();
	
	
}
