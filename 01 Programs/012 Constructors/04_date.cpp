#include<iostream>
using namespace std;
class Date
{
	private:
	int dd, mm, yy;
	public:
	Date()
	{
	    dd=28;
		mm=8;
		yy=2022;
	
	}
	Date(int dd, int mm, int yy)
	{
		this->dd=dd;
		this->mm=mm;
		this->yy=yy;
	}	
	void putDate()
	{
		cout<<dd<<" "<<mm<<" "<<yy<<endl;
	}	
};
int main()
{
	Date D1(20,11,2000);
	D1.putDate();
	Date D;
	D.putDate();
}
