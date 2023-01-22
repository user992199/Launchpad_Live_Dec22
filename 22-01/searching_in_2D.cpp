#include<iostream>
using namespace std;
void init(int arr[][100], int r, int c){
	int count = 1;
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			arr[i][j] = count%5;
			count++;
			if(j > 3 and j % 3 == 0) count %= j;
		}
		if(i > 0)
		count %= i;
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
void search(int arr[][100], int r, int c, int key){
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			if(arr[i][j] == key) {
				cout<<"row: "<<i<<endl;
				cout<<"col: "<<j<<endl;
				return;
			}
		}
	}

}
int main(){
	int r = 5, c = 7;
	int arr[100][100] = {0};
	init(arr, r, c);
	print_mat(arr, r, c);
	search(arr, r, c, 0);
	return 0;
}