#include<iostream>
using namespace std;

class Flight
{
    private:
        int flightNum;
        string destination;
        float distance;
        float fuel;
        void calFuel()
        {
            if(distance<=1000)
            {
                float fuel=500;
                cout<<fuel;
            }
            else if(distance>=1000 && distance<=2000)
            {
                float fuel=1100;
                cout<<fuel;
            }
            else if(distance>2000)
            {
                float fuel=2200;
                cout<<fuel;
            }
            else
            {
                cout<<"Invalid value...";
            }
        }
    public:
        void feedInfo()
        {
            
            cout<<"Enter Flight Number: "<<endl;
            cin>>flightNum;

            cout<<"Enter Destination: "<<endl;
            cin>>destination;

            cout <<"Enter Distance: "<<endl;
            cin>>distance;
        
            
        }
        void showInfo()
        {
            cout<<"\nF.Number\t\t"<<"Destination\t\t"<<"Distance"<<endl;
            cout<<flightNum<<"\t\t\t"<<destination<<"\t\t\t"<<distance<<endl;
            cout<<"Fuel Required: ";
            calFuel();
        }

};
int main()
{
    Flight F;
    F.feedInfo();
    F.showInfo();
    return 0;
}