#include"employees.h"
#include<fstream>



int main()
{ Employee E;
  fstream F;
  F.open("emp.db",ios::out|ios::app|ios::binary);
  char ch;
  do{
  	E.getEmployee();
  	F.write((char*)&E,sizeof(E));
  	//read data from object and write it into file
  	// read n size form base address of E and write it into file
  	cout<<"Add More Records(y/n):";
  	cin>>ch;
  }while(ch=='y'||ch=='Y');
  F.close();
}

