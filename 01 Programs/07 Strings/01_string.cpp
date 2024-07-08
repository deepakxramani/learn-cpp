#include<iostream>
using namespace std;

class String
{
    private:
        char x[30];
    public:
        void getString()
        {
            cout<<"Enter String: "<<endl;
            cin.getline(x,30);
        }
        void putString()
        {
            cout<<x;
        }
        int length(){
            int i;
            for(i=0;x[i];i++);
            return(i);
        }
        String copy();
        String reverse();
        String slice(int,int);
        String merge(String);
        int indexOf(char);
        int lastIndexOf(char);
        String initial();
};
String String::copy()
{
    int i;
    String R;
    for(i=0;x[i];i++)
    {
        R.x[i]=x[i];
    }R.x[i]=0;
    return(R);
}
String String::reverse()
{
    int i,j=0;
    String R;
    for(i=0;x[i];i++);
    for(i=i-1;i>=0;i--)
    {
        R.x[j++]=x[i];
    }
    R.x[j]=0;
    return(R);
}
String String::slice(int si,int ei)
{
    int i,j=0,L;
    String R;
    for(L=0;x[L];L++);
    if((ei>=si) && (si>=0 && si<L) && (ei>=0 && ei<L))
    {
        for(i=si;i<=ei;i++)
        {
            R.x[j++]=x[i];
        }
    }
    else
    {
        cout<<"Invalid Index Value"<<endl;
    }
    R.x[j]=0;
    return(R);
}
String String::merge(String S)
{
    String R;
    int i,j=0;
   for(i=0;x[i];i++)
   {
    R.x[j++]=x[i];
   }
   R.x[j++]=32;
   for(i=0;S.x[i];i++)
   {
    R.x[j++]=S.x[i];
   }R.x[j]=0;
   return(R);
}
int String::indexOf(char a)
{
    int i;
    for(i=0;x[i];i++)
    {
        if(x[i]==a)
        {
            break;
        }
        if(x[i]!=a)
        {
            cout<<"Index not found"<<endl;
        }
        
    }return(i);
}
int String::lastIndexOf(char c)
{
    int i;
    for(i=0;x[i];i++);
    for(i=i;i>=0;i--)
    {
        if(x[i]==c)
        {
            break;
        }    
    }return(i);
}
String String::initial()
{
    String R;
    int i;
    for(i=0;x[i];i++)
    {
        if(x[i]==32)
        {
            
            cout<<x[i=0+1]<<'.';
        }
    }
}
int main()
{
    String S1,S2,S3,K;
    int k,p;
    S1.getString();
    //K=S1.slice(2,5);
    //K.putString();
    //S2.getString();
    //K=S1.reverse();
    //K.putString();
    cout<<endl;
    //S3=S1.merge(S2);
    //S3.putString();
    //k=S1.indexOf('R');
    //cout<<k<<endl;
    //p=S1.lastIndexOf('a');
    //cout<<p<<endl;
    K=S1.initial();
    K.putString();
        
    
}