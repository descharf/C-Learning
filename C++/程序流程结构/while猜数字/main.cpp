#include <iostream>
using namespace std;
#include <ctime>

int main(){
	
	srand((unsigned int)time(NULL));
	
	int num = rand()%100 +1; 
	
	while(1){
		
		int val=0;
		cin>>val;
	
		if(val<num){
			cout<<"too small"<<endl;
		}
		else if(val>num){
			cout<<"too large"<<endl;
		}
		else{
			cout<<"correct"<<endl;
			break;
		}
		
	}

	
	
}
