#include<iostream>
using namespace std;
class Points
{
    private:
        int x,y,z;
    public:
        void getpoints()
        {
            cout<<"Enter x Points"<<endl;
            cin>>x;
            
            cout<<"Enter y Points"<<endl;
            cin>>y;
            
            cout<<"Enter z Points"<<endl;
            cin>>z;
        }
        void putpoints()
        {
            cout<<x<<","<<y<<","<<z<<endl;
        }
        Points calculatePoints(Points);
        
};
Points Points::calculatePoints(Points A)
{
    Points P;
    if(x==A.x && y==A.y && z==A.z)
    {
        P.x=x-A.x;
        P.y=y-A.y;
        P.z=z-A.z;
        return(P);
    }
    if(x>A.x && y>A.y && z>A.z)
    {
        P.x=x*A.x;
        P.y=y*A.y;
        P.z=z*A.z;
        return(P);
    }
    else
    {
        P.x=x+A.x;
        P.y=y+A.y;
        P.z=z+A.z;
        return(P);
    }
    
}
int main()
{   
    Points P1,P2,P3;
    P1.getpoints();
    P2.getpoints();
    
    P3=P1.calculatePoints(P2);
    P3.putpoints();

}