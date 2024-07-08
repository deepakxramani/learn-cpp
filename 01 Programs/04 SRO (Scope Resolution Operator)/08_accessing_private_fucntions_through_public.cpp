#include<iostream>
using namespace std;

class InterestCalculator
{
    private:
        float p,r,t;
        float calculate()
        {
            float amt=p*r*t/100;
            return(amt);
        }
    public:
        void getValues(){
            cout<<"Enter P,R,T:"<<endl;
            cin>>p>>r>>t;
        }
        void putValues()
        {
            cout<<"Amount: "<<p<<" Rate: "<<r<<" Time: "<<t<<endl;
            float intamt=calculate();
            cout<<"Interest Amount: "<<intamt<<endl;
        }
};

int main(){
    InterestCalculator I;
    I.getValues();
    I.putValues();
    return 0;
}