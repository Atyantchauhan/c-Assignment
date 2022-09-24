//Define a class Complex with appropriate instance variables and member functions.
//Define following operators in the class:
//a. +
//b. -
//c. *
//d. ==


#include<iostream>
using namespace std;
class Complex{
	private :
		int real;
		int img;
	public :
		Complex(){
			real = 0;
			img  = 0;
		}
		void setData(int x,int y){
			real = x;
			img  = y;
		}
		Complex operator+(Complex c){
			
			Complex temp;
			    temp.real = real + c.real;
			    temp.img  = img + c.img;
			    return temp;
		}
			Complex operator-(Complex c){
			   
			    Complex temp;
			    temp.real = real - c.real;
			    temp.img  = img - c.img;
			    return temp;
		}
			Complex operator*(Complex c){
			   
			   Complex temp;
			    temp.real = real * c.real;
			    temp.img  = img * c.img;
			    return temp;
		}
			Complex operator==(Complex c){
			
			   Complex temp;
			    temp.real = real == c.real ? 0 : 1;
			    temp.img  = img == c.img ? 0 : 1;
			    return temp;
		}
		void getData(){
		     
			cout<<real<<"+"	<<img;
			
		}
		void getbooData(){
			   if(real== 0 && img == 0){
			   	cout<<"complex are Equal ";
			   }else {
			   	cout<<"complex are not equal ";
			   }
		}
		
};
int main(){
	Complex c1,c2,c3;
	c1.setData(4,5);
	c2.setData(4,5);
	c3 = c1.operator+(c2); // c1+c2; mean c1 call operator + function c2 as a arugment opertor + return value who assign in c3
	c3.getData();     // shoe + data;
	cout<<endl;
    c3 = c2-c1;   // c1.opperator-(c2); mean c1 call operator + function c2 as a arugment opertor + return value who assign in c3
    c3.getData();  // show operator - data;
    cout<<endl;
    c3 = c2*c1; // mean operator *;
    c3.getData();
    cout<<endl;
    c3 = c1==c2;  // mean operator ==;
    c3.getbooData();

	return 0;
}