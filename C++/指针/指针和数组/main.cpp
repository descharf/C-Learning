#include <iostream>
using namespace std;

int main(){
	
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};

	int * p = arr;//arr就代表数组首地址

	cout<<"利用指针访问第一个元素: "<<*p<<endl;
	
	p++;//让指针向后4字节

	cout<<"利用指针访问第二个元素： "<<*p<<endl;
	
	int * p1 = arr;
	
	//利用指针遍历数组每个元素
	for(int i=0;i<10;i++){
	
		cout<<*p1<<endl;
		p1++;
	}


}
