#include<iostream>
using namespace std;
class Twonum
{
    private:
        int x,y;
    public:
        void getvalues()
        {
            cout<<"Enter value of x"<<endl;
            cin>>x;
            cout<<"Enter value of y"<<endl;
            cin>>y;
        }
        void showvalues(){
            cout<<x<<","<<y<<endl;
        }
        void add(Twonum,Twonum);
};
void Twonum::add(Twonum A, Twonum B)
{
    x=A.x+B.x;
    y=A.y+B.y;
}
int main()
{
    Twonum T1,T2,T3;
    T1.getvalues();
    T2.getvalues();
    T1.showvalues();
    T2.showvalues();

    T3.add(T1,T2);
    T3.showvalues();     
}