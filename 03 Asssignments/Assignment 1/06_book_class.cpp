#include<iostream>
using namespace std;
class BOOK
{
    private:
        int bookNum;
        string bookTitle;
        float price;
        float totalCost(int n)
        {
            float total=(price*n);
            return (total);
        }
    public:
        void input()
        {
            cout<<"Enter Book Number:"<<endl;
            cin>>bookNum;

            cout<<"Book Title:"<<endl;
            cin>>bookTitle;
            
            cout<<"Enter Price:"<<endl;
            cin>>price;
        }
        void purchased()
        {   int num;
            cout<<"Enter Number of Copies U want to Purchase:"<<endl;
            cin>>num;
            cout<<"Total Cost to be Paid: ";
            cout<<totalCost(num);
        }
};

int main()
{
    BOOK B;
    B.input();
    B.purchased();
    return 0;
}