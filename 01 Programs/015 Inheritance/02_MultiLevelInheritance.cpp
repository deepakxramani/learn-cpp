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

class Academic:public Student
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
	 int getTotal()
	 { int t=p+c+m;
	   return(t);
	 }
};




class Result:public Academic
{
	private:
		int total;
	public:
	  void getResult()	
	  { getAcademic(); 
	  	total=getTotal();
	  }
	 void putResult()
	 { putAcademic();
	 cout<<"Total:"<<total<<endl;
	  } 
};

int main()
{  Result S;
  
   S.getResult();
   
  
   S.putResult();
	
	
}
