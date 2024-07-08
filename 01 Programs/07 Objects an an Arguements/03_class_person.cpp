#include<iostream>
using namespace std;

class Person
{
    private:
        int personid;
        string personName;
        int personAge;
    public:
        void getperson()
        {
            cout<<"Enter Person ID"<<endl;
            cin>>personid;
            cout<<"Enter Person Name"<<endl;
            cin>>personName;
            cout<<"Enter Person Age"<<endl;
            cin>>personAge;
        }
        void putperson()
        {
            
            cout<<personName<<" Age is Equal to "<<personName<<endl;
        }
        Person compareAge(Person);

};
Person Person::compareAge(Person A)
{
    
    if(personAge=personAge==A.personAge)
    {
        cout<<personName<<" Age is Equal to "<<A.personName<<" Age"<<endl;
    }
    else
    {
        cout<<personName<<" Age is Not Equal to "<<A.personName<<" Age"<<endl;
    }
    
}
int main()
{
    Person P1,P2,P3;
    P1.getperson();
    P2.getperson();

    P3=P1.compareAge(P2);

    
    return 0;
}