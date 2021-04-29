//-封装函数显示页面 如 void showMenu（）
//-在main函数中调用封装好的函数
#include <iostream>
#include <string>
using namespace std;
#define MAX 1000
//设计联系人结构体
struct Person{
	
	string m_Name;
	
	int m_Sex;
	
	int m_Age;
	
	string m_Phone;
	
	string m_Adr;
	
	
};

struct AddressBooks{
	
	//通讯录中保存的联系人数组
	struct Person personArray[MAX];
	//通讯录中当前记录的个数
	int m_Size;
	
};

//1.添加联系人
void addPerson(AddressBooks *abs){
	
	
	//通讯录是否已满
	if(abs->m_Size == MAX){
		
		cout<<"通讯录已满！"<<endl;
		
	}
	else{
		
		// 添加具体联系人
		
		string name;
		cout<<"请输入姓名： "<<endl;
		//cin>>name;
		
		getline(cin, name);
		
		abs->personArray[abs->m_Size].m_Name = name;
		
		cout<<"请输入性别： "<<endl;
		cout<<"1--男"<<endl;
		cout<<"2--女"<<endl;
		int sex = 0;
		
		while(true){
			
			cin>>sex;
			
			if(sex ==1||sex==2){
				
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
		
			}
			cout<<"输入有误，请重新输入"<<endl;
			
		}
		
		cout<<"请输入年龄： "<<endl;
		int age=0;
		cin>>age;
		abs->personArray[abs->m_Size].m_Age = age;
		
		cout<<"请输入联系电话： "<<endl;
		string num = "";
		cin>>num;
		abs->personArray[abs->m_Size].m_Phone = num;
		
		cout<<"请输入家庭住址： "<<endl;
		string adress="";
		
		cin.ignore();
		getline(cin, adress);//在getline中，不会残留 \/n. 之后不需要cin.ignore.
		abs->personArray[abs->m_Size].m_Adr = adress;
		
		abs->m_Size++;
		
		cout<<"添加成功！"<<endl;
		
		cout << "Press enter to continue ..."<<endl;
		
		//cin.ignore();
		
		cin.get();
		//or //int c = getchar();
		system("clear");
    
		
		
		
	}
}

//2.显示联系人
void showPerson(AddressBooks *abs){
	
	if(abs->m_Size==0){
		
		cout<<"当前通讯录为空"<<endl;
	}
	else{
		
		for(int i=0; i<abs->m_Size;i++){
			
			//string sex = (abs->personArray[abs->m_Size].m_Sex)>1?;
			
			cout<<"姓名： "<<abs->personArray[i].m_Name
				<<" 性别： "<<(abs->personArray[i].m_Sex==1?"男":"女")
				<<" 年龄： "<<abs->personArray[i].m_Age
				<<" 电话: "<<abs->personArray[i].m_Phone
				<<" 住址： "<<abs->personArray[i].m_Adr<<endl;
		}
	}
	cout << "Press enter to continue ..."<<endl;
	cin.get();
	system("clear");

	
}

//检测联系人是否存在，如果存在，返回联系人所在数组中具体位置，不存在，返回-1.
int isExist(AddressBooks *abs, string name){
	
	for(int i=0; i< abs->m_Size; i++){
		
		if(abs->personArray[i].m_Name == name){
			
			return i;
		}
	}
	return -1;
}

void deletePerson(AddressBooks *abs){
	cout<<"请输入删除联系人姓名： "<<endl;
	string name;
	getline(cin,name);
	if(isExist(abs,name)==-1){
				
		cout<<"查无此人"<<endl;
				
	}
	else{
		cout<<"找到此人"<<endl;
		for(int i=isExist(abs,name);i<(abs->m_Size);i++){
			
			abs->personArray[i]= abs->personArray[i+1];
			
			
		}
		abs->m_Size--;
		cout<<"删除成功！"<<endl;
	}
	
	cout<<"Press enter to continue ..."<<endl;
	cin.get();
	system("clear");
	
	
}

