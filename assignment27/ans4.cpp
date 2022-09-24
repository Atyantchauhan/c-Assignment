//4. Create a class Time which contains:
//- Hours
//- Minutes
//- Seconds
//Write a C++ program using operator overloading for the following:
//1. = = : To check whether two Times are the same or not.
//2. >> : To accept the time.
//3. << : To display the time.


#include<iostream>
using namespace std;
class Time{
	private :
		int hours;
		int minutes;
		int secondes;
	public :
		Time(){
		  hours=0;
		  minutes=0;
		 secondes=0;
		}
		void normalTime(){
			if(secondes>60)
			 {
			    minutes += secondes/60;
		        secondes = secondes%60;
			 }
			if(minutes>60)
			 {  
			    hours +=  minutes/60;
			   	minutes = minutes%60;
			  }
		}
		void display(){
			cout<<hours<<":"<<minutes<<":"<<secondes;
		}
		friend istream& operator>>(istream &cin, Time &p);
		friend ostream& operator<<(ostream &cout, Time p);
		friend bool operator==(Time t1 , Time t2);
		  
		
};
    ostream& operator<<(ostream &cout , Time p){
          cout<<p.hours<<":"<<p.minutes<<":"<<p.secondes<<endl;
          return cout;
        } 

    istream& operator>>(istream &cin , Time &p){
    	cout<<"Enter Hours : ";
    	cin>>p.hours;
    	cout<<"Enter Minutes : ";
    	cin>>p.minutes;
    	cout<<"Ente second : ";
    	cin>>p.secondes;
        return cin;
        }
     bool operator==(Time t1 , Time t2){
           
           int t1Secondes = (t1.secondes + (t1.minutes*60) + (t1.hours*3600));
           int t2Secondes  = (t2.secondes + (t2.minutes*60) + (t2.hours*3600));
          if(t1Secondes==t2Secondes)
            return 1;
          else
            return 0;
        } 
int main(){
	Time c1,c2;
	// First TIMe
	cout<<"Enter First Time"<<endl;
	cin>>c1;
	c1.normalTime();
	cout<<c1;
	
	// second TIME
	cout<<"Enter second Time "<<endl;
	cin>>c2;
	c2.normalTime();
	cout<<c2;
	
	// = = : To check whether two Times are the same or not.
	if(c1==c2)
	  cout<<"Time are same ";
	else
	   cout<<"Time are Not same ";
	return 0;
}