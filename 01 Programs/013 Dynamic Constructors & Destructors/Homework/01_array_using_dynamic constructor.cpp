#include<iostream>
using namespace std;
class Array
{ private:
	 int *x,size;
  public:
    Array(){}
	Array(int);
	void putArray();
  ~Array() {
    	cout<<"Destroy "<<size<<" block"<<endl;
    	delete x;
	} 	

};

 Array::Array(int s)
{ int i;
  size=s;
  x=new int[size];
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



int main()
{  Array A1(5),A2(3);

   cout<<"First Array:"<<endl;
   A1.putArray();
   cout<<"Second Array:"<<endl;
   A2.putArray();
}


