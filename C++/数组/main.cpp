#include <iostream>
using namespace std;

int main(){
	
	int arr[5]={1,2,3,4,5};
	
	cout<<sizeof(arr)<<endl;
	cout<<sizeof(arr[0])<<endl;
	
	cout<<(long int)arr<<endl;
	cout<<(long int)&arr[0]<<endl;
	cout<<(long int)&arr[1]<<endl;
	
	

}