#include<iostream>
using namespace std;
void print_mat(char arr[][100], int r, int c){
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
	cout<<endl;
}
void spiral_print(char arr[][100], int r, int c){
	int sr = 0, sc = 0, er = r-1, ec = c-1;
	char ch = 'X';
	char ch2 = 'O';
	while(sr <= er and sc <= ec){
		for(int col = sc; col <= ec; col++){
			arr[sr][col] = ch;
		}
		sr++;

		if(sr>er) return;
		for(int row = sr; row <= er; row++){
			arr[row][ec] = ch;
		}
		ec--;

		if(ec<sc) return;
		for(int col = ec; col >= sc; col--){
			arr[er][col] = ch;
		}
		er--;

		if(er<sr) return;
		for(int row = er; row >= sr; row--){
			arr[row][sc] = ch;
		}
		sc++;
		swap(ch, ch2);
	}
}
int main(){
	int m = 5;
	int n = 10;
	char arr[100][100];
	spiral_print(arr, m, n);
	print_mat(arr, m, n);
	return 0;
}