
#include<iostream>
using namespace std;
class Date
{ private:
     int dd,mm,yy;
  public:
        void getDate()
        {   cout<<"Enter Date:";
            cin>>dd>>mm>>yy;
        }
        void putDate()
        {
            cout<<yy<<"-"<<mm<<"-"<<dd<<endl;
        }
        Date dateDiff(Date);
};
  
Date Date::dateDiff(Date bd)
{
 Date TD;
 if(dd<bd.dd)
 {  mm=mm-1;
    if(mm==0)
    {mm=12;
     yy=yy-1;}
     
   if(mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12)
   { dd=dd+31;}
   else if(mm==4 || mm==6 || mm==9 || mm==11)
   { dd=dd+30;}
   else if(mm==2 && ((yy%100!=0 && yy%4==0)|| (yy%400==0)))
   { dd=dd+29;}
   else if(mm==2)
   { dd=dd+28;}
}
   TD.dd=dd-bd.dd;
   
   if(mm<bd.mm)
   { yy=yy-1;
     mm=mm+12;
   }
   TD.mm=mm-bd.mm;
   TD.yy=yy-bd.yy;
   return TD;
   }
  
  
    int main() 
    {
        Date CD,BD,DD;
        cout<<"Enter Current Date"<<endl;
        CD.getDate();
        cout<<"Enter Birth Date"<<endl;
        BD.getDate();
        DD=CD.dateDiff(BD);
        CD.putDate();
        BD.putDate();
        DD.putDate();
    }