#include<iostream>
using namespace std;
int main(){
	// declaration
	char arr[10];
	for(int i = 0; i < 10; i++){
		arr[i] = 'a' + i;
	}
	arr[9] = '\0';
	cout<<arr<<endl;
	for(int i = 0; i < 10; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	// init 1
	char a1[6] = {'a', 'b', 'c', 'd', 'e', '\0'};
	// init 2
	char a2[] = {'a', 'b', 'c', 'd', 'e', '\0'};
	cout<<a2<<endl;
	// init 3
	char a3[10] = "ab  cd \ne";
	cout<<"a3:\n"<<a3<<endl;
	// init 4
	char a4[] = "Welcome";
	cout<<sizeof(a4)<<endl;
	cout<<a4<<endl;

	// init 5
	char a5[10] = "abcd";
	for(int i = 0; i < 10; i++){
		cout<<"i: "<<i<<" -> "<<a5[i]<<endl;
	}
	return 0;
}