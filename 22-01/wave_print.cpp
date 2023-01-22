#include<iostream>
using namespace std;
void init(int arr[][100], int r, int c){
	int count = 10;
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			arr[i][j] = count;
			count++;
		}
	}
}
void print_mat(int arr[][100], int r, int c){
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
	cout<<endl;
}
void wave_print(int arr[][100], int r, int c){
	int sr, er, cd;
	for(int j = 0; j < c; j++){
		if(j % 2 == 0){
			for(int i = 0; i < r; i++){
				cout<<arr[i][j]<<" ";
			}
		}else{
			for(int i = r-1; i >= 0; i--){
				cout<<arr[i][j]<<" ";
			}
		}
	}
	cout<<endl;

}
void wave_print_2(int arr[][100], int r, int c){
	int sr, er, cd;
	for(int j = 0; j < c; j++){
		if(j % 2 == 0){
			sr = 0;
			er = r;
			cd = 1;
		}else{
			sr = r-1;
			er = -1;
			cd = -1;
		}
		for(int i = sr; i != er; i+=cd){
			cout<<arr[i][j]<<" ";
		}
	}
	cout<<endl;
}
int main(){
	int row = 4, col = 5;
	int arr[100][100] = {0};
	init(arr, row, col);
	print_mat(arr, row, col);
	wave_print_2(arr, row, col);
	return 0;
}