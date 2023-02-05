#include<iostream>
using namespace std;
void print(int * arr, int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
void merge(int * a1, int m, int *a2, int n){
	int a3[100];
	int i = 0, j = 0, k = 0;
	while(i < m and j < n){
		if(a1[i] <= a2[j]){
			a3[k++] = a1[i++]; // a3[k] = a1[i]; i++; k++;
		}else{
			a3[k++] = a2[j++]; // a3[k] = a2[j]; j++; k++;
		}
	}
	while(i < m){
		a3[k++] = a1[i++]; // a3[k] = a1[i]; i++; k++;
	}
	while(j < n){
		a3[k++] = a2[j++]; // a3[k] = a2[j]; j++; k++;
	}
	for(int i = 0; i < m+n; i++){
		a1[i] = a3[i];
	}
}
int main(){
	int a1[15] = {1, 3, 5, 7, 7, 10, 23};
	int a2[] = {2, 4, 6, 8, 8, 10, 10, 12};
	int m = 7, n = 8;
	cout<<"Before Merge:\n";
	print(a1, m+n);
	print(a2, n);
	merge(a1, m, a2, n);
	cout<<"After Merge:\n";
	print(a1, m+n);
	print(a2, n);
	return 0;
}