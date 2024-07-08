#include<iostream>
using namespace std;

class Batsman
{   
    private:
        int bcode;
        string bname;
        int innings,notout,runs;
        float batavg;
        
        float calcAvg()
        {
            float ba=runs/(innings-notout);
            return(ba);
        }
    public:
        void readData()
        {
            cout<<"Enter Batsman's 4-Digit Code: "<<endl;
            cin>>bcode;

            cout<<"Enter Batsman Name: "<<endl;
            cin>>bname;

            cout<<"Enter innings, notouts and runs: "<<endl;
            cin>>innings>>notout>>runs;
        
            batavg=calcAvg();
        }
        void displayData()
        {
            cout<<"\nB.Code\t\t"<<"B.Name\t\t"<<"I.Played\t"<<"Not-outs\t"<<"Runs\t\t"<<"Average"<<endl;
            cout<<bcode<<"\t\t"<<bname<<"\t\t"<<innings<<"\t\t"<<notout<<"\t\t"<<runs<<"\t\t"<<batavg;
        }
};
int main()
{
    Batsman B;
    B.readData();
    B.displayData();
    return 0;
}
