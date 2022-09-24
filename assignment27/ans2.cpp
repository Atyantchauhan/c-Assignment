//2. Write a C++ program to overload unary operators that is increment and decrement.

#include<iostream>
using namespace std;
class Complex{
	private :
		int a;
		int b;
	public :
		Complex(){
			
		}
		Complex(Complex &p){
		      a = p.a;
		      b = p.b;
		      
		}
		Complex(int x,int y){
		      a = x;
		      b = y;
		      
		}
	    
		void setdata(int x,int y){
			a =  x;
			b  = y;
		}
		
		Complex operator++(){   // for pre increment
			Complex temp;
			temp.a = ++a;
			temp.b = ++b;
			return temp;
		}
		Complex operator++(int){ // for post increment 
			Complex temp;
			temp.a = a++;
			temp.b = b++;
			return temp;
		}
			Complex operator--(){   // for pre decrement
			Complex temp;
			temp.a = --a;
			temp.b = --b;
			return temp;
		}
			Complex operator--(int){ // for post increment 
			Complex temp;
			temp.a = a--;
			temp.b = b--;
			return temp;
		}
		
		void Showdata(){
			cout<<a<<" "<<b;
		}
};

int main(){
	Complex c1(0,0),c3,c2(10,11),c4;
    cout<<endl;
    c1.operator++(); // pre increment show result
    cout<<"for Pre Inrement"<<endl;
    c1.Showdata();  // pre increment show result
    
    cout<<endl;
    c3.setdata(5,7);
    (c3++).Showdata(); // post inctement result
    cout<<"for Post Inrement"<<endl;
    cout<<"first assign then increment ";
    c3.Showdata();// post Increment SHow result 
    
    cout<<endl;
    c2.operator--(); // pre increment show result
    cout<<"for Pre decrement "<<endl;
    c2.Showdata();  // pre increment show result
    
    
    cout<<endl;
    c4.setdata(5,7);
    (c4--).Showdata(); // post inctement result
    cout<<"for Post decrement "<<endl;
    cout<<"first assign then deccrement ";
    c4.Showdata();// post Increment SHow result 
    

	return 0;
}