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
	    void operator-(){
			int i,j;
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					arr[i][j] = -(arr[i][j]);
				}
			}
		}
		void display(){
			int i,j;
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					cout<<arr[i][j]<<" ";
					
				}
				cout<<endl;
			}
		}
	
};

int main(){
	int arr1[3][3];
	int i,j;
	printf("Enter Number ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>arr1[i][j];
		}
	}
	
	Matrix m1;
	m1.setData(arr1);
	-m1;
	m1.display();
	return 0;
}