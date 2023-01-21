#include<iostream>
using namespace std;
const int column = 100;
int sum(int arr[][column], int row, int col){
	int sum = 0;
	for(int i = 0 ; i < row; i++){
		for(int j = 0; j < col; j++){
			sum += arr[i][j];
		}
	}
	return sum;
}
void init(int arr[][column], int row, int col){
	for(int i = 0 ; i < row; i++){
		for(int j = 0; j < col; j++){
			cin>>arr[i][j];
		}
	}
}
void print(int arr[][column], int row, int col){
	for(int i = 0 ; i < row; i++){
		for(int j = 0; j < col; j++){
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}
}
int main(){
	int arr[column][column];
	int r, c;
	cin>>r>>c;
	init(arr, r, c);
	cout<<sum(arr, r, c)<<endl;
	print(arr, r, c);
	return 0;
}