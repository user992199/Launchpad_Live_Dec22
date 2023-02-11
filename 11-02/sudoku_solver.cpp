#include<iostream>
#include<cmath>
using namespace std;
void print(int board[][100], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout<<board[i][j]<<" ";
		}cout<<endl;
	}
}
bool possible(int board[][100], int n, int i, int j, int value){
	// check current row
	for(int col = 0; col < n; col++){
		if(board[i][col] == value) return false;
	}
	// check current col
	for(int row = 0; row < n; row++){
		if(board[row][j] == value) return false;
	}
	// check current box
	int fact = sqrt(n);
	int sr = i - i%fact;
	int sc = j - j%fact;
	for(int row = sr; row <= sr + fact - 1; row++){
		for(int col = sc; col <= sc + fact - 1; col++){
			if(board[row][col] == value) return false;
		}
	}
	return true;
}
bool sudoku_solver(int board[][100], int n, int i = 0, int j = 0){
	// base case
	if(i == n){
		print(board, n);
		return true;
	}
	if(j == n){
		return sudoku_solver(board, n, i+1, 0);
	}
	// recursive case
	if(board[i][j] != 0){
		return sudoku_solver(board, n, i, j+1);
	}
	for(int value = 1; value <= n; value++){
		if(possible(board, n, i, j, value)){
			board[i][j] = value;
			if(sudoku_solver(board, n, i, j+1)){
				return true;
			}
			board[i][j] = 0;
		}
	}
	return false;
}
int main(){
	// int board[100][100] = {0};
	int board[100][100] ={
		{5,3,0,0,7,0,0,0,0},
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9}
	};
	int n = 9;
	sudoku_solver(board, n);
	return 0;
}