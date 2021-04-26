#include <iostream>
using namespace std;

//1.值传递：不可修改实参
void swap01(int a, int b){
	
	int temp = a;
	a = b;
	b = temp;
}
//2.地址传递：可修改实参
void swap02(int *p1, int *p2){

	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

}
int main(){

	int a = 10;
	int b = 20;

	swap01(a,b);
		
	cout<<"using swap01 a= "<<a<<" b= "<<b<<endl;
	
	swap02(&a,&b);

	cout<<"using swap02 a= "<<a<<" b= "<<b<<endl;

	return 0;





}
