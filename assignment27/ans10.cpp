#include<iostream>
using namespace std;
class Matrix{
	private:
		int arr[3][3];
	public :
		Matrix(){
			
		}
	    void setData(int arr1[3][3]){
	    	int i,j;
	    	for(i=0;i<3;i++)
	    	{
	    		for(j=0;j<3;j++)
	    		{
	    			arr[i][j] = arr1[i][j];
				}
			}
	    	
		}
	    Matrix operator+(Matrix &m2 )
		{
			int i,j;
			Matrix temp;
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
				    temp.arr[i][j]	=  arr[i][j] + m2.arr[i][j];
				}
			}
			return temp;
		}
		
		void display(){
			int i,j;
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					cout<<"  "<<arr[i][j]<<" ";
					
				}
				cout<<endl;
			}
		}
	
};

int main(){
	int arr1[3][3];
	int arr2[3][3];
	int i,j;
	printf("First Matrix ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>arr1[i][j];
		}
	}
	printf("Second Matrix ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>arr2[i][j];
		}
	}
	
	Matrix m1,m2,m3;
	m1.setData(arr1);
	m2.setData(arr2);
	cout<<endl<<"Sum of Matrix "<<endl;
    m3 = m1+m2;
	m3.display();
	return 0;
}