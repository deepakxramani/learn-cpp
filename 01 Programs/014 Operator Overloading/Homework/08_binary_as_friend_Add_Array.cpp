#include<iostream>
using namespace std;
class Array
{ private:
	 int x[50],size;
  public:
    void getArray(int);
	void putArray();
	friend Array operator+(Array&,Array&);
	
};
void Array::getArray(int s)
{ int i;
  size=s;
  for(i=0;i<size;i++)
  { cout<<"Enter Number x["<<i<<"]:";
    cin>>x[i];
  }
}

void Array::putArray()
{
 int i;
 for(i=0;i<size;i++) 	
 {
 	cout<<x[i]<<",";
 }
 cout<<endl;
}



Array operator+(Array &T1, Array &T2)
{ Array R;
   R.size=T1.size;
 
   for(int i=0;i<R.size;i++)
   { R.x[i]=T1.x[i]+T2.x[i];
   }
    return(R);	
}
int main()
{  Array A1,A2,A3;
   cout<<"First Array:"<<endl;
   A1.getArray(5);
   cout<<"Second Array:"<<endl;
   A2.getArray(5);
   
   A3=A1+A2;
   A1.putArray();
   A2.putArray();
   A3.putArray();
}
