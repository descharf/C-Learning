#include <iostream>
#include <string>
using namespace std;
//定义学生结构体
struct student{
	
	string name;
	int age;
	int score;
	
};
//1.值传递：不可改变实参
void printStudent1(struct student s){
	
	s.age=100;
	cout<<s.name
		<<s.age
		<<s.score
		<<endl;
	
}
//2.地址传递：可改变实参
void printStudent2(struct student *p){
	
	p->age = 100;
	cout<<p->name
		<<p->age
		<<p->score
		<<endl;

}

int main(){
	
	//结构体做函数参数
	//将学生传入到一个参数中，打印学生身上所有信息
	
	//创建结构体变量
	struct student s;
	s.name="ZS";
	s.age=20;
	s.score=60;
	
	//printStudent1(s);
	
	printStudent2(&s);
	
	cout<<s.age<<endl;
	
	
	
}