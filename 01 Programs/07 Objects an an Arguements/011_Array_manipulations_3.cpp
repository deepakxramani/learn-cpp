#include<iostream>
using namespace std;
class Array
{
    private:
        int oldArray[50],size;
        int newArray[50],size2;
    public:
        void getarray(int);
        void putarray();
        Array copy();
        Array reverse(int);
        Array even();


};
void Array::getarray(int s)
{
    int i;
    size=s;
    for(i=0;i<size;i++)
    {
        cout<<"Enter value of x["<<i<<"]: ";
        cin>>oldArray[i];  
    }          
}
void Array::putarray()
{
    int i;
    for(i=0;i<size;i++)
    {
        cout<<oldArray[i]<<",";
    }    
    cout<<endl;
}
Array Array::copy()
{   
    for(int i=0;i<size;i++)
    {
        newArray[i]=oldArray[i];       
        cout<<newArray[i]<<",";
    }
}
Array Array::reverse(int n)
{   size2=n;
    for(int i=size2;i>=0;i--)
    {
        newArray[i]=oldArray[i];       
        cout<<newArray[i]<<",";
    }
}
Array Array::even()
{   
    int i;
    for(i=0;i<size;i++)
    {
        if(oldArray[i]%2==0)
        {
            newArray[i]=oldArray[i];       
            cout<<newArray[i]<<","; 
        }
    }
 
}
int main()
{
    Array A,K;
    
    A.getarray(10);
    cout<<"\nCopy Array: ";
    K=A.copy();
    cout<<endl;
    cout<<"Reverse Array: ";
    K=A.reverse(9);
    cout<<endl;
    cout<<"Array of Even Numbers: ";
    K=A.even();
}