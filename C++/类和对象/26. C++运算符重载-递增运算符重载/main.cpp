#include <iostream>
#include <string>
using namespace std;


//重载递增运算符

//自定义整型
class MyInteger{
	friend ostream& operator<<(ostream& cout, MyInteger myint);
	
public:
	MyInteger(){
		
		m_Num = 0;
	}
	
	//重载前置++运算符 返回值一直对一个数据进行递增操作
	MyInteger& operator++(){
		
		//先进行++运算
		m_Num++;
		//再将自身做返回
		return *this;
	}
	
	//重载后置++运算符 
	//int代表占位参数，可以用于区分前置后置递增(只能int double float不可！)
	//加了int编译器就知道这是个后置递增了！
	MyInteger operator++(int){
		
		//先 记录当时结果
		MyInteger temp = *this;
		//后 递增
		m_Num++;
		//最后将记录结果返回
		return temp;
		
//		MyInteger* temp = new MyInteger; (这个是自己写的能返回引用的版本，要在返回值处加&)
//		temp = this;                    //可以实现(myint++)++ 对同一个地址连续递增
//		m_Num++;
//		return *temp;
		
	}
	
private:

	int m_Num;
	
};

ostream& operator<<(ostream& cout, MyInteger myint){
	
	cout<<myint.m_Num;
	return cout;
}

void test01(){
	
	MyInteger myint;
	
	cout<< ++(++myint) <<endl;
	cout<< myint<<endl;
	
	
}

void test02(){
	
	MyInteger myint;
	cout<<(myint++)++<<endl;
	cout<<myint<<endl;
	
}
int main(){
	
	//test01();
	test02();
	
}	