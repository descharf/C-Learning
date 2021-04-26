#include <iostream>
#include <string>
#include <ctime>
using namespace std;

struct student{
	
	string sName;
	int score;
	
};

struct teacher{
	
	string tName;
	
	struct student sArray[5];
	
};

void allocateSpace(struct teacher tArray[],int len){
	
	string nameSeed = "ABCDE";
	//给老师开始赋值
	for(int i = 0;i<len;i++){
		
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];
		
		//通过循环给每名老师的学生进行赋值
		for(int j=0; j<5;j++){
			
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];
			
			int random = rand()%61 +40; //40~100;
			tArray[i].sArray[j].score = random;
		}
	}
	
}

void printInfo(struct teacher tArray[],int len){
//or printInfo(struct teacher *tArray, int len) 
//即接收struct teacher tArray[3] 的首地址，也可以实现传入Array功能
	 
	for(int i=0; i<len; i++){
		
		cout<<"TeacherName: "<<tArray[i].tName<<endl;
		
		for(int j=0; j<5; j++){
			
			cout<<"\tStudentName:"<<tArray[i].sArray[j].sName
				<<" StudentScore: "<<tArray[i].sArray[j].score<<endl;
		}
	}
}

int main(){
	
	//随机数种子 需要引用头文件 #include <ctime>
	srand((unsigned int)time(NULL));
	
	//1.创建三老师数组
	struct teacher tArray[3];
	//2.通过函数给3名老师的信息赋值，
	int len = sizeof(tArray)/sizeof(tArray[0]);
	allocateSpace(tArray, len);
	
	//3.打印所有老师及其学生的信息
	printInfo(tArray, len);
	

	
	return 0;
}