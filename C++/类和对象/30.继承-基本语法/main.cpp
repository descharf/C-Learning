#include <iostream>
#include <string>
using namespace std;

//普通实现页面

//Java页面


//class Java{
//	
//public:
//	void header(){
//		
//		cout<<"start page..."<<endl;
//	}
//	
//	void footer(){
//		
//		cout<<"help center..."<<endl;
//	}
//	void left(){
//		
//		cout<<"Java C++..."<<endl;
//	}
//	void content(){
//		
//		cout<<"Java videos"<<endl;
//	}
//};
//
////
//class Python{
//	
//public:
//	void header(){
//		
//		cout<<"start page..."<<endl;
//	}
//	
//	void footer(){
//		
//		cout<<"help center..."<<endl;
//	}
//	void left(){
//		
//		cout<<"Java C++..."<<endl;
//	}
//	void content(){
//		
//		cout<<"Python videos"<<endl;
//	}	
//	
//};
//
////c++
//class Cpp{
//	
//public:
//	void header(){
//		
//		cout<<"start page..."<<endl;
//	}
//	
//	void footer(){
//		
//		cout<<"help center..."<<endl;
//	}
//	void left(){
//		
//		cout<<"Java C++..."<<endl;
//	}
//	void content(){
//		
//		cout<<"C++ videos"<<endl;
//	}	
//	
//	
//};

//继承实现页面

//公共页面类
class BasePage{
public:
	void header(){
		
		cout<<"start page..."<<endl;
	}
	
	void footer(){
		
		cout<<"help center..."<<endl;
	}
	void left(){
		
		cout<<"Java C++..."<<endl;
	}
	
	
};

//继承的好处：减少重复的代码
//语法： class 子类: 继承方式 父类
//子类也成为派生类 
//父类也称为基类

//Java页面  
class Java : public BasePage{
	
public:
	void content(){
		
		cout<<"Java videos"<<endl;
	}
	
};

class Python : public BasePage{
	
public:
	void content(){
		
		cout<<"Python videos"<<endl;
	}
	
};

class Cpp : public BasePage{
	
public:
	void content(){
		
		cout<<"C++ videos"<<endl;
	}
	
};


void test01(){
	
	cout<<"Java download page: "<<endl;
	
	Java ja;
	
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	
	cout<<"----------------------------"<<endl;
	cout<<"Python download page: "<<endl;
	Python py;
	
	py.header();
	py.footer();
	py.left();
	py.content();	
	
	cout<<"----------------------------"<<endl;
	cout<<"C++ download page: "<<endl;
	Cpp cpp;
	
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();	
	
	
}
int main(){
	
	test01();
	
	return 0;
	
}	