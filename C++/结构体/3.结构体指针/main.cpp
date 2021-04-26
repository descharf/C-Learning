#include <iostream>
#include <string>
using namespace std;

//
struct student{
	
	string name;
	int age;
	int score;
	
};

int main(){
	
	//1.创建学生结构体变量
	struct student s = {"ZS",18,100};
	
	//2.通过指针指向结构体变量
	struct student *p = &s;
	//3.通过指针访问结构体变量中的数据
	//使用 -> 符号
	cout<<p->name
		<<p->age
		<<p->score<<endl;
		
	return 0;
}