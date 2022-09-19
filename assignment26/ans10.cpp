//10. Define a class StaticCount and create a static variable. Increment this variable in a
//function and call this 3 times and display the result

#include<iostream>
using namespace std;
class StaticCount{
	private :
		static int count;
	public :
		void Funcount(){
		        cout<<"count ==>"<<count++;
				cout<<endl;
		}
};
int StaticCount::count=1;
int main(){
	StaticCount b1,b2,b3;
	b1.Funcount();
	b2.Funcount();
	b3.Funcount();
	return 0;
}