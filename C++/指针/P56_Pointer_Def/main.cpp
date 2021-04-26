#include <iostream>
using namespace std;

int main(){
	
	//def Pointer:
	int a = 10;

	int * p;

	p = &a;

	cout<<"Address of a:"<<&a<<endl;
	cout<<"Pointer p is:"<<p<<endl;
	
	*p=1000;
	cout<<"*p= "<<*p<<endl;
	cout<<"a= "<<a<<endl;

	//Space of Pointer:
	cout<<"Size of int *= "<<sizeof(int *)<<endl;
	cout<<"Size of float *= "<<sizeof(float *)<<endl;
	cout<<"Size of double *= "<<sizeof(double *)<<endl;
	cout<<"Size of char *= "<<sizeof(char *)<<endl;

}
