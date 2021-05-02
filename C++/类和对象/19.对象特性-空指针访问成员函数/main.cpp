#include <iostream>
#include <string>
using namespace std;

//空指针调用成员函数
class Person{
	
public:

	void showClassName(){
		
		cout<<"this is Person class"<<endl;
	}
	
	void showPersonAge(){
		
		 if(this==NULL){
			 return;
		 }//防止this为NULL
		
		 cout<<"Age: "<<m_Age<<endl;
  //相当于cout<<"Age: "<<this->m_Age<<endl; this指向了NULL 所以崩了
	}	

	int m_Age;
	
};


void test01(){
	
	Person *p = NULL;
	
	p->showClassName();
	
	p->showPersonAge();
	
}

void test02(){
	

	

}

int main(){
	
	test01();
	//test02();
}