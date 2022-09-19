//3. Define a class Cube and calculate Volume of Cube and initialise it using constructor


#include<iostream>
using namespace std;
class Cube{
	private : 
	       int a;
	       int res;
    public :
    	Cube()
    	{
    		a = 0;
    		res = 0;
    		cout<<"I am Constructor !! ";
    		cout<<endl;
		}
		void setData(int x){
			a = x;
		}
		void cubeCal(){
			 res = a*a*a;
		}
		
		void showData(){
			cout<<"cube of "<<a<<" "<<res;
		}
};
int main(){
	Cube obj;
	obj.setData(5);
	obj.cubeCal();
	obj.showData();
	return 0;
}