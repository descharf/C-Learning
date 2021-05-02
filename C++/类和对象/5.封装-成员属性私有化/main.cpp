#include <iostream>
using namespace std;
#include <string> 

//成员属性设置为私有
//1.可以自己控制数据读写权限
//2.对于写可以检测数据的有效性


class Person{

public:
	//设置姓名
	void setName(string name){
		
		m_Name = name;
	}
	//获取姓名
	string getName(){
	    return m_Name;
	}
	//获取年龄 可读可写 范围0-150
	void setAge(int age){
		
		if(age<0||age>150){
			m_Age = 0;
			cout<<"你这个老妖精!"<<endl;
			return;
		}
		m_Age = age;
	}
	
	int getAge(){
		
		return m_Age;
	}
	//设置情人 只写
	void setLover(string Lover){
		m_Lover = Lover;
	}
	
	
private:
	//姓名 可读可写
	string m_Name;
	//年龄 只读
	int m_Age;
	//情人 只写
	string m_Lover;

};

int main(){
	 
	 Person p;
	 //p.m_Name = "ZS";
	 
	 p.setName("ZS");
	 cout<<"Name: "<<p.getName()<<endl;
	 
	 p.setAge(18);
	 cout<<"Age: "<<p.getAge()<<endl;
	 
	 p.setLover("cang_jng");
	 
	 return 0;
}