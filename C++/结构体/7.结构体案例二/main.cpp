#include <iostream>
#include <string>
using namespace std;

struct Hero{
	
	string name;
	int age;
	string sex;
	
};


void printInfo(struct Hero heroArray[], int len){
	
	for (int i=0; i<len;i++){
		
		cout<<heroArray[i].name<<" "<<heroArray[i].age<<endl;
		
	}
}

void ageBubbleSort(struct Hero heroArray[], int len){
	
	for(int i = 0;i<len-1; i++){
		
		for(int j=0; j<len-i-1; j++){
			
			if(heroArray[j].age > heroArray[j+1].age){
				
				struct Hero temp = heroArray[j];
				heroArray[j]=heroArray[j+1];
				heroArray[j+1]= temp;
			}
			
		}
		
	}
	
	
}










int main(){
	
	//1.设计英雄结构体
	struct Hero heroArray[5]={
		
		{"LB",23,"male"},
		{"GY",22,"male"},
		{"ZF",20,"male"},
		{"ZY",21,"male"},
		{"DC",19,"female"},
	};
	
	int len = sizeof(heroArray)/sizeof(heroArray[0]);
	
	printInfo(heroArray,len);
	
	ageBubbleSort(heroArray,len);
	
	printInfo(heroArray,len);
	
	
	
}