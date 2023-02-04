#include<iostream>
using namespace std;
bool check_7(int arr[], int n){
	// base case
	if(n == 0) return false;
	// recursive case
	if(arr[0] == 7) return true;
	return check_7(arr+1, n-1);
}
int first_7_comp(int arr[], int n){
	// base case
	if(n == 0) return -1;
	// recursive case
	int i = first_7_comp(arr, n-1);
	if(i != -1) return i;
	if(arr[n-1] == 7) return n-1;
	return -1;
}
int first_7(int arr[], int n, int i = 0){
	// base case
	if(i == n) return -1;
	// recursive case
	if(arr[i] == 7) return i;
	return first_7(arr, n, i+1);
}
int last_7(int arr[], int n){
	// base case
	if(n == 0) return -1;
	// recursive case
	if(arr[n-1] == 7) return n-1;
	return last_7(arr, n-1);
}
void all_7(int arr[], int n){
	// base case 
	if(n==0) return;
	// recursive case
	all_7(arr, n-1);
	if(arr[n-1] == 7) cout<<n-1<<" ";
}
int main(){
	int arr[] = {7, 7, 7, 7, 7, 7, 7};
	int n = sizeof(arr)/sizeof(arr[0]);
	if(check_7(arr, n)){
		cout<<"index of first 7: "<<first_7(arr, n)<<endl;
		cout<<"index of last 7: "<<last_7(arr, n)<<endl;
		cout<<"all 7: ";
		all_7(arr, n);
		cout<<endl;
	}
	return 0;
}