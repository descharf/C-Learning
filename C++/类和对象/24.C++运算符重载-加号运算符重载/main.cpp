#include <iostream>
#include <string>
using namespace std;

//加号运算符重载

class Person{
	
public:
	
	
	//1.成员函数重载加号
//	Person operator+(Person &p){
//		
//		Person temp;
//		temp.m_A = this->m_A + p.m_A;
//		temp.m_B = this->m_B + p.m_B;
//		return temp;
//	}
	
	int m_A;
	int m_B;
};
//2.全局函数重载加号
Person operator+(Person &p1, Person &p2){
	
	Person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
	
}

//函数重载的版本
Person operator+(Person &p1, int num){
	
	Person temp;
	temp.m_A=p1.m_A + num;
	temp.m_B=p1.m_A + num;
	return temp;
	
}

void test01(){
	
	Person p1;
	p1.m_A = 10;
	p1.m_B = 10;
	Person p2;
	p2.m_A = 10;
	p2.m_B = 10;
	int num = 10;
	
	//成员函数本质调用
	//Person p3 = p1.Person operator+(p2);
	//全局函数重载的本质调用
	//Person p3 = Person operator+(p1, p2);
	
	Person p3 = p1 + p2;
	//Person p3= p1 + num;
	
	cout<<"data of p3: "<<p3.m_A<<" "<<p3.m_B<<endl;
	
}





int main(){
	
	test01();
}	