#include<iostream>
using namespace std;
void arrprint(int * arr, int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<< " ";
	}cout<<endl;
}
void reverse_arr(int *arr, int n){
	arr++;
	for(int i = 0; i < n/2; i++){
		swap(*(arr+i), *(arr+n-i-1));
	}
}
int main(){
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	int *ptr = &arr[0];
	reverse_arr(arr, n);
	// cout<<ptr[1]<<endl;
	// cout<<sizeof(arr)<<endl;
	// cout<<arr<<endl;
	// cout<<&arr[0]<<endl;
	// arrprint(arr, n);
	// reverse_arr(arr, n);
	// arrprint(arr, n);

	cout<<"arr: "<<arr<<" "<<&arr+1<<endl;
	cout<<"ptr: "<<ptr<<" "<<&ptr<<endl;

	cout<<"arr + 1: "<<arr+1<<" "<<&arr+1<<endl;
	cout<<"ptr + 1: "<<ptr+1<<" "<<&ptr+1<<endl;

	ptr = &arr[3];
	cout<<*ptr<<endl;
	ptr++; // ptr += 1 // ptr = ptr + 1;
	cout<<*ptr<<endl;
	// arr++; // arr += 1 // arr = arr+1;
	// arr = ptr;
	// cout<<arr<<endl;
	return 0;
}