//1. Define a class Complex to represent a complex number with instance variables a and
//b to store real and imaginary parts. Also define following member functions
//a. void setData(int,int)
//b. void showData()
//c. Complex add(Complex)

#include<iostream>
using namespace std;
class Complex{
	private :
		int real;
		int img;
	public :
		void setData(int x,int y){
			real = x;
			img  = y;
		}
		Complex add(Complex x){
			Complex temp;
			 temp.real = real + x.real;
			 temp.img  = img + x.img;
			 return temp;
		}
		void showData(){
			cout<<real<<"+"<<img;
		}
};
int main(){
	Complex obj,obj1,obj2;
	obj.setData(4,5);
	obj1.setData(5,8);
	obj2 = obj.add(obj1);
	obj2.showData();
	
	
}