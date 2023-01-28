#include<iostream>
using namespace std;
void init(int arr[][100], int r, int c){
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			arr[i][j] = (i+1)*10+j+1;
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
void spiral_print(int arr[][100], int r, int c){
	int sr = 0, sc = 0, er = r-1, ec = c-1;
	while(sr <= er and sc <= ec){
		// print first row
		// cout<<"\nfirst row\n";
		for(int col = sc; col <= ec; col++){
			cout<<arr[sr][col]<<" ";
		}
		// update first row index
		sr++;

		if(sr>er) return;
		// print last col
		// cout<<"\nlast col\n";
		for(int row = sr; row <= er; row++){
			cout<<arr[row][ec]<<" ";
		}
		// update last col index
		ec--;

		if(sc>ec) return;
		// print last row
		// cout<<"\nlast row\n";
		for(int col = ec; col >= sc; col--){
			cout<<arr[er][col]<<" ";
		}
		// update last row index
		er--;

		if(sr>er) return;
		// print first col
		// cout<<"\nfirst col\n";
		for(int row = er; row >= sr; row--){
			cout<<arr[row][sc]<<" ";
		}
		// update first col index
		sc++;
	}
}
int main(){
	int m = 3;
	int n = 5;
	int arr[100][100] = {0};
	init(arr, m, n);
	print_mat(arr, m, n);
	spiral_print(arr, m, n);
	cout<<endl;
	return 0;
}