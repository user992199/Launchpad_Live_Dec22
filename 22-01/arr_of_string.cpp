#include<iostream>
using namespace std;
int main(){
	char arr[10][100] = {
		"hello",
		"world", 
		"bye",
		"coding", 
		"gone",
		"bull",
		"warrior",
		"celtic",
		"heat",
		"laker"
	};
	cout<<arr[0][0]<<endl;
	for(int i = 0; i < 10; i++)
		cout<<arr[i]<<endl;
	return 0;
}