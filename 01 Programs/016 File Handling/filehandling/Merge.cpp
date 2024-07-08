#include<iostream>
using namespace std;
int main()
{
	int ch;
	do
	{ cout<<"Main Menu\n1] Insert Record\n2] Display All\n3] Search By Id\n4] Exit\n";
	  cout<<"Enter Ur Choice:";
	  cin>>ch;
	  switch(ch)
	  {
	  	case 1:
	  		system("InsertRecord");
	  		break;
	  	case 2:
	  		system("DisplayAllRecord");
	  		break;
	    case 3:
	  		system("SearchById");
	  		break;
	  	case 4:
		     break;
		default:
		    cout<<"Wrong Option...\n";	  	
	  	
	  		
	  }
	}while(ch!=4);
	
}
