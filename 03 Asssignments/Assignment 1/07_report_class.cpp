#include<iostream>
using namespace std;

class REPORT
{
    private:
        int admNum;
        string name;
        float marks[5];
        float avg;
        float getAvg(float n)
        {   
            avg = n/5;
            return (avg);
        }
    public:
        void readInfo();
        void showMarks();
        void displayInfo();
};
    void REPORT::readInfo()
    {   int i;
        cout<<"Enter Admission Number:"<<endl;
        cin>>admNum;

        cout<<"Enter Name:"<<endl;
        cin>>name;

        for(i=1;i<=5;i++)
        {   
          
            cout<<"Enter Subject "<<i<<" Marks"<<endl; 
            cin>>marks[i];
        }        
    }       
    void REPORT::displayInfo()
    {   int i;
        cout<<"\n\nA.Number\t\t"<<"Name"<<endl;
        cout<<admNum<<"\t\t\t"<<name<<endl;
    }
    void REPORT::showMarks()
    {   int i;
        float s=0;
        cout<<"Marks Obatined in Five Subjects: ";
        
        for(i=1;i<=5;i++)
        {
            cout<<marks[i]<<",";
        }
        cout<<"\nTotal Marks: ";
        for(i=1;i<=5;i++)
        {
            s=s+marks[i];
        }
        cout<<s<<endl;
        cout<<"Average Marks: ";
        cout<<getAvg(s);
    }
int main()
{   
    REPORT R;
    R.readInfo();
    R.displayInfo();
    R.showMarks();
    return 0;
}