#include<iostream>
using namespace std;
class Mystring{
	private:
		char str[100];
	public:
		Mystring(){
			
		}
    	void setString(char str1[20]){
    		strcpy(str,str1);
      	}
      	void operator!(){
      		int i,j;
      		for(i=0;str[i]!='\0';i++){
      			if(str[i]>=65 &&str[i]<=90){
      				str[i]+=32;
				  }else if(str[i]>=97 && str[i]<=122){
				  	str[i]-=32;
				  }
			  }
		  }
      	void Showstring(){
      		cout<<str;
		}
		
};
int main(){
	char str[10] = "Atyant";
	Mystring m1;
	m1.setString(str);
	!m1;
	m1.Showstring();
	return 0;
}