#include <iostream>
using namespace std;

const double PI=3.14;

//设计一个圆类，求圆的周长
//圆的周长公式：2*PI*半径


class Circle{
	//访问权限
	//公共权限
public:
	//属性
	//半径
	int m_r;
	
	//行为
	//获取圆的周长
	double calculate_perimeter(){
		
		return 2*PI*m_r;
	}
};

int main(){
	
	//通过圆类创建具体的圆（对象）
	Circle c1;
	//给圆对象的属性进行赋值
	c1.m_r = 10;
	
	cout<<"perimeter of the circle: "<<c1.calculate_perimeter()<<endl;
	
	
	return 0;
}