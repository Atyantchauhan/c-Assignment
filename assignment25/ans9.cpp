//9. Define a class Circle and define an instance member function to find the area of the
//circle


#include<iostream>
using namespace std;
class Circle{
	private :
		int r;
		int area;
	public :
		void setr(int n){
			r = n;
		}

		void setArea(){
			area = 3.14*r*r;
		}
		int getr(){
			return r;
		}
		
		int getArea(){
			return area;
		}
};
int main(){
	Circle obj;
	obj.setr(5);
	obj.setArea();
	cout<<"Area of Circle is "<<obj.getArea();
	return 0;
}