#include<iostream>
#include<fstream>
using namespace std;
int main()
{ fstream F;
  F.open("f:/story.txt",ios::in|ios::out|ios::binary);
  cout<<F.tellg()<<endl;
  F.seekg(50,ios::beg);
  cout<<F.tellg()<<endl;
  char c=F.get();
  cout<<c<<endl;
  cout<<F.tellg()<<endl;	
  for(int i=1;i<=20;i++)
  { c=F.get();
  cout<<c;

  }
  cout<<endl<<F.tellg()<<endl;	
  F.seekg(20,ios::cur);
  cout<<endl<<F.tellg()<<endl;	
 
  F.seekg(-20,ios::end);
  cout<<endl<<F.tellg()<<endl;	  
  while(!F.eof()) 
  { c=F.get();
    cout<<c;
  	
  }
 F.close(); 
 F.open("f:/story.txt",ios::in|ios::out|ios::binary);
 F.seekp(20,ios::beg);
 cout<<F.tellp()<<endl;
 F.put('Z');
 F.close();
  
  
}
