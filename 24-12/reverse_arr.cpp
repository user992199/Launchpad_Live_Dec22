#include<iostream>
using namespace std;
int main(){
	int arr[] = {1, 2, 3, 4, 5, 17, 18, 26, 13};
	int n = sizeof(arr)/sizeof(arr[0]);
	int temp[100];
	for(int i = 0, j = n-1; i < n; i++, j--){
		temp[i] = arr[j];
	}
	for(int i = 0; i < n; i++){
		arr[i] = temp[i];
	}
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}