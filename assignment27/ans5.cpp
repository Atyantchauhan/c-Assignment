//5. Consider following class Numbers
//class Numbers
//{
//int x,y,z;
//public:
//// methods
//};
//Overload the operator unary minus (-) to negate the numbers.


#include<iostream>
using namespace std;
class Numbers
{
	private :
     int x,y,z;
    public:
void operator-(){
          x = -x;
          y = -y;
          z  = -z;
   
	}
	void setData(int a,int b,int c){
		x = a;
		y = b;
		z = c;
	}
	void display(){
		cout<<" x===> "<<x<<endl;
		cout<<" y===> "<<y<<endl;
		cout<<" z===> "<<z<<endl;
	}	

};
int main(){
	Numbers n1;
	n1.setData(4,5,6);
	-n1;
	n1.display();
	return 0;
}