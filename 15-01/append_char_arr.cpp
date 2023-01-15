#include<iostream>
using namespace std;
int length(char * arr){
	int i = 0;
	while(arr[i]){
		i++;
	}
	return i;
}
void append_arr(char * a1, char * a2){
	int n1 = length(a1);
	int n2 = length(a2);
	for(int i = 0; i <= n2; i++){
		a1[i+n1] = a2[i];
	}
}
int main(){
	char a1[100] = "Hello";
	char a2[100] = " World";
	cout<<a1<<endl;
	append_arr(a1, a2);
	cout<<a1<<endl;
	return 0;
}