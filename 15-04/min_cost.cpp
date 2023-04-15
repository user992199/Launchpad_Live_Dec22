#include<iostream>
#include<vector>
using namespace std;
int min_cost(int maze[][4], int m, int n, int i = 0, int j = 0){
	if(i == m-1 and j == n-1) return maze[i][j];
	if(i == m-1) return min_cost(maze, m, n, i, j+1) + maze[i][j];
	if(j == n-1) return min_cost(maze, m, n, i+1, j) + maze[i][j];
	return min(min_cost(maze, m, n, i+1, j), min_cost(maze, m, n, i, j+1)) + maze[i][j];
}
int td(int maze[][4], int dp[][4], int m, int n, int i = 0, int j = 0){	
	if(dp[i][j] != -1) return dp[i][j];
	if(i == m-1 and j == n-1) return dp[i][j] = maze[i][j];
	if(i == m-1) return dp[i][j] = td(maze, dp, m, n, i, j+1) + maze[i][j];
	if(j == n-1) return dp[i][j] = td(maze, dp, m, n, i+1, j) + maze[i][j];
	return dp[i][j] = min(td(maze, dp, m, n, i+1, j), td(maze, dp, m, n, i, j+1)) + maze[i][j];
}
int bu(int maze[][4], int m, int n){	
	int dp[m][n];
	memset(dp, -1, sizeof(dp));
	dp[0][0] = maze[0][0];
	for(int i = 1; i < m; i++){
		dp[i][0] = dp[i-1][0] + maze[i][0];
	}
	for(int j = 1; j < n; j++){
		dp[0][j] = dp[0][j-1] + maze[0][j];
	}
	for(int i = 1; i < m; i++){
		for(int j = 1; j < n; j++){
			dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + maze[i][j];
		}
	}
	return dp[m-1][n-1];
}
int main(){
	int maze[4][4] = {
		{1, 2, 1, 1000},
		{1, 10, 10, 1},
		{5, 100, 100, 1},
		{50, 1000, 1000, 1}
	};
	int dp[4][4];
	memset(dp, -1, sizeof(dp));
	int m = 4, n = 4;
	cout<<min_cost(maze, m, n)<<endl;
	cout<<td(maze, dp, m, n)<<endl;
	cout<<bu(maze, m, n)<<endl;
	return 0;
}