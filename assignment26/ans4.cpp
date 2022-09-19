//4. Define a class Counter and Write a program to Show Counter using Constructor
#include<iostream>
using namespace std;

class CounterF{
	private :
		static int k;
	public :
		CounterF(){
			k++;
		}
	    
	    void showCounter(){
			cout<<"counter is "<<k;
		}
};
int CounterF::k=0;
int main(){
	CounterF obj,obj2,obj3,obj4;
	obj4.showCounter();
	return 0;
}