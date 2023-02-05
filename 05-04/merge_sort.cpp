#include<iostream>
using namespace std;
void print(int * arr, int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
void merge(int * a1, int s, int e){
	int m = s + (e-s)/2;
	int a3[100];
	int i = s, j = m+1, k = s;
	while(i <= m and j <= e){
		if(a1[i] <= a1[j]){
			a3[k++] = a1[i++]; // a3[k] = a1[i]; i++; k++;
		}else{
			a3[k++] = a1[j++]; // a3[k] = a2[j]; j++; k++;
		}
	}
	while(i <= m){
		a3[k++] = a1[i++]; // a3[k] = a1[i]; i++; k++;
	}
	while(j <= e){
		a3[k++] = a1[j++]; // a3[k] = a2[j]; j++; k++;
	}
	for(int i = s; i <= e; i++){
		a1[i] = a3[i];
	}
}
void merge_sort(int * arr, int s, int e){
	// base case
	if(s == e) return;
	// recursive case
	int m = s + (e-s)/2;
	merge_sort(arr, s, m);
	merge_sort(arr, m+1, e);
	merge(arr, s, e);
}
int main(){
	int arr[] = {5, 4, 3, 2, 1, 6, 7, 8, 328, -10, 3123, 0, -573};
	int n = sizeof(arr)/sizeof(arr[0]);
	print(arr, n);
	merge_sort(arr, 0, n-1);
	print(arr, n);
	return 0;
}