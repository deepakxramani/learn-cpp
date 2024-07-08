#include<iostream>
using namespace std;
class Twonum
{  private:
	int x,y;
   public:
      void getValues(int x,int y)	
      { this->x=x;
      	this->y=y;
	  }
	  void putValues()
	  {
	  	cout<<x<<","<<y<<endl;
	  }
};

int main()
{
  Twonum T;
  T.getValues(10,30);
  T.putValues();	 
}
