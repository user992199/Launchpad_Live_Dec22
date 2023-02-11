#include<iostream>
using namespace std;
void print(char arr[][10], int n, int m){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			arr[i][j] == '1' ? cout<<"1 " : cout<<"  ";
		}cout<<endl;
	}
}
bool rat_in_a_maze(char maze[][10], int n, int m, int i = 0, int j = 0){
	// maze[i][j] = '1';
	// base case
	if(i == n-1 and j == m-1){
		print(maze, n, m);
		return true;
		// maze[i][j] = '0';
		// return false;
	}
	// recursive case
	if(j+1 < m and maze[i][j+1] == '0'){
		maze[i][j+1] = '1';
		if(rat_in_a_maze(maze, n, m, i, j+1)) return true;
		maze[i][j+1] = '0';
	}
	if(i+1 < n and maze[i+1][j] == '0'){
		maze[i+1][j] = '1';
		if(rat_in_a_maze(maze, n, m, i+1, j)) return true;
		maze[i+1][j] = '0';
	}
	// maze[i][j] = '0';
	return false;
}	
int main(){
	char maze[][10] = {
		"0000",
		"00XX",
		"0000",
		"XX00"
	};
	int n = 4, m = 4;
	maze[0][0] = '1';
	rat_in_a_maze(maze, n, m);
	// print(maze, n, m);
	return 0;
}