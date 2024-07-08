#include<iostream>

using namespace std;
class City
{ private:
	string city;
  public:
    void getCity()	
    {
    	cout<<"Enter City:";
    	cin>>city;
	}
	
	void putCity()	
    {
    	cout<<city<<endl;
	}
	void searchCity(string pat,char st)
	{
		if(st=='e')
		{ int len=city.length();
		  int lenp=pat.length();
		  int pos=(len-lenp);
		  //cout<<pos<<" "<<&city[pos]<<endl;
		  if(&city[pos]==pat)
		  { cout<<city<<endl;
		  }
		}
		else
		{ string temp="";
		  int lenp=pat.length();
		  for(int i=0;i<lenp;i++)
		  { temp=temp+city[i];
		  }
	     // cout<<" "<<temp<<endl;
		  if(temp==pat)
		  { cout<<city<<endl;
		  }	
		}
	}
		
	
	
};

int main()
{ City C[3];
   int i;
   for(i=0;i<=2;i++)
   {
   	 C[i].getCity();
   }
   
   for(i=0;i<=2;i++)
   {
   	C[i].searchCity("bad",'s');
   }


  }
