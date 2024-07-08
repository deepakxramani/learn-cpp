/*                  Company

     ProductionUnit1		ProductionUnit2
	 		
			 	TotalProduction  
       
 */

#include<iostream>
using namespace std;
class Company
{ private:
   string CompanyName;
   string location;
  public:
        void getCompany()	
	    { cout<<"Enter Company Name:";
	      cin>>CompanyName;
	      cout<<"Enter Company Location:";
	      cin>>location;
		}
	 void putCompany()	
	    { 
		  cout<<CompanyName<<","<<location<<endl;
				}
	
};

class ProductionUnitOne:public virtual Company 
{
	protected:
		int total_production_one;
	public:
	    void getProductionOne()	
	    { cout<<"Enter Production One:";
	      cin>>total_production_one;
		}
		
		void putProductionOne()	
	    { cout<<"Production One:"<<total_production_one<<endl;
		}
};


class ProductionUnitTwo:public virtual Company 
{
	protected:
		int total_production_two;
	public:
	    void getProductionTwo()	
	    { cout<<"Enter Production Two:";
	      cin>>total_production_two;
		}
		
		void putProductionTwo()	
	    { cout<<"Production Two:"<<total_production_two<<endl;
		}
};

class TotalProduction:public ProductionUnitOne,public ProductionUnitTwo
{
	 private:
	 	int total;
	 public:
	    void getTotalProduction()	
	    {  getCompany();
		   getProductionOne();
	       getProductionTwo();
	    	total=total_production_one+total_production_two;
		}
		
		void putTotalProduction()	
	    { putCompany();
		  putProductionOne();
		  putProductionTwo();
		  cout<<"Total Production:"<<total<<endl;
		}
	 	
	 	
};

int main()
{
	 TotalProduction T;
	 T.getTotalProduction();
	 T.putTotalProduction(); 
}

