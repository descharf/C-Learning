#include <iostream>
#include <string>
using namespace std;

//常函数
class Person{

public:
	
	//this指针本质 是指针常量 指针的指向不可以修改的
	//const Person *const this;
	void showPerson() const{//此const相当于 上一行最左的const，让指针指向的值也不可修改
		
		//m_A = 100;
		this ->m_B = 100;
		//this = NULL;
	}	
	
	void func(){
		
		m_A = 100;
	}

    int m_A = 0;
	mutable int m_B = 0; //特殊变量，即使在常函数中，也可以修改这个值,加关键字mutable
	
};

void test01(){
	
	
	Person p;
	p.showPerson();
	
}


//常对象
void test02(){
	
	
	const Person p; //在常对象前加const，变为常对象 
	//注意！ class Person中属性如果没有初始化值，此处会报错，因为const Person p 的属性不可更改且没有初值
	//普通的Person p 的属性系统会赋初值
	
	//p.m_A = 100; 不可
	p.m_B = 100;//可 m_B是特殊值，在常对象下也可以修改
	
	//常对象只能调用常函数
	p.showPerson();
	//p.func(); //常对象 不可以调用普通成员函数，因为普通成员函数可以修改属性
	
}

int main(){
	
	//test01();
	test02();
}