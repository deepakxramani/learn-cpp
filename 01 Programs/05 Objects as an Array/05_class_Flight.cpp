#include<iostream>
#include<string>
using namespace std;

class Flight
{
    private:
        string flightid;
        string company;
        string source;
        string destination;
        string days;
        long fare;
    public:
        void getFlights()
        {
            cout<<"Enter Flight ID"<<endl;
            cin>>flightid;
            cout<<"Enter Flight Company"<<endl;
            cin>>company;
            cout<<"Enter Flight Source"<<endl;
            cin>>source;
            cout<<"Enter Flight Destination"<<endl;
            cin>>destination;
            cout<<"Enter Flight Days"<<endl;
            cin>>days;
            cout<<"Enter Fare"<<endl;
            cin>>fare;
        }
        void showFlights()
        {
            
            cout<<company<<"\t\t"<<flightid<<"\t\t"<<source<<"\t\t"<<destination<<"\t\t"<<days<<"\t\t"<<fare<<endl;
        }
    int searchbyId(string);
    int searchbySAND(string,string);
    
};
int Flight::searchbySAND(string s,string d)
{
    if(source==s && destination==d)
    {
        showFlights();
        return (1);
    }
    else
    {
        return (0);
    } 
}
int Flight::searchbyId(string id)
{
    if(flightid==id)
    {
        showFlights();
        return (1);
    }
    else
    {
        return (0);
    }
}
int main(){
    Flight F[3];
    int i,ch,found,count=0;
    string id,s,d;
    for(i=0;i<=2;i++)
    {
        F[i].getFlights();
    }
    do{
        cout<<"\nMain Menu\n1]Show All Flights\n2]Search by ID\n3]Search by Source & Destination\n4]Exit";
        cout<<"\nEnter Your Choice: ";
        cin>>ch;
            switch(ch)
            {
                case 1:
                    cout<<"Company Name"<<"\t\t"<<"Flight ID"<<"\t\t"<<"Source"<<"\t\t"<<"Destination"<<"\t\t"<<"Days"<<"\t\t"<<"Fare"<<endl;
                    for(i=0;i<=2;i++)
                    {
                        F[i].showFlights();
                        
                    }break;
                case 2:
                    cout<<"Enter ID for Search Flight"<<endl;
                    cin>>id;
                    cout<<"Company Name"<<"\t\t"<<"Flight ID"<<"\t\t"<<"Source"<<"\t\t"<<"Destination"<<"\t\t"<<"Days"<<"\t\t"<<"Fare"<<endl;
                    found=0;
                    for(i=0;i<=2;i++)
                    {
                        found=F[i].searchbyId(id);
                        if(found)
                        {break;}
                    }
                    if(!found)
                    {
                        cout<<"Invalid ID..."<<endl;
                    }break;
                case 3:
                    cout<<"Enter Source"<<endl;
                    cin>>s;
                    cout<<"Enter Destination"<<endl;
                    cin>>d;
                    cout<<"Company Name"<<"\t\t"<<"Flight ID"<<"\t\t"<<"Source"<<"\t\t"<<"Destination"<<"\t\t"<<"Days"<<"\t\t"<<"Fare"<<endl;
                    found=0;
                    count=0;
                    for(i=0;i<=2;i++)
                    {
                        found=F[i].searchbySAND(s,d);
                    
                    if(found)
                    {count++;}
                    }
                    if(count==0)
                    {                    
                        cout<<"No Flights Found...6_6"<<endl;
                    }
                      
                    
                    break;
                case 4:
                    cout<<"Sayonara...;)"<<endl;
                    break;
                default:
                    cout<<"Invalid Input..."<<endl;
                    break;
            }
    }while(ch!=4); 
}    