#include <iostream>
using namespace std;
#include <string> 

//访问权限
//三种
//公共权限 public      成员 类内可以访问 类外可以访问
//保护权限 protected   成员 类内可以访问 类外不可以访问 儿子也可以访问父亲中的保护内容
//私有权限 private     成员 类内可以访问 类外不可以访问 儿子不可以访问父亲的私有内容

class Person{

public:	
	//公共权限
	string m_Name;

protected:
	//保护权限
	string m_Car;
	
private:
	int m_Password;
	
public:
	void func(){
		//类内可以访问所有属性
		m_Name = "ZS";
		m_Car = "Tractor";
		m_Password = 123456;
	}
	
	
};

int main(){
	
	Person p1;
	
	p1.m_Name = "LS";
	
	//p1.m_Car = "Benz"; 保护权限的内容在类外访问不到
	
	//.m_Password = 123; 私有权限的内容在类外访问不到
	
	return 0;
}