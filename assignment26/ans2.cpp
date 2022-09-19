//2. Define a class Time to represent a time with instance variables h,m and s to store
//hour, minute and second. Also define following member functions
//a. void setTime(int,int,int)
//b. void showTime()
//c. void normalize()
//d. Time add(Time)

#include<iostream>
using namespace std;
class Time{
	private :
		int sec;
		int min;
		int hr;
		int day;
	public :
		void setTime(int x,int y,int z){
		hr = x;
		min = y;
		sec = z;	
		}
		void showTime(){

			cout<<hr<<":"<<min<<":"<<sec;
			
		}
		void normalize(){
			if(sec>60){
				
				min += sec/60;
				sec = sec%60;
			}
			if(min>60){
				hr += min/60;
				min  = min%60;
			}
		
			
		}
		Time add(Time x){
			Time temp;
		    temp.hr = hr + x.hr;
			temp.min  = min + x.min;
	     	temp.sec = sec + x.sec;
			return temp;
		}
};
int main(){
	Time t1,t2,t3;
	t1.setTime(12,650,66);
	t1.showTime();
	cout<<endl;
	t2.setTime(12,33,5);
	t2.showTime();
	cout<<endl;
	t3 = t1.add(t2);
	t3.normalize();
	t3.showTime();
	return 0;
}