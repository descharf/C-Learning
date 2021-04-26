#include <iostream>
#include <string>
using namespace std;


//const使用场景

struct student{
	
	string name;
	int age;
	int score;
	
};

void printStudents(const struct student *s){
	
	
	//s->age = 150; //加入const后，一旦有修改就会报错，防止误操作
	cout<<s->name
		<<s->age
		<<s->score
		<<endl;
}


int main(){
	
	//创建结构体变量
	struct student s = {"LS",15,70};
	
	//通过函数打印结构体变量信息
	
	printStudents(&s);
	
	return 0;
}