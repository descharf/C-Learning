#include <iostream>
#include <string>
using namespace std;

//左移运算符重载


class Person{
	
public:
	// 利用成员函数重载左移运算符 p.operator<<(cout) 简化版本 p<<cout
	//不会利用成员函数重载 <<运算符 因为无法实现cout在左侧
	//void operator<<(cout)
	int m_A;
	int m_B;
};

//只能利用全局函数重载左移运算符

ostream& operator<<(ostream& cout,Person& p){//本质 operator<<(cout, p), 简化 cout<<p
	
	cout<< "data of person:"<<p.m_A<<" "<<p.m_B;
	return cout;
}

void test01(){
	
	Person p;
	p.m_A=10;
	p.m_B=10;
	
	cout<<p<<endl;
}
int main(){
	
	test01();
}	