#include <iostream>

using namespace std;

int main(){
	
	
	int arr[5]={300,350,200,400,250};
	
	int max =0;
	
	for(int i=0; i<5;i++){
		
//		OR
//		if(arr[i]>max){
//			max=arr[i];
//		}
		max = (arr[i]>max?arr[i]:max);
		
	}
	
	cout<<max<<endl;
	
	
	
}