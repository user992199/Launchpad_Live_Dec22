#include<iostream>
using namespace std;
int binary_search(int * arr, int key, int e, int s = 0){
	// base case
	if(s > e) return -1;
	// recursive case
	int m = s + (e-s)/2;
	if(arr[m] > key){
		return binary_search(arr, key, m-1, s);
	}else if(arr[m] < key){
		return binary_search(arr, key, e, m+1);
	}
	else{
		return m;
	}
}
int main(){
	//           0  1  2  3  4  5   6   7   8   9
	int arr[] = {1, 3, 4, 6, 8, 10, 13, 18, 20, 45};
	int key = 19;
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<binary_search(arr, key, n-1)<<endl;
	return 0;
}