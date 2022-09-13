//2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
//number of instance member variables and also define instance member functions to
//set values for time and display values of time.


#include<iostream>
using namespace std;
class Time{
	private :
		int hr;
		int min;
		int sec;
	public :
		void getTime(){
			cout<<"Enter hr : ";
			cin>>hr;
			cout<<"Enter Min : ";
			cin>>min;
			cout<<"Enter Second : ";
			cin>>sec;
		}
	    void showTime(){
	    	cout<<endl;
	    	cout<<hr<<" hr "<<min<<" min "<<sec<<" sec ";
		}
};
int main(){
	Time obj;
	obj.getTime();
	obj.showTime();
	return 0;
}