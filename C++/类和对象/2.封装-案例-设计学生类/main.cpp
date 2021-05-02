#include <iostream>
using namespace std;
#include <string> 


class Student{
	
public:

	//属性
	string m_Name;
	int m_Id;
	
public:
	//行为
	//显示姓名学号
	void showStudent(){
		
		cout<<"Name: "<<m_Name<<endl;
		cout<<"Id: "<<m_Id<<endl;
	}
	void setName(string name){
		
		m_Name = name;
	}
	void setId(int Id){
		
		m_Id = Id;
	}

};

int main(){
	
	
	//实例化对象
	Student s1;
	
	//给s1进行属性赋值操作
	s1.m_Name = "ZS";
	s1.m_Id = 1;
	
	//显示学生信息
	s1.showStudent();

	//给姓名赋值
	s1.setName("LS");
	s1.setId(2);
	
	s1.showStudent();

	return 0;
}