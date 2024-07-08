/*  C++ Program to Add Two Time Objects using call by reference  */

#include<iostream>
using namespace std;

class Time
{       private:
        int days;
	int hours;
        int minutes;
        int seconds;
        public:

                void getTime()
                {
                    cout<<"\nEnter Days :: ";
                    cin>>days;
                    cout<<"\nEnter Hours :: ";
                    cin>>hours;
                    cout<<"\nEnter Minutes :: ";
                    cin>>minutes;
                    cout<<"\nEnter Seconds :: ";
                    cin>>seconds;
                }
                void putTime()
                {
                        cout << endl;
	                cout<<"Total Time is: "<<days<<" day "<<hours<<" hours "<<minutes<<" minutes "<<seconds<<" seconds "<<endl;
                }
                void add(Time T1,Time T2);
};

void Time::add(Time T1, Time T2)
{       
        this->seconds=T1.seconds+T2.seconds;
        this->minutes=T1.minutes+T2.minutes + (this->seconds/60);
        this->hours= T1.hours+T2.hours + (this->minutes/60);
        this->days= T1.days+T2.days + (this->hours/24);
        this->minutes%=60;
        this->seconds%=60;
        this->hours%=24;      
}

int main()
{
        Time T1,T2,T3;
        cout<<"\nEnter 1st time Details :: \n";
        T1.getTime();
        cout<<"\nEnter 2nd time Details :: \n";
        T2.getTime();
        cout<<"\nThe 1st time entered is :: ";
        T1.putTime();
        cout<<"\nThe 2nd time entered is :: ";
        T2.putTime();

        T3.add(T1,T2);

        cout<<"\nThe Sum of two times are :: ";

        T3.putTime();

        return 0;
}