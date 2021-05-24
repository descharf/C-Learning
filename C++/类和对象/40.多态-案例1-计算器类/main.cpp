#include <iostream>
using namespace std;
#include <string>

//分别利用普通写法 和多态技术实现计算器

//普通写法

class Calculator{
	
public:

	int getResult(string oper){
		
		if (oper =="+"){
			
			return m_Num1 + m_Num2;
		
		}
		else if(oper == "-"){
			
			return m_Num1 - m_Num2;
		}
		else if(oper == "*"){
			
			return m_Num1 * m_Num2;
		}
		//如果想扩展新功能，需要修改原码
		//在真实开发中 提倡 开闭原则
		//开闭原则：对扩展进行开放，对修改进行关闭
	}

	int m_Num1;//操作数1
	int m_Num2;//操作数2
};

void test01(){
	
	//创建计算器对象
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;
	
	cout<<c.m_Num1 <<"+"<<c.m_Num2<<"="<<c.getResult("+")<<endl;
	
	cout<<c.m_Num1 <<"-"<<c.m_Num2<<"="<<c.getResult("-")<<endl;
	
	cout<<c.m_Num1 <<"*"<<c.m_Num2<<"="<<c.getResult("*")<<endl;
}

//利用多态实现计算器
//多态好处：
//1.组织结构清晰
//2.可读性强

//实现计算器的抽象类
class AbstractCalculator{
	
public:
	virtual int getResult(){
		
		return 0;
	}
	
	int m_Num1;
	int m_Num2;
};

//加法计算器类
class AddCalculator: public AbstractCalculator{
	
public:

	int getResult(){
		
		return m_Num1 + m_Num2;
	}
};

//减法
class SubCalculator: public AbstractCalculator{
	
public:

	int getResult(){
		
		return m_Num1 - m_Num2;
	}
};

//乘法
class MulCalculator: public AbstractCalculator{
	
public:

	int getResult(){
		
		return m_Num1 * m_Num2;
	}
};

void test02(){
	
	//多态使用条件
	//父类指针或者引用指向子类对象
	
	//加法运算
	//指针版*
	AbstractCalculator* abc = new AddCalculator;
	cout<<(int long)abc<<endl;
	cout<<(int long)&abc<<endl;
	abc->m_Num1 =10;
    abc->m_Num2 =20;
	cout<<abc->m_Num1<<"+"<<abc->m_Num2<<"="<<abc->getResult()<<endl;
	//用完后记得销毁
	delete abc;//销毁了abc数据 指针地址还在
	
//  引用版&	
//	AddCalculator add;
//	AbstractCalculator& abc = add;
//	
//	abc.m_Num1 =10;
//	abc.m_Num2 =20;
//	
//	cout<<abc.m_Num1<<"+"<<abc.m_Num2<<"="<<abc.getResult()<<endl;
	
	//减法运算
	abc = new SubCalculator;
	abc->m_Num1 =10;
    abc->m_Num2 =20;
	cout<<abc->m_Num1<<"-"<<abc->m_Num2<<"="<<abc->getResult()<<endl;
	//用完后记得销毁
	delete abc;
	
	//乘法运算
	abc = new MulCalculator;
	abc->m_Num1 =10;
    abc->m_Num2 =20;
	cout<<abc->m_Num1<<"*"<<abc->m_Num2<<"="<<abc->getResult()<<endl;
	

}

int main(){
	
	//test01();
	test02();
	
	return 0;
}
