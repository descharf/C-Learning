#include <iostream>
using namespace std;
#include <string> 


class C1{
	
	int m_A;//默认权限实私有
};

struct C2{
	
	int m_A;//默认权限是公共

};

int main(){
	
	C1 c1;
	//c1.m_A = 100; //class默认私有权限，不可访问
	
	
	C2 c2;
	c2.m_A = 100; //struct默认实公共权限，可访问
	
	
	return 0;
}
