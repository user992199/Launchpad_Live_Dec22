#include<iostream>
using namespace std;
void orunt(int * arr, int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
bool comp(int a, int b){
	if (a < 0) return true;
	else if (b < 0) return false;
	return a > b;
}
int main(){
	int arr[] = {0, -1, -2, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, -3, -4};
	int n = sizeof(arr)/sizeof(arr[0]);
	orunt(arr, n);
	sort(arr, arr+n); // increasing
	sort(arr, arr+n, greater<int>()); // decreasing
	orunt(arr, n);
	return 0;
}