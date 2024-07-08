/*
     ProductionUnit1		ProductionUnit2
	 		
			 	TotalProduction  
       
 */

#include<iostream>
using namespace std;
class ProductionUnitOne
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


class ProductionUnitTwo
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
	    {  getProductionOne();
	       getProductionTwo();
	    	total=total_production_one+total_production_two;
		}
		
		void putTotalProduction()	
	    { 
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

