#include<iostream>
using namespace std;
// #define n 10
int main(){
	int n = 10;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	for(int i = n-1; i >= 0; i--){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}