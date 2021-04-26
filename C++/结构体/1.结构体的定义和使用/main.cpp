#include <iostream>
using namespace std;
#include <string>
//1.创建学生数据类型
//自定义数据类型，一些类型集合组成的一个类型
//语法 struct 类型名称

//定义结构体时struct不可省略！
//创建结构体变量时struct可以省略
struct Student
{
	//成员列表
	
	//姓名
	string name;
	//年龄
	int age;
	//分数
	int score;
	
}s3 = {"wang5", 40, 90}; //2.3 顺便创建结构体变量

//2.通过学生类型创建具体学生

int main(){

//2.1 struct Student s1

	struct Student s1;
	//给s1属性赋值，通过.访问结构体变量中的属性
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;
	
	
	
//2.2 struct Student s2 = {...}
	struct Student s2={"Lisi", 19, 80};
	cout<<s1.name<<s1.age<<s1.score<<endl;
	cout<<s2.name<<s2.age<<s2.score<<endl;
	cout<<s3.name<<s3.age<<s3.score<<endl;
//2.3在定义结构体时顺便创建结构体变量	
	
	
	return 0;
}