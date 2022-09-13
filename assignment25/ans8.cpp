//8. Define a class Rectangle and define an instance member function to find the area of
//the rectangle.

#include<iostream>
using namespace std;
class Rectangle{
	private :
		int l;
		int b;
		int area;
	public :
		void setl(int n){
			l = n;
		}
		void setb(int m){
			b = m;
		}
		void setArea(){
			area = l*b;
		}
		int getl(){
			return l;
		}
		int getb(){
			return b;
		}
		int getArea(){
			return area;
		}
};
int main(){
	Rectangle obj;
	obj.setl(5);
	obj.setb(7);
	obj.setArea();
	cout<<"Area of Rectangle is "<<obj.getArea();
	return 0;
}