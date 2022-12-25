#include<iostream>
using namespace std;
int main(){
	int arr[] = {10, 9, 8, 7, 6, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i < n-1; i++){
		int mi = i;
		for(int j = i+1; j < n; j++){
			// if(arr[mi] < arr[j]){ // decending order
			if(arr[mi] > arr[j]){ // ascending order
				mi = j;
			}
			// if(arr[i] > arr[j]){
				// swap(arr[i], arr[j]);
			// }
		}
		swap(arr[mi], arr[i]);
	}
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}