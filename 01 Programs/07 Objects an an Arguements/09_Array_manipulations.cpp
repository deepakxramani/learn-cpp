#include<iostream>
using namespace std;
class Array
{
    private:
        int x[50],size;
    public:
        void getarray(int);
        void putarray();
        int indexOf(int);
        int count(int);
        int valueAt(int);
        void slice(int,int);

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
int Array::indexOf(int n)
{   int i;
    for(i=0;i<size;i++)
    {
        if(x[i]==n)
        {
            return(i);
        }
        
    }return(-1);
   
}
int Array::count(int n)
{
    int i,c=0;
    for(i=0;i<size;i++)
    {
        if(x[i]==n)
        {
            c++;
        }
    }
    return(c);
}
int Array::valueAt(int i)
{   
    if(i>=0 && i<size)
    {
        return x[i];
    }
    else
    {
        cout<<"Invalid Index Value...";
        return(-9999);
    }       
}
void Array::slice(int si,int ei)
{   int i;
    for(i=si;i<=ei;i++)
    {
        cout<<x[i]<<",";
    }
    
}
int main()
{
    Array A;
    int i,c,v; 
    
    A.getarray(5);

    i=A.indexOf(20);
    cout<<"At Index: "<<i<<endl;
    
    c=A.count(3);
    cout<<"Count: "<<c<<endl;

    v=A.valueAt(3);
    cout<<"Value: "<<v<<endl; 

    A.slice(2,4);
    
}