#include <iostream>
using namespace std;

//深拷贝与浅拷贝

//总结：如果属性有在堆区开辟的，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题
//（如：double free问题，一块内存被二次清空）
class Person{
public:	
		
		Person(){
			
			cout<<"Person默认构造函数调用"<<endl;
		}
		
		Person(int age, int height){
			
			m_Age = age;
			m_Height = new int(height);//new返回的是值对应的指针
			cout<<"Person有参构造函数调用"<<endl;
			
		}
		
		//自己实现一个拷贝构造函数 解决浅拷贝带来的问题
		Person(const Person &p){
			
			cout<<"拷贝构造函数调用"<<endl;
			m_Age = p.m_Age;
			//m_Height = p.m_Height;//编译器默认实现就是这行代码（浅拷贝）
			//深拷贝操作
			m_Height = new int(*p.m_Height);
			
		}
		
		~Person(){
			//析构代码，将堆区开辟的数据做释放操作	
			if(m_Height!=NULL){
				
				delete m_Height;
				m_Height = NULL;
			}
			cout<<"Person析构函数调用"<<endl;
		}
		
		int m_Age;
		int *m_Height;
};

void test01(){
	
	Person p1(18, 160);
	cout<<"p1年龄： "<<p1.m_Age<<"p1身高 ： "<<*p1.m_Height<<endl;
	
	Person p2(p1);
	cout<<"p2年龄： "<<p2.m_Age<<"p2身高 ： "<<*p2.m_Height<<endl;
}

int main(){
	
	test01();
	//test02();
	
	return 0;
	
}