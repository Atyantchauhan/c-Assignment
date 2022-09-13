//3. Define a class Factorial and define an instance member function to find the Factorial
//of a number using class.

#include<iostream>
using namespace std;
class Factorial{
	private :
		int a;
	public : 
	    int facto(int x){
	    	int i;
	    	int result=1;
	    	for(i=1;i<=x;i++){
	    		result *= i;
			}
			return result;
		}
};
int main()
{ 
    int x;
    cout<<"Enter a Number to find factorial : ";
    cin>>x;
   Factorial obj;
   cout<<"factorial of "<<x<<" "<< obj.facto(x);
	
	return 0;
}