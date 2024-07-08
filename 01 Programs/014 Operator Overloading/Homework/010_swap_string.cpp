#include<iostream>
using namespace std;

class String
{
    private:
        string str;
    public:
        void getString()
        {
            cout<<"Enter String"<<endl;
            cin>>str;
        }
        void putString()
        {
            cout<<str<<endl;
            
        }
        void operator>>(String &);
};
void String::operator>>(String &T)
{
    string temp=str;
    str=T.str;
    T.str=temp;
}
int main()
{
    String S1,S2;
    S1.getString();
    S2.getString();
    cout<<endl;
    S1.putString();
    S2.putString();
    cout<<endl;
    S1>>S2;
    S1.putString();
    S2.putString();
    
    return 0;
}