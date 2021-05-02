#include <iostream>
using namespace std;
#include <string> 

class Cube{



public:
	//行为
	//获取长宽高
	void setL(int l){
		
		m_L = l;
	}
	int getL(){
		
		return m_L;
	}
	
	void setW(int w){
		
		m_W = w;
	}
	int getW(){
		
		return m_W;
	}
	
	void setH(int h){
		
		m_H = h;
	}
	int getH(){
		
		return m_H;
	}
	
	
	//获取表面积
	int calculateS(){
		
		return 2*m_L*m_W+2*m_L*m_H+2*m_W*m_H;
	}
	
	//获取体积
	int calculateV(){
		
		return m_L*m_W*m_H;
		
	}
	bool isSameByClass(Cube &c){
		if(m_L==c.getL() && m_W==c.getW() && m_H==c.getH()){
		return true;
	}
	return false;
		
	}
	
private:	
	//属性
	int m_L;
	int m_W;
	int m_H;
	
};

bool isSame(Cube &c1, Cube &c2){
	
	if(c1.getL()==c2.getL() && c1.getW()==c2.getW() && c1.getH()==c2.getH()){
		return true;
	}
	return false;
}









int main(){
	
	Cube c1;
	Cube c2;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);
	
	c2.setL(10);
	c2.setW(10);
	c2.setH(30);
	
	cout<<"superficial area of c1= "<<c1.calculateS()<<endl;
	cout<<"volume of c1= "<<c1.calculateV()<<endl;
	
	bool ret = isSame(c1,c2);
	if(ret){
		
		cout<<"c1==c2"<<endl;
	}
	else{
		
		cout<<"c1!=c2"<<endl;
	}
	
	bool ret1 = c1.isSameByClass(c2);
	if(ret1){
		
		cout<<"c1==c2"<<endl;
	}
	else{
		
		cout<<"c1!=c2"<<endl;
	}	
		
	
	
	return 0;
}