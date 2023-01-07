#include<iostream>
using namespace std;
int main(){
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int n = sizeof(arr)/sizeof(arr[0]);
	int total_count = 0;
	for(int i = 0; i < n-1; i++){
		int count = 0;
		for(int j = 0; j < n-1-i; j++){
			total_count++;
			// if(arr[j] < arr[j+1]){ // descending order
			if(arr[j] > arr[j+1]){ // ascending order
				swap(arr[j], arr[j+1]);
				count++;
			}
		}
		if(count==0){
			break;
		}
	}
	cout<<"Total Count: "<<total_count<<endl;
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}