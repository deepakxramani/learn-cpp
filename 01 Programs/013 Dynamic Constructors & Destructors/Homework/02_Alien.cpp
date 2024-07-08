#include<iostream>
using namespace std;
class Alien
{
	 private:
	 string name;
	 int points;
	 static int ts;
	 public:
	 
	 Alien()
	 {
	 	cout<<"Enter Alien Name:";
	 	cin>>name;
	 	cout<<"Enter Alien Points:";
	 	cin>>points;
	 	cout<<"Alien Created:"<<name<<" with points "<<points<<endl;	
	 	 			 

	 }
	 void ShootAlien()
	 {
	    cout<<name<<" Alien is killed and you got "<<points<<" points."<<endl;
   		ts=ts+points;

	 }
	 ~Alien()
	 {	
	 	 
	 	 cout<<"You got "<<points<<" points from "<<name<<" Alien "<<endl;
		 
	 }
	 void total()
	 {	cout<<"Your total score is: "<<ts<<endl;
		
	 }
	 
	 
	 
};

int Alien ::ts;

int main()
{
	Alien A1;
	A1.ShootAlien();
    Alien A2;
	A2.ShootAlien();
    Alien A4;
    A4.ShootAlien();
	
	A4.total();
	
	return 0;
}
