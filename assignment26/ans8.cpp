//8. Define a class Bank and define member functions to read principal , rate of interest
//and year. Another member functions to calculate simple interest and display it.
//Initialise all details using constructor


#include<iostream>
using namespace std;
class Bank{
	private :
		int principal;
		int rate;
		int year;
		int result;
	public :
		Bank(){
			principal = 0;
			rate  = 0;
			year  = 0;
		}
		void setData(int x,int y,int z){
			principal = x;
			rate = y;
			year = z;
		}
		void calclulateSI(){
			result = principal*rate*year/100;
		}
		void getData(){
			cout<<"SimpleInerest ==>"<<result;
		}
};
int main(){
	Bank u1;
	u1.setData(400,5,5);
	u1.calclulateSI();
	u1.getData();
	
	return 0;
}