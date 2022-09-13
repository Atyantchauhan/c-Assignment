//6. Define a class Square to find the square of a number and write a C++ program to
//Count number of times a function is called.
#include<iostream>
using namespace std;

class Square{
	private :
		int x;
		int x2;
		static int count;
	public :
		void setx(int n){
		   	x = n;
		}
		int getx(){
		      return x;
		}
		void square(){
			x2 = x*x;
			count++;
		}
		int getSquare(){
			return x2;
		}
	    int	getcount(){
			return count;
		}
  	
	
	
};
int Square::count =0;

int main(){
	
	Square obj;
	obj.setx(5);
	obj.square();
	cout<<"Square of "<<obj.getx()<<"==>"<<obj.getSquare()<<" the count of function "<<obj.getcount();
	cout<<endl;
	obj.setx(3);
	obj.square();
	cout<<"Square of  "<<obj.getx()<<"===>"<<obj.getSquare()<<" the count of function "<<obj.getcount();

}
