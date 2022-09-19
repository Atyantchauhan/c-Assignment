//7. Define a class Box and write a program to enter length, breadth and height and
//initialise objects using constructor also define member functions to calculate volume
//of the box.

#include<iostream>
using namespace std;
class Box{
	private :
		int Length;
		int breadth;
		int height;
		int result;
	public :
		Box(){
			Length = 0;
			breadth = 0;
			height = 0;
			
		}
		void setBox(int x,int y,int z){
			Length = x;
			breadth = y;
			height = z;		
			
		}
		void  calculate(){
			result = Length*breadth*height;
		}
		void getData(){
			cout<<"Area of Box is "<<result;
		}
		
};
int main(){
	Box c1,c2;
	c1.setBox(5,4,3);
	c1.calculate();
	c1.getData();
	cout<<endl;
	c2.getData(); // without set Data 
	return 0;
}