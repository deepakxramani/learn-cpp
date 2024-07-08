#include"employees.h"
#include<fstream>
int main()
{ Employee E;
  fstream F;
  int id,found;
  F.open("emp.db",ios::in|ios::binary);
  if(F.bad())
  { cout<<"File Not Found...."<<endl;
  }
  else
  { cout<<"Enter employee id u want to search?";
     cin>>id;
  	while(!F.eof())
  	{ F.read((char*)&E,sizeof(E));
  	  //read n size from file and write it into object E
  	  if(F.eof()) break;
  	  found=E.search(id);
  	  if(found)
  	  {
  	     E.putEmployee();
  	     break;
  	   }
	  }
  	  if(!found)
  	  { cout<<"Employe id does not exist...."<<endl;
		}
  	
  }
  F.close();
  
}

