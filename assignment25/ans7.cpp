//7. Define a class Greatest and define instance member function to find Largest among
//3 numbers using classes.

#include<iostream>
using namespace std;
class Greatest{
	private :
		int a;
		int b;
		int c;
		int max;
	public :
		void seta(int x){
			a = x;
		}
		void setb(int y){
			a = y;
		}
		void setc(int z){
			c = z;
		}
	    void maxN(){
	    	 if(a>b && a>c){
			  	  max = a;
			  }else{
			  	if(b>a && b>c){
			  	    max = b;
				  }else if(c>a && c>b){
				    max = c;
				   
				  }else
				  {
				  	 max = 0;
				  }
			  }
		
		}
	    int getmax(){
	    	return max;
		}
};
int main(){
	Greatest obj;
	obj.seta(5);
	obj.setb(5);
	obj.setc(5);
	obj.maxN();
	if(obj.getmax()==0){
		cout<<"numbr are same ";
	}else
    	cout<<"Largest Number is "<<obj.getmax();
	
	return 0;
}