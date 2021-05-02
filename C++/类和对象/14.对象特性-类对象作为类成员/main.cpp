#include <iostream>
#include <string>
using namespace std;

//类对象作为成员
class Phone{
	
public:

	Phone(string pName){
		
		cout<<"Phone构造函数调用"<<endl;
		m_PName = pName;
	}
	~Phone(){
		
		cout<<"Phone析构函数调用"<<endl;
	}
	
	string m_PName;
	
};


class Person{

public:
	
	//Phone m_Phone = pName 隐式转换法
	Person(string name, string pName):m_Name(name),m_Phone(pName){
		
		cout<<"Person构造函数调用"<<endl;
		
	}
	~Person(){
		
		cout<<"Person析构函数调用"<<endl;
		
	}
	string  m_Name;
	
	Phone m_Phone;
	

};
//当其他类对象作为本类成员，构造时候先构造类对象，再构造自身，析构顺序与构造相反


void test01(){
	
	Person p("ZS","Iphone12 Pro");
	
	cout<<p.m_Name<<" uses "<<p.m_Phone.m_PName<<endl;
	
}

int main(){
	
	test01();
	//test02();
	
	return 0;
	
}