#include <iostream>
#include <string>
using namespace std;


//
struct student{
	
	string name;
	int age;
	int score;
	
};
//
struct teacher{
	
	int id;
	string name;
	int age;
	struct student stu;
	 
};











int main(){
	
	teacher t;
	t.id = 10000;
	t.name = "LW";
	t.age = 50;
	t.stu.name = "XW";
	t.stu.age = 20;
	t.stu.score = 60;
	
	cout<<t.name
		<<t.age
		<<t.id
		<<t.stu.name
		<<t.stu.age
		<<t.stu.score
		<<endl;
	
	
	return 0;
}