void findPerson(AddressBooks *abs){
	
	cout<<"请输入您要查找的联系人"<<endl;
	string name;
	getline(cin,name);
	
	int ret = isExist(abs, name);
	
	if(ret!=-1){
		
		cout<<"姓名： "<<abs->personArray[ret].m_Name
			<<" 性别： "<<(abs->personArray[ret].m_Sex==1?"男":"女")
			<<" 年龄： "<<abs->personArray[ret].m_Age
			<<" 电话: "<<abs->personArray[ret].m_Phone
			<<" 住址： "<<abs->personArray[ret].m_Adr<<endl;
	}
	else{
		cout<<"查无此人"<<endl;
	}
	
	cout<<"Press enter to continue ..."<<endl;
	cin.get();
	system("clear");
	
	
}
void modifyPerson(AddressBooks *abs){
	
	cout<<"请输入您要寻找的联系人： "<<endl;
	string name;
	getline(cin, name);
	
	int ret = isExist(abs, name);
	
	if (ret!=-1){
		
		string name;
		cout<<"请输入姓名： "<<endl;
		//cin>>name;
		
		getline(cin, name);
		
		abs->personArray[ret].m_Name = name;
		
		cout<<"请输入性别： "<<endl;
		cout<<"1--男"<<endl;
		cout<<"2--女"<<endl;
		int sex = 0;
		
		while(true){
			
			cin>>sex;
			
			if(sex ==1||sex==2){
				
				abs->personArray[ret].m_Sex = sex;
				break;
		
			}
			cout<<"输入有误，请重新输入"<<endl;
			
		}
		
		cout<<"请输入年龄： "<<endl;
		int age=0;
		cin>>age;
		abs->personArray[ret].m_Age = age;
		
		cout<<"请输入联系电话： "<<endl;
		string num = "";
		cin>>num;
		abs->personArray[ret].m_Phone = num;
		
		cout<<"请输入家庭住址： "<<endl;
		string adress="";
		
		cin.ignore();
		getline(cin, adress);//在getline中，不会残留 \/n. 之后不需要cin.ignore.
		abs->personArray[ret].m_Adr = adress;
		
		cout<<"修改成功!"<<endl;
		
	}
	else{
		
		cout<<"查无此人"<<endl;
	}
	cout<<"Press enter to continue ..."<<endl;
	cin.get();
	system("clear");
	
	
}
void cleanPerson(AddressBooks *abs){
	abs->m_Size = 0;
	cout<<"通讯录已清空"<<endl;
	
	cout<<"Press enter to continue ..."<<endl;
	cin.get();
	system("clear");
	
}
//1.菜单界面
void showMenu(){
	
	cout<<"****************************"<<endl;
	cout<<"*****   1.添加联系人   *****"<<endl;
	cout<<"*****   2.显示联系人   *****"<<endl;
	cout<<"*****   3.删除联系人   *****"<<endl;
	cout<<"*****   4.查找联系人   *****"<<endl;
	cout<<"*****   5.修改联系人   *****"<<endl;
	cout<<"*****   6.清空联系人   *****"<<endl;
	cout<<"*****   0.退出通讯录   *****"<<endl;
	cout<<"****************************"<<endl;
	
}

int main(){
	
	//创建通讯录结构体变量
	struct AddressBooks abs;
	
	//初始化通讯录中当前人数
	abs.m_Size = 0;
	
	
	int select = 0; //创建用户选择输入变量

	//菜单调用
	while(true){
		
		showMenu();
	
		cin>>select;
		cin.ignore();
		switch(select){
		
		case 1://1.添加联系人
			addPerson(&abs);//利用地址传递可以修饰实参
			break;
		case 2://2.显示联系人 
			showPerson(&abs);
			break;
		case 3://3.删除联系人
			deletePerson(&abs);
			break;
		case 4://4.查找联系人
			findPerson(&abs);
			break;
		case 5://5.修改联系人
			modifyPerson(&abs);
			break;
		case 6://6.清空联系人
			cleanPerson(&abs);
			break;
		case 0://0.退出通讯录
			cout<<"欢迎下次使用"<<endl;
			//cout<<abs.m_Size<<endl;
			return 0;
			break;
	
		default:
			return 0;
			break;
		}
		
	}
	
	return 0;
}