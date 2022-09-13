//5. Define a class ReverseNumber and define an instance member function to find
//Reverse of a Number using class


#include<iostream>
using namespace std;
class ReverseNumber{
	private :
		int a;
	public :
		void getInput(){
			cout<<"Ente a Number ";
			cin>>a;
		}
		void reverse(){
			while(a !=0){
				 cout<<a%10;
				 a = a/10;
			}
		}
};
int main(){
	ReverseNumber obj;
	obj.getInput();
	obj.reverse();
}