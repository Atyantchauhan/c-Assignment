//10. Define a class Area and define instance member functions to find the area of the
//different shapes like square, rectangle , circle etc


#include<iostream>
using namespace std;
class Area{
	private :
		int l;
		int b;
		int r;
		int s;
		int rectangleArea;
		int circleArea;
		int squareArea;
	public :
		void setr(int x){
			r = x;
		}
		void setl(int n){
			l = n;
		}
		void setb(int m){
			b = m;
		}
		void sets(int y){
			s = y;
		}
		// square Area
		void squareSetArea()
		{
			squareArea = s*s;
		}
		//  rectangle Area
		void rectangleSetArea(){
			rectangleArea = l*b;
		}
        //  circle Area
		void circleSetArea(){
			circleArea = 3.14*r*r;
		}
		// radius of circle
		int getr(){
			return r;
		}
		// length of retangle
		int getl(){
			return l;
		}
		// breadth of rentangle 
		int getb(){
			return b;
		}
		//  side of square
		int gets(){
			return s;
		}
		//  area of square
		int squareGetArea(){
			return squareArea;
		}
		// area of circle
		int circleGetArea(){
			return circleArea;
		}
		// area of rectangle
		int rectangleGetArea(){
			return rectangleArea;
		}
};
int main(){
	Area obj;
	obj.setr(5);
	obj.circleSetArea();
	cout<<"Area of Circle is "<<obj.circleGetArea();
	cout<<endl;
	obj.setl(5);
	obj.setb(7);
	obj.rectangleSetArea();
	cout<<"Area of Rectangle is "<<obj.rectangleGetArea();
	cout<<endl;
	obj.sets(5);
	obj.squareSetArea();
	cout<<"Area of square is "<<obj.squareGetArea();
	return 0;
}