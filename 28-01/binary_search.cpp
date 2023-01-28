#include<iostream>
using namespace std;
int binary_search(int arr[], int n, int key){
	int s = 0, e = n-1;
	while(e>=s){
		int m = (s+e)/2;
		if(key == arr[m])
			return m;
		else if(key > arr[m])
			s = m+1;
		else{
			e = m-1;
		}
	}
	return -1;
}
int main(){ //   0  1  2  3   4   5   6
	int arr[] = {1, 3, 6, 17, 29, 31, 45};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<binary_search(arr, n, 35)<<endl;
	return 0;
}