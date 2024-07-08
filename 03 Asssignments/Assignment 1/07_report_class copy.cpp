#include<iostream>
using namespace std;
class REPORT
{
    private:
        int admNum;
        string name;
        float marks[5];
        float avg;
        float getAvg()
        {   
            float avg = (marks[5])/5;
            return (avg);
        }
    public:
       void readInfo()
        {
            cout<<"Enter Admission Number:"<<endl;
            cin>>admNum;

            cout<<"Enter Name:"<<endl;
            cin>>name;

            int i;
            for(i=0;i<=4;i++)
            {
                cout<<"Enter Marks:"<<endl;
                cin>>marks[i];
            }  
        }
        void subject()
        {
            cout<<"Enter Hindi Marks: ";
            cin>>hin;
        }
        void displayInfo()
        {   int i;
            cout<<"\n\nA.Number\t\t"<<"Name"<<endl;
            cout<<admNum<<"\t\t\t"<<name<<endl;
            cout<<"Marks Obtained:"<<endl;
            for(i=0;i<=4;i++)
            {
                cout<<marks[i]<<endl;
            } 
            cout<<"Average Marks Obtained in five Subjects: ";
            getAvg();
        }

};
int main()
{   
    REPORT R;
    R.readInfo();
    R.displayInfo();
    return 0;
}