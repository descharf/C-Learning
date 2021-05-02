#include <iostream>
#include <string>
using namespace std;

//1.解决名称冲突

//2.返回对象本身用*this
class Person{
	
public:
	Person(int age){
		
		//this指针指向 被调用的成员函数所属的对象（p1）
		this->age = age;//此处this为指向p1的指针
		
	}
	
	Person& PersonAddAge(Person &p){//如果此处返回的是值Person(值传递)，则会调用拷贝构造函数
	//每次返回新建一个p2 p2本身的数据不会发生改变！
		
		this->age += p.age;
		
		return *this;//this是指向p2的指针，*this解引用就是p2本身
	}
	
	int age;
	
};


void test01(){

	Person p1(18);
	cout<<"age: "<<p1.age<<endl;
}

void test02(){
	
	Person p1(10);
	
	Person p2(10);
	//链式编程思想
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	
	cout<<"age of p2: "<<p2.age<<endl;
	
}

int main(){
	
	//test01();
	test02();
}