#include<iostream>
using namespace std;
// void print(int arr[5], int n){
// void print(int arr[100], int n){
// void print(int arr[3], int n){
void print(int arr[], int n){
	// int n = sizeof(arr)/sizeof(int);
	// cout<<"inside print(): "<<sizeof(arr)<<endl;
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
// arrays are always passed by reference by default
void update(int arr[], int n){
	for(int i = 0; i < n; i++){
		arr[i] *= i;
	}
	n = 100;
}
int main(){
	int arr[] = {1, 2, 3, 4, 5};
	// cout<<"inside main(): "<<sizeof(arr)<<endl;
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"before update(): ";
	print(arr, n);
	update(arr, n);
	cout<<"after update(): ";
	print(arr, n);
	cout<<"n: "<<n<<endl;
	return 0;
}