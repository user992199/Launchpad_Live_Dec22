#include<iostream>
using namespace std;
int main(){
	int arr[4][5] = {0};
	int row = sizeof(arr)/sizeof(arr[0]);
	int col = sizeof(arr[0])/sizeof(arr[0][0]);
	cout<<"arr[0][0]:\t"	<<arr[0][0]<<endl; // 0
	cout<<"&arr[0][0]:\t"	<<&arr[0][0]<<endl; // add of row0 col0
	cout<<"arr[0]+1:\t"		<<arr[0]+1<<endl;  
	cout<<"arr+1:\t\t"		<<arr+1<<endl;
	cout<<"&arr+1:\t\t"		<<&arr+1<<endl;
	return 0;
}