#include <iostream>
using namespace std;
//一，函数默认参数
//1.如果某个位置参数有默认值，那么从这个位置往后，从左往右，必须有默认值
//2.如果函数声明有默认值，函数实现的时候就不能有默认参数
int func(int a, int b=20, int c=30){
	
	return a+b+c;
	
}


//二，函数占位参数
//占位参数可以有默认参数
void func(int a, int, int =10){
	
	cout<<"this is a func"<<endl;
}

//三.一，函数重载

//作用：函数名可以相同，提高复用性

//函数重载满足条件：
	//同一作用域下
	//函数名称相同
	//函数参数类型不同 或者个数不同 或者顺序不同
//注意：函数返回值不可以作为函数重载条件

void func(){
	
	cout<<"this is a func"<<endl;
}

void func(int a){
	
	cout<<"this is a func"<<endl;
}

void func(double a){
	
	cout<<"this is a func"<<endl;
}

void func(int a, double b){
	
	cout<<"this is a func"<<endl;
}

void func(double a,int b){
	 
	cout<<"this is a func"<<endl;
}

//返回值不可以作为重载条件！
int func(int a, double b){
	
	cout<<"this is a func"<<endl;
	return 0;
}


//三.二 函数重载注意事项

//1.引用作为重载条件
void func(int &a){
	
	cout<<"this is a func"<<endl;
}

void func(const int &a){
	
	cout<<"this is a func"<<endl;
}


int main(){
	
	int a = 10;//调用 func(int &a)
	func(a);
	
	func(10);//调用 func(const int &a)
	
	
	
	return 0;
}

//2.函数重载碰到默认参数

void func(int a, int b=10){
	
	cout<<"this is a func"<<endl;
}

void func(int a){
	
	cout<<"this is a func"<<endl;
}

int main(){
	
	int a = 10;
	func(a);//编译器此时不知道该调用哪个func
	
	return 0;
}


