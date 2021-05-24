#include <iostream>
#include <string>
using namespace std;

class Building;
class GoodGay{
	
public:
		GoodGay();
		
		void visit();//让visit可以访问Building的私有成员
		void visit2();//让visit2不可以访问Building的私有成员
		
		Building *building;
};
class Building{
	
	//告诉编译器 GoodGay类下的visit成员函数作为本类的好朋友，可以访问私有成员
	friend void GoodGay::visit();

public:
	Building();
public:
	string m_SittingRoom;
private:	
	string m_BedRoom;
	
};

//类外实现成员函数
Building::Building(){
	
	m_SittingRoom = "SittingRoom";
	m_BedRoom ="BedRoom";
	
}
GoodGay::GoodGay(){
	
	building = new Building;
}

void GoodGay::visit(){
	
	cout<<"visit is visiting: "<<building->m_SittingRoom<<endl;
	cout<<"visit is visiting: "<<building->m_BedRoom<<endl;
}
void GoodGay::visit2(){
	
	cout<<"visit2 is visiting: "<<building->m_SittingRoom<<endl;
	
}
void test01(){
	GoodGay gg;
	gg.visit();
	gg.visit2();
}
int main(){
	
	test01();
}	