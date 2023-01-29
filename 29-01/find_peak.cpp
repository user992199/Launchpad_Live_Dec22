#include<iostream>
using namespace std;
int find_peak(int arr[], int n){
	int s = 1, e = n-2;
	while(s<=e){
		int m = s + (e-s)/2;
		if(arr[m] > arr[m+1] and arr[m] > arr[m-1]){
			return m-1;
		}
		else if(arr[m-1] > arr[m]){
			e = m-1;
		}else{
			s = m+1;
		}
	}
	return 0;
}
int main(){
	int n;
	cin>>n;
	int arr[n+2];
	arr[0] = arr[n+1] = INT_MIN;
	for(int i = 1; i <= n; i++){
		cin>>arr[i];
	}
	cout<<find_peak(arr, n+2)<<endl;
	return 0;
}