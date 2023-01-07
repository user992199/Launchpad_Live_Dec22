#include<iostream>
using namespace std;
int main(){
	// syntax
	// condition ? task 1 : task 2 ;
	// task 1 will be performed if condition is true
	// task 2 will be performed if condition is false
	// both of the above tasks are single line instructions
	int i = 21;
	i < 20 ? cout<<"smaller than 20\n" : cout<<"not smaller than 20\n";
	if(i<20) cout<<"smaller than 20\n"; else cout<<"not smaller than 20\n";
	return 0;
}