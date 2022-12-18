#include<iostream>
using namespace std;
int main(){
	// init 
	// cond check
	// updation 
	// int i = 0; // init
	// while(i < 11){ // cond
	// 	cout<<i<<" ";
	// 	i++; // updation
	// }
	// cout<<endl;
	// for(initialization ; condition check ; updation) {}
	int i = 1; // init
	while(true){
		if(i >= 11){ // condition check
			break;
		}
		cout<<i<<" ";
		i++;
	}
	// for(;;){
	// 	if(i >= 11){ // condition check
	// 		break;
	// 	}
	// 	cout<<i<<" ";
	// 	i++;
	// }
	cout<<endl;
	return 0;
}