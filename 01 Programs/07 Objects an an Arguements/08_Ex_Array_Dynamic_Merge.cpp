#include<iostream>
using namespace std;
class Array
{
    private:
        int x[50],size;
    public:
        void getarray(int);
        void putarray();
        Array merge(Array);
};
void Array::getarray(int s)
{
    int i;
    size=s;
    for(i=0;i<size;i++)
    {
        cout<<"Enter value of x["<<i<<"]:"<<endl;
        cin>>x[i];  
    }          
}
void Array::putarray()
{
    int i;
    for(i=0;i<size;i++)
    {
        cout<<x[i]<<",";
    }    
    cout<<endl;
}
Array Array::merge(Array A)
{
    Array R;
    int i;
    R.size=size+A.size;
    for(i=0;i<size;i++)
    {
        R.x[i]=x[i];
    }
    for(i=0;i<A.size;i++)
    {
        R.x[size+i]=A.x[i];
    }
    return (R);
}
int main()
{
    Array A1,A2,A3; 
    cout<<"Fisrt Array:"<<endl;
    A1.getarray(5);
    cout<<"Second Array:"<<endl;
    A2.getarray(3);

    A3=A1.merge(A2);
    cout<<"Fisrt Array:"<<endl;
    A1.putarray();
    cout<<"Second Array:"<<endl;
    A2.putarray();
    cout<<"Merging of 1st & 2nd Array:"<<endl;
    A3.putarray(); 
}