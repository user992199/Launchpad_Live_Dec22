#include<iostream>
using namespace std;
void func(int n){
	int * arr = new int [n];
	for(int i = 0; i < n; i++){
		arr[i] = i;
	}
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	// syntax for deallocation
	// delete []identifier;
	delete []arr;
	arr = NULL; // arr = 0;
	// 1000 lines of code
	cout<<endl;
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int n;
	cin>>n;
	// syntax
	// datatype * identifier = new datatype[number of buckets];
	// int *arr = new int[n];
	func(n);
	return 0;
}