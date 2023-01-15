#include<iostream>
using namespace std;
int main(){
	char arr[100] = "hello";
	char * ptr = "a";
	cout<<ptr<<endl;
	char k = 'a';
	cout<<(int*)arr<<endl;
	cout<<(int*)ptr<<endl;
	return 0;
}