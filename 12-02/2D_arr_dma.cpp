#include<iostream>
using namespace std;
int main(){
	int r, c;
	cin>>r>>c;
	int ** arr = new int* [r];
	for(int i = 0; i < r; i++){
		arr[i] = new int [c];
	}
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			arr[i][j] = i + j;
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}
	for(int i = 0; i < r; i++){
		delete [] arr[i];
	}
	cout<<sizeof(arr)<<endl; // 8
	cout<<sizeof(arr[0])<<endl; // 8
	cout<<sizeof(arr[0][0])<<endl; // 4
	return 0;
}