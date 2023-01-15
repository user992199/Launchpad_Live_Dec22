#include<iostream>
using namespace std;
int main(){
	char a1[100] = "hello";
	char a2[] = {' ', 'w', 'o', 'r', 'f', 'd'};
	// strcpy(a1, a2);
	// cout<<strlen(a2)<<endl;
	cout<<a1<<endl;
	cout<<a2<<endl;
	strcat(a1, a2);
	cout<<a1<<endl;
	cout<<a2<<endl;
	return 0;
}