#ifndef COFFEE_H
#define COFFEE_H
#include <vector>
#include <iostream>

using namespace std;
class Coffee
{
	private:
  string taste;
  double temperature;
  double price;
  public:
  	void gettaste();
  	void choosetaste();
  	void gettemperature();
  	void choosetemperature();
  	void getprice();
  	void showprice();	
	
};
class Cup
{
	private:
	string size;
	int number;
	
};
 class  pay
 {
 	private:
 		double totalmoney;
 	public:
 	  void gettotalmoney();	
 			
 	
 };
#endif
