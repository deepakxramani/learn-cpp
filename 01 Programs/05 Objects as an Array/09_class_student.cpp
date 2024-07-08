#include<iostream>
using namespace std;

class Student
{
    private:
        int rollno;
        string sname;
        string fname;
        string gender;
        string schoolname;
        float marks[5],total,percentage;
        int i; 
        string subject[5];
    public:
        void getstudent()
        {
            cout<<"Enter Name of Student"<<endl;
            cin>>sname;
            cout<<"Enter Father's Name"<<endl;
            cin>>fname;
            cout<<"Enter Roll Number"<<endl;
            cin>>rollno;
            cout<<"Enter Gender"<<endl;
            cin>>gender;
            cout<<"Enter School Name"<<endl;
            cin>>schoolname;
            cout<<"Enter Subject and Marks"<<endl;
            cin>>subject[0]>>marks[0];
            cout<<"Enter Subject and Marks"<<endl;
            cin>>subject[1]>>marks[1];
            cout<<"Enter Subject and Marks"<<endl;
            cin>>subject[2]>>marks[2];
            cout<<"Enter Subject and Marks"<<endl;
            cin>>subject[3]>>marks[3];
            cout<<"Enter Subject and Marks"<<endl;
            cin>>subject[4]>>marks[4];
            
        }
        void putstudent()
        {   
            int division,min=35,max=100;
            float percentage;
            cout<<"\n\t\t"<<"Central Board of Secondary Education"<<"\t\t\t"<<endl;
            cout<<"\t\t\t\t"<<"New Delhi"<<"\t\t\t"<<endl;
            cout<<"--------------------------------------------------------------------------"<<endl;
            cout<<schoolname<<endl;
            cout<<"Roll No: "<<rollno<<"\t\t\t\t\t"<<"Gender: "<<gender<<endl;
            if(gender=="Male")
            {
                cout<<"Name: "<<"Mr. "<<sname<<" s/o "<<fname<<endl;
            }
            if(gender=="Female")
            {
                cout<<"Name: "<<"Mis. "<<sname<<" d/o "<<fname<<endl;
            }
            cout<<"--------------------------------------------------------------------------"<<endl;
            cout<<"Code\t\t"<<"Subject\t\t"<<"Min\t"<<"Max\t\t"<<"Marks Obtained"<<endl;
            cout<<"--------------------------------------------------------------------------"<<endl;
            for(i=0;i<=4;i++)
            {
                cout<<i<<"\t\t"<<subject[i]<<"\t\t"<<min<<"\t"<<max<<"\t\t"<<marks[i]<<endl;
            }
            
            cout<<"--------------------------------------------------------------------------"<<endl;
            for(i=0;i<=4;i++)
            {
                total=total+marks[i];
            }
            percentage=(total*100)/500;
            if(percentage>=45 && percentage<=54)
            {
                division=3;
            }
            if(percentage>=55 && percentage<=59)
            {
                division=2;
            }
            if(percentage>=60 && percentage<=100)
            {
                division=1;
            }
            cout<<"Total: "<<total<<"\t\t"<<"Per: "<<percentage<<"\t\t"<<"Division: "<<division<<endl;
        }
            
};
int main()
{
    Student S[2];
    int i;
    for(i=0;i<=1;i++)
    {
        S[i].getstudent();
    }
    for(i=0;i<=1;i++)
    {
        S[i].putstudent();
    }
  return 0;
}