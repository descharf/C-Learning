#include <iostream>
#include <string>
using namespace std;


//赋值运算符重载

class Person{
	
public:
	
	Person(int age){
		
		m_Age = new int(age);
	}
	
    ~Person(){
		
		if(m_Age !=NULL){
			
			delete m_Age;
			m_Age = NULL;
		}
	}
	
	Person& operator=(Person& p){
		//编译器提供浅拷贝
		//m_Age = p.m_Age;
		
		//应该先判断是否有属性在堆区 如果有 先释放干净 然后再深拷贝
		//理解：比如p1 = p2 时先擦干净p1堆区数据 再给p1新建堆区地址写入p2数据 实现深拷贝
		if (m_Age != NULL){
			
			delete m_Age;
			m_Age = NULL;
		}
		//深拷贝
		m_Age = new int(*p.m_Age);
		
		//返回对象本身
		return *this;
	}
	
	int *m_Age;
	
};

void test01(){
	
	Person p1(18);
	
	Person p2(20);
	
	Person p3(30);
	
	p3 = p2 = p1;//赋值操作
	
	cout<<"p1年龄为： "<<*p1.m_Age<<endl;
	
	cout<<"p2年龄为： "<<*p2.m_Age<<endl;
	
	cout<<"p3年龄为： "<<*p3.m_Age<<endl;
	
}

void test02(){
	
	
	
}
int main(){
	
	test01();
	//test02();
	
}	