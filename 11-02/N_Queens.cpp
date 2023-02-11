#include<iostream>
using namespace std;
void print(char board[][100], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			board[i][j] == 'Q' ? cout<<"Q " : cout<<"_ ";
		}cout<<endl;
	}
	cout<<endl;
}
bool possible(char board[][100], int n, int i, int j){
	// check current column
	for(int row = 0; row < i; row++){
		if(board[row][j] == 'Q') return false;
	}
	// check upper left diagonal
	for(int k = 1; i-k >= 0 and j-k >= 0; k++){
		if(board[i-k][j-k] == 'Q') return false;
	}
	// check upper right diagonal
	for(int k = 1; i-k >= 0 and j+k < n; k++){
		if(board[i-k][j+k] == 'Q') return false;
	}
	return true;
}
bool n_queens(char board[][100], int n, int i = 0){
	// base case
	if(i == n){
		print(board, n);
		return true;
		return false;
	}
	// recursive case
	for(int j = 0; j < n; j++){
		// is it possible to actually place a queen at current cell
		if(possible(board, n, i, j)){
			// place the queen
			board[i][j] = 'Q';
			// check whether we can place the rest of the queenns
			if(n_queens(board, n, i+1)){
				return true;
			}
			// if not possible then BACKTRACK
			board[i][j] = '\0';
		}
	}
	return false;
}
int main(){
	int n = 8;
	char board[100][100] = {""};
	n_queens(board, n);
	return 0;
}