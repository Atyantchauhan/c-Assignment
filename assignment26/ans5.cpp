//5. Define a class Date and write a program to Display Dateand initialise date object
//using Constructors.


#include<iostream>
using namespace std;
class Date{
	private :
		int day;
		int  month;
		int year;
	public :
		Date(){
			day = 31;
			month = 5;
			year = 2022;
		}
	    void setDate(int x , int y, int z){
	    	day = x;
	    	month = y;
	    	year  = z;
		}
		void showDate(){
			cout<<day<<"-"<<month<<"-"<<year;
		}
};
int main(){
	Date obj;
	obj.setDate(31,3,2002);
	obj.showDate();
	return 0;
	
}