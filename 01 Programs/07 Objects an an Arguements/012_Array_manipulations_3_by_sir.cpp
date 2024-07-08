#include<iostream>
using namespace std;
class Array
{
    private:
        int x[50],size;
        
    public:
        void getarray(int);
        void putarray();
        Array copy();
        Array reverse();
        Array Even();


};
void Array::getarray(int s)
{
    int i;
    size=s;
    for(i=0;i<size;i++)
    {
        cout<<"Enter value of x["<<i<<"]: ";
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
Array Array::copy()
{   
    Array R;
    R.size=0;
    int j=0;
    for(int i=0;i<size;i++)
    {
        R.x[j++]=x[i];
    }
    R.size=j;
    return(R);
}
Array Array::reverse()
{   
    Array R;
    R.size=0;
    int j=0;
    for(int i=size-1;i>=0;i--)
    {
        R.x[j++]=x[i];
    }
    R.size=j;
    return(R);
}

Array Array::Even()
{   Array R;
    R.size=0; 
    int i,j=0;
    for(i=0;i<size;i++)
    {
        if(x[i]%2==0)
        {
            R.x[j++]=x[i];
        }
    }R.size=j;
    return(R);
 
}
int main()
{
    Array A1,A2;
    A1.getarray(5);
    A1.putarray();

    A2=A1.copy();
    A2.putarray();
    
    A2=A1.Even();
    A2.putarray();

    A2=A1.reverse();
    A2.putarray();

    return 0;
}