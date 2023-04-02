#include<iostream>
using namespace std;
int un_num(int * arr, int n){
	int ans = 0;
	for(int i = 0; i < n; i++)
		ans ^= arr[i];
	return ans;
}
int main(){
	int arr[] = {2, 2, 1, -1, 3, 1, 4, 5, 4, 3, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<un_num(arr, n)<<endl;
	return 0;
}