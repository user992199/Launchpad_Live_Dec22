#include<iostream>
using namespace std;
int main(){
	int arr[] = {1, 2, 6, 1, 2, 4, 17, 18, 12, -10, -5, 17};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i < n-1; i++){
		int count = 0;
		for(int j = 0; j < n-1-i; j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j], arr[j+1]);
				count++;
			}
		}
		if(count==0){
			break;
		}
	}
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	int med;
	if(n % 2 == 0){
		med = (arr[n/2] + arr[(n/2) - 1]) / 2;
	}else{
		med = arr[n/2];
	}
	cout<<med<<endl;
	return 0;
}