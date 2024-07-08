#include<iostream>
using namespace std;
class Student
{
    private:
        int admNum;
        string stuName;
        float eng, maths, science;
        float total;
        float ctotal()
        {
            float t=eng+maths+science;
            return(t);
        }
    public:
        void takedata()
        {
            cout<<"Enter Admission Number: ";
            cin>>admNum;

            cout<<"Enter Student Name: ";
            cin>>stuName;

            cout<<"Enter English Marks: ";
            cin>>eng;

            cout<<"Enter Maths Marks: ";
            cin>>maths;

            cout<<"Enter Science Marks: ";
            cin>>science;   

            total=ctotal();
        }
        void Showdata()
        {   
            cout<<"\n\t\t\t\t\t**Student Details**"<<endl;
            cout<<"Ad No.\t\t"<<"Student Name\t\t"<<"English Marks\t"<<"Maths Marks\t"<<"Science Marks\t"<<"Total Marks"<<endl;
            cout<<admNum<<"\t\t"<<stuName<<"\t\t\t"<<eng<<"\t\t"<<maths<<"\t\t"<<science<<"\t\t"<<total<<endl;
        }
};

int main()
{   Student S;
    S.takedata();
    S.Showdata(); 
    return 0;
}