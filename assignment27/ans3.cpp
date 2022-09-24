//3. Write a C++ program to add two complex numbers using operator overloaded by a
//friend function.


#include<iostream>
using namespace std;
class Complex{
	private :
		int real;
		int img;
	public :
	 friend Complex operator+(Complex,Complex);
		Complex(){
			real =0;
			img  = 0;
		}
		void setData(int x,int y){
			real = x;
			img  =  y;
		}
		void showData(){
			cout<<real<<"+"<<img<<"i";
		}
	
};
Complex operator+(Complex p ,Complex q){
	Complex temp;
	temp.real = p.real + q.real;
	temp.img =  p.img + q.img;
	return temp;
}

int main(){
	Complex c1,c2,c3;
	c1.setData(4,5);
	c2.setData(5,9);
	c3 = c1+c2;
	c3.showData();
	
	return 0;
}