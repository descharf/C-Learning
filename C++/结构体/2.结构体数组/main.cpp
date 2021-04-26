#include <iostream>
#include <string>
using namespace std;
//1.定义结构体
struct student{
	
	string name;
	int age;
	int score;
	
};

int main(){
//2.创建结构体数组	
	struct student arr[3]{
		
		{"ZS",18,63},
		{"LS",19,65},
		{"WW",80,60}
	};
//3.给结构体数组种元素赋值	
	arr[2].name = "ZL";
//4.遍历结构体数组
	for(int i=0;i<3;i++){
		
		cout<<arr[i].name
		    <<arr[i].age
			<<arr[i].score<<endl;
	}	
	
	
	
	return 0;
}