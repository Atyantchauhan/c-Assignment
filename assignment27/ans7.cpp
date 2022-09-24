//7. Define a C++ class fraction
//class fraction
//{
//long numerator;
//long denominator;
//Public:
//fraction (long n=0, long d=0);
//}
//Overload the following operators as member or friend:
//a) Unary ++ (pre and post both)
//b) Overload as friend functions: operators << and >>.
//Output-


#include<iostream>
using namespace std;
class Fraction
{
	private :
      long int numerator;
    long int denominator;
    public:
       Fraction( ){
         numerator =0;
       	denominator =0;
       	
	   }
	   	Fraction operator++(){   // for pre increment
			++numerator;
		    ++denominator;    
			return (*this);
		}
		Fraction operator++(int){ // for post increment 
		     Fraction temp = (*this);
		     numerator++;
		     denominator++;
		     return temp;
		     
		     
		}
			Fraction operator--(){   // for pre decrement
			Fraction temp;
			temp.numerator = --numerator;
			temp.denominator = --denominator;
			return temp;
		}
			Fraction operator--(int){ // for post increment 
			Fraction temp;
			temp.numerator = numerator--;
			temp.denominator = denominator--;
			return temp;
		}
       friend istream& operator>>(istream &cin, Fraction &p);
       friend ostream& operator<<(ostream &cout, Fraction p);
};
        istream & operator>>(istream &cin ,Fraction &p){
        	cout<<endl;
	     	cout<<"Enter numerator : ";
    	    cin>>p.numerator;
        	cout<<"Enter denominator : ";
        	cin>>p.denominator;
        	return cin;
}
       ostream& operator<<(ostream &cout , Fraction p){
          cout<<p.numerator<<"/"<<p.numerator;
          return cout;
        } 
int main(){
	Fraction f1,f2;
    cout<<"\n f1 : "<<f1;
    cout<<"\n f2 :"<<f2;
    cout<<"\n Enter the 1st Value of Fraction : ";
    cin>>f1;
    cout<<"\n f1++ : ";
    f1++;
    cout<<f1;
    cout<<"\n ++f1 : ";
    ++f1;
    cout<<f1;	
	return 0;
}