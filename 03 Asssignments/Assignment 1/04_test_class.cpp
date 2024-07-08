#include<iostream>
using namespace std;
class TEST
{
    private:
        int TestCode;
        string Description;
        int NoCandidates;
        int CenterReqd;
        int CalCenter()
        {
            int CR=(NoCandidates/100+1);
            return (CR);
        }
    public:
        void schedule()
        {
            cout<<"Enter Test Code: ";
            cin>>TestCode;

            cout<<"Enter Description: ";
            cin>>Description;

            cout<<"Enter Number of Candidates: ";
            cin>>NoCandidates;

            CenterReqd=CalCenter();
        
        }
        void displayTest()
        {
            cout<<"\nTest Code\t\t"<<"Description\t\t"<<"No. Of Candidates"<<endl;
            cout<<TestCode<<"\t\t\t"<<Description<<"\t\t\t"<<NoCandidates;
            cout<<"\nNumber of Centers Required: "<<CenterReqd;
            
        }
};
int main()
{
    TEST T;
    T.schedule();
    T.displayTest();
    return 0;
}