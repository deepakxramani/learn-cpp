#include<iostream>
using namespace std;
class Array
{ private:
	 int *x,size;
  public:
    void getArray(int);
	void putArray();
    void destroy(){
    	cout<<"Destroy "<<size<<" block"<<endl;
    	delete x;
	} 	
Array operator +(Array);	
};

Array Array::operator + (Array T)
{ Array R;
  R.size=size+T.size;
  R.x=new int[R.size];
  for(int i=0;i<R.size;i++)
  { if(i<size)
  { R.x[i]=x[i];
  }
  else
  {R.x[i]=T.x[i-size];
  }
  }
	return R;
}
void Array::getArray(int s)
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
{  Array A1,A2;
   cout<<"First Array:"<<endl;
   A1.getArray(5);
   cout<<"Second Array:"<<endl;
   A2.getArray(3);
   
   A1.putArray();
   A2.putArray();
   Array A3;
   A3=A1+A2;
   A3.putArray();
   A1.destroy();
   A2.destroy();
   A3.destroy();
}