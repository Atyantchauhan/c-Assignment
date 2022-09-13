//Define a class Complex to represent a complex number. Declare instance member
//variables to store real and imaginary part of a complex number, also define instance
//member functions to set values of complex number and print values of complex
//number


#include<iostream>
using namespace std;
class Complex
{
	private :
	int a;
	int b;
	public :
	void getInput(){
		cout<<"Enter Real Number";
		cin>>a;
		cout<<"Enter Imaginary Number";
		cin>>b;
	}
	void showData(){
		cout<<""<<a<<"+"<<b<<"i";
	}
};
int main()
{
	Complex obj1;
	obj1.getInput();
	obj1.showData();
	return 0;
}