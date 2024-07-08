#include<iostream>
using namespace std;
inline void show()
{
	cout<<"inline...."<<endl;
	
}
void display()
{ cout<<"Normal..."<<endl;
}

int main()
{
	show();//expand
	display();//jump
	
}

