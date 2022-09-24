//6. Create a class CString to represent a string.
//a) Overload the + operator to concatenate two strings.
//b) == to compare 2 strings


#include<iostream>
#include<string.h>
using namespace std;
class CString{
	private:
		char str[100];
	
	public:
		void setString(char strm[]){
			strcpy(str,strm);
		}
		CString operator+(const CString &s2){  
			CString s3;
			strcpy(s3.str,str);   
		    strcat(s3.str,s2.str);     
			return s3;
		}
		 int operator==(const CString &s2){
		 	int x =strcmp(str,s2.str);
		 	return x;
		 }
		void show(){
			cout<<str;
		}
	
};
int main(){
	char strm[] = "Atyant";
	char strc[]  = "Atyant";
	CString s1,s2,s3;
     s1.setString(strm);
     s2.setString(strc);
	s3=s1+s2;
	s3.show();
	cout<<endl;
	if(!(s1==s2))
		cout<<"Wow String Are Same! ";
	else
	    cout<<"String Are Not Same ! ";
	
	
	return 0;
}