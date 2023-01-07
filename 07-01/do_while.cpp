#include<iostream>
using namespace std;
int main(){
	// syntax
	/* 
	do{
		// task 
	}while(condition);
	*/
	int n = 10, i = 15;		// initialization
	while(i < n){			// condition check
		cout<<i<<" ";
		i++;				// updation
	}
	cout<<"\nDo while:-\n";
	i = 15; 				// initialization
	do{
		cout<<i<<" ";
		i++;				// updataion
	}while(i < n);			// condition check
	cout<<endl;
	return 0;
}