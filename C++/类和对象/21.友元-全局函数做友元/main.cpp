#include <iostream>
#include <string>
using namespace std;


class  Building{
	//goodGay全局函数 是Building类的好朋友，可以访问Building中私有成员
	friend void goodGay(Building* building);
	
public:
	Building(){
		
		m_SittingRoom = "SittingRoom";
		m_BedRoom = "BedRoom";
	}
	
public:
	string m_SittingRoom;

private:
	string m_BedRoom;

};

void goodGay(Building* building){
//or//goodGay(Building& building)
	
	cout<<"goodGay is visiting： "<<building->m_SittingRoom<<endl;
	cout<<"goodGay is visiting： "<<building->m_BedRoom<<endl;
}



void test01(){
	
	Building building;
	goodGay(&building);
	//or//goodGay(building);
}

int main(){
	
	test01();
	//test02();
}