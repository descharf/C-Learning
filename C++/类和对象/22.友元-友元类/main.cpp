#include <iostream>
#include <string>
using namespace std;


class Building;
class GoodGay{
	
public:
		GoodGay();
		
		void visit();//参观函数 访问Building中的公共属性
		
		Building *building;
};

class Building{
	
	friend class GoodGay;
	
public:
	Building();
public:

	string m_SittingRoom;
private:
	string m_BedRoom;
};

//类外写成员函数
Building::Building(){
	
	m_SittingRoom = "SittingRoom";
	m_BedRoom = "BedRoom";
}
GoodGay::GoodGay(){
	
	//创建Building对象
	building = new Building;
}

void GoodGay::visit(){
	
	cout<<"GoodGay is visiting： "<<building->m_SittingRoom<<endl;
	cout<<"GoodGay is visiting： "<<building->m_BedRoom<<endl;
}

void test01(){
	GoodGay gg;
	gg.visit();
}
int main(){
	
	test01();
	//test02();
}