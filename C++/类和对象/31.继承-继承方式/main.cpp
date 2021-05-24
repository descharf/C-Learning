#include <iostream>
#include <string>
using namespace std;

class Base1{
	
public:
	int m_A;
	
protected:
	int m_B;
	
private:
	int m_C;
	
};

class Son1:public Base1{
	
public:
	void func(){
		
		m_A = 10;
		m_B = 10;
		//m_C = 10;//父类私有权限 子类访问不到！
	}
};



void test01(){
	
	
}
int main(){
	
	test01();
	
	return 0;
	
}	