//9. Define a class Bill and define its member function get() to take detail of customer ,
//calculateBill() function to calculate electricity bill using below tariff :
//Upto 100 unit RS. 1.20 per unit
//From 100 to 200 unit RS. 2 per unit
//Above 200 units RS. 3 per unit

#include<iostream>
using namespace std;
class Bill{
	private :
		float unit;
		float result;
	public :
		Bill(){
			unit = 0;
		}
	void setUnit(float x){
          unit = x;		
	}
	int calculate(){
		if(unit<=100){
			result = unit*1.20;
			return result;
		}else if(unit<=200){
			 result = 100*1.20 + (unit-100)*2;
			 return result;
	         }else {
	         	result = (100*1.20)+(200*2)+(unit-300)*3;
	         	return result;
			 }
		}
	void getBill(){
		cout<<"Your Bill iS "<<result;
	}
		   
		
};
int main(){
	Bill x1;
	float x;
	cout<<"Enter Your Unit ";
	cin>>x;
	x1.setUnit(x);
	x1.calculate();
	x1.getBill();
	
	return 0;
}