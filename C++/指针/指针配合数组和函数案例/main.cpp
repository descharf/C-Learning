#include <iostream>
using namespace std;

void bubbleSort(int *arr, int len){
	for(int i =0; i<len-1; i++){
		
		for(int j=0;j<len-i-1;j++){
			
			if(arr[j]>arr[j+1]){
				
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				
			}
		}
	}
	
	
} 
void printArray(int *arr, int len){
		
	for(int i = 0;i<10;i++){
		
		cout<<arr[i]<<endl;
	
	}
	
		
}


int main(){
	
	int arr[10]={78,36,2,52,86,35,87,1,749,541};
	
	int len_arr = sizeof(arr)/sizeof(arr[0]);
	
	bubbleSort(arr, len_arr);
	
	printArray(arr,len_arr);
	

	
	return 0;
}