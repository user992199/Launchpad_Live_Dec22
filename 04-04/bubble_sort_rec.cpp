#include<iostream>
using namespace std;
void print(int *arr, int n){
	for(int i = 0; i < n; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
void bubble_sort_par(int *arr, int n, int i = 0){
	// base case
	if(i >= n-1) return;
	// recursive case
	for(int j = 0; j < n-1-i; j++){
		if(arr[j] > arr[j+1]) 
			swap(arr[j], arr[j+1]);
	}
	bubble_sort_par(arr, n, i+1);
}
void bubble_sort_comp(int *arr, int n, int i = 0, int j = 0){
	// base case
	if(i >= n-1) return;
	// recursive case
	if(j >= n-1-i) {
		bubble_sort_comp(arr, n, i+1, 0);
		return;
	}
	if(arr[j] > arr[j+1]) 
		swap(arr[j], arr[j+1]);
	bubble_sort_comp(arr, n, i, j+1);
}
int main(){
	int arr[] = {5, 4, 3, 2, 1, 12398, -10, 38, 376, 87};
	int n = sizeof(arr)/sizeof(arr[0]);
	print(arr, n);
	bubble_sort_comp(arr, n);
	print(arr, n);
	return 0;
}