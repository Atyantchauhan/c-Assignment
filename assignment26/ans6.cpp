//6. Define a class student and write a program to enter student details using constructor
//and define member function to display all the details

#include<iostream>
using namespace std;
#include<string.h>

class Student{
	private :
		int Rollno;
		char Name[20];
		int mob;
    public :
    	Student(){
    		Rollno = 58;
    		strcpy(Name,"Atyant");
    		mob = 70783530;
    		cout<<"I am in constructor "<<endl;
		}
		
		void showData(){
			cout<<"Rollno ==>"<<Rollno;
			cout<<endl;
			cout<<"Name ==>"<<Name;
			cout<<endl;
			cout<<"mob no ==> "<<mob;
			cout<<endl;
		}
		
};
int main(){
	Student c1,c2;
	c1.showData();
	c2.showData();
	
	
}