#include<iostream>
using namespace std;
void print(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
int sum_of_arr(int arr[], int n){
	int ans = 0;
	for(int i = 0; i < n; i++){
		ans += arr[i];
	}
	return ans;
}
int main(){
	// int arr[] = {1, 2, 3, 4, 5};
	// int n = sizeof(arr) / sizeof(arr[0]);
	int arr[1000];
	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	print(arr, n);
	cout<<"sum of the given array = "<<sum_of_arr(arr, n)<<endl;
	return 0;
}