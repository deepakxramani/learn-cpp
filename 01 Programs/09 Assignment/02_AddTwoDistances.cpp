/*  C++ Program to Add Two Distance Objects using call by reference  */

#include<iostream>
using namespace std;

class Distance
{       private:
        int cm;
	    int meter;
        int km;
        
        public:

                void getDistance()
                {
                    cout<<"\nEnter Kilometer :: ";
                    cin>>km;
                    cout<<"\nEnter Meter :: ";
                    cin>>meter;
                    cout<<"\nEnter Centimeter :: ";
                    cin>>cm;
                    
                }
                void putDistance()
                {
                        cout << endl;
	                    cout<<km<<" kilometers "<<meter<<" meters "<<cm<<" cm "<<endl;
                }
                void add(Distance D1,Distance D2);
};

void Distance::add(Distance D1, Distance D2)
{       
        this->cm=D1.cm+D2.cm;
        this->meter=D1.meter+D2.meter + (this->cm/100);
        this->km= D1.km+D2.km + (this->meter/1000);
        
        this->cm%=100;
        this->meter%=1000;
              
}

int main()
{
        Distance D1,D2,D3;
        cout<<"\nEnter 1st Distance Details :: \n";
        D1.getDistance();
        cout<<"\nEnter 2nd Distance Details :: \n";
        D2.getDistance();
        cout<<"\nThe 1st Distance entered is :: ";
        D1.putDistance();
        cout<<"\nThe 2nd Distance entered is :: ";
        D2.putDistance();

        D3.add(D1,D2);

        cout<<"\nThe Sum of two distances are :: ";

        D3.putDistance();

        return 0;
}