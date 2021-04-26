#include <iostream>
using namespace std;

int main(){
	

	int a = 10;
	int b = 10;

	//1.常量指针：指针指向可以改 指针指向的值不可以改
	const int * p = &a;

	// *p = 20 //not possible!
	p = &b; //possible

	//2.指针常量：指针指向不可以改 指针指向的值可以改
	int * const p= &a;
	*p=20;
	//p=&b; //not possible!
	
	//3.都不可改：
	const int * const p = &a;



	return 0;
}

