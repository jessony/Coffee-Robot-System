#ifndef COFFEE_H
#define COFFEE_H
#include <vector>
#include <iostream>
#include <cstring>
using namespace std;
class Coffee
{
  private:
  string taste;
  double temperature;
  double price;
  string volumn;
  public:
  inline string gettaste(){
  	return this->taste;
  }
  inline	void settaste(string str){
  	strcpy(this->taste,str);
  	
  	
  	
  }
  inline	double gettemperature(){
  	return this->temperature;	
  }
  inline	void settemperature(double tp){
  	this->temperature=tp;
  	
  }
  inline  void setvolumn(cup cup0)
  {
  		strcpy(this->volumne,cup0.size);
  	
  }
  inline	void setprice(){
  	switch(taste){
  		case "Machiatto":
  			switch(volumn){
  				case "large":
  				case "middle":	
  				case"small":
			  }
  			
  		case "Americano":
  			switch(volumn){
  				case "large":
  				case "middle":	
  				case"small":
			  }  			
  		case "Flat white":
    			switch(volumn){
  				case "large":
  				case "middle":	
  				case"small":
			  }			
  		case "Caffè Latte":
    			switch(volumn){
  				case "large":
  				case "middle":	
  				case"small":
			  }			
  		case "Cappuccino":
  	  			switch(volumn){
  				case "large":
  				case "middle":	
  				case"small":
			  }		
  		case "CafeMocha":
  	  			switch(volumn){
  				case "large":
  				case "middle":	
  				case"small":
			  }		
	  }
  	
  	
  }
  inline	void showprice(){
  }
	   	
	
};
class Cup
{
	private:
	string size;
	int number;
	public:
		inline void getsize(){
			return this->size;	
		}
		inline void getnumber(){
				return this->number;
		}
			inline void setsize(){
			
		}
		inline void setnumber(){
			
		}
	
};
 class  pay
 {
 	private:
 		double totalmoney;
 		double givenmoney;
 		double charge;
 	public:
 	  inline void gettotalmoney(){
 	  	
	   }	
 			
 	
 };
#endif
};
 class  pay
 {
 	private:
 		double totalmoney;
 	public:
 	  void gettotalmoney();	
 			
 	
 };
#endif
