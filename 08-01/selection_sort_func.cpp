#include<iostream>
using namespace std;
void print(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
void selection_sort(int arr[], int n){
	for(int i = 0; i < n-1; i++){
		int mi = i;
		for(int j = i+1; j < n; j++){
			if(arr[mi] > arr[j]){
				mi = j;
			}
		}
		swap(arr[mi], arr[i]);
	}
}
int main(){
	int a1[] = {5, 4, 3, 2, 1};
	int a2[] = {10, 9, 8, 7, 6};
	int n = sizeof(a1)/sizeof(a1[0]);
	cout<<"before sorting a1: ";
	print(a1, n);
	selection_sort(a1, n);
	cout<<"after sorting a1: ";
	print(a1, n);
	cout<<"before sorting a2: ";
	print(a2, n);
	selection_sort(a2, n);
	cout<<"after sorting a2: ";
	print(a2, n);
	return 0;
}