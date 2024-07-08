#include"employees.h"
#include<fstream>
int main()
{ Employee E;
  fstream F;
  F.open("emp.db",ios::in|ios::binary);
  if(F.bad())
  { cout<<"File Not Found...."<<endl;
  }
  else
  {	cout<<"ID"<<"\t\t"<<"NAME"<<"\t\t"<<"SALARY"<<"\t\t"<<"DA"<<"\t\t"<<"NET SALARY"<<endl;
  	while(!F.eof())
  	{ F.read((char*)&E,sizeof(E));
  	  //read n size from file and write it into object E
  	  if(F.eof()) break;
  	  E.putEmployee();
	  }
  	
  	
  }
  F.close();
  
}

