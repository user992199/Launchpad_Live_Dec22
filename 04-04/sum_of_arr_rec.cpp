#include<iostream>
using namespace std;
int sum(int * arr, int n){
	// base case
	if(n == 0) return 0;
	// recursive case
	int curr_num = arr[n-1];
	int sum_of_smaller_arr = sum(arr, n-1);
	return curr_num + sum_of_smaller_arr;
}
int sum_start_to_end(int * arr, int n){
	// base case
	if(n == 0) return 0;
	// recursive case
	int curr_num = arr[0];
	int sum_of_smaller_arr = sum_start_to_end(arr+1, n-1);
	return curr_num + sum_of_smaller_arr;
}
int main(){
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<sum(arr, n)<<endl;
	cout<<sum_start_to_end(arr, n)<<endl;
	return 0;
}