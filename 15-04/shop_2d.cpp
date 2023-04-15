#include<iostream>
#include<vector>
using namespace std;
// int rec_2(int *arr, int n, int cd = 1){
// 	// base case
// 	if(n == 0) return 0;
// 	// recursive case
// 	return max(
// 		rec_2(arr + 1, n - 1, cd + 1) + arr[0] * cd,
// 		rec_2(arr, n - 1, cd + 1) + arr[n-1] * cd
// 	);
// }
int rec(int *arr, int n, int i, int j){
	// base case
	if(i > j) return 0;
	// recursive case
	int cd = n-j+i;
	return max(
		rec(arr, n, i+1, j) + arr[i] * cd,
		rec(arr, n, i, j-1) + arr[j] * cd
	);
}
int td(int *arr, int n, int i, int j, vector<vector<int> > &dp){
	// base case
	if(i > j) return 0;
	if(dp[i][j] != -1) return dp[i][j];
	// recursive case
	int cd = n-j+i;
	return dp[i][j] = max(
		td(arr, n, i+1, j, dp) + arr[i] * cd,
		td(arr, n, i, j-1, dp) + arr[j] * cd
	);
}
void print_vv(vector<vector<int> > v){
	for(int i = 0; i < v.size(); i++){
		for(int j = 0; j < v[i].size(); j++){
			cout<<v[i][j]<<" ";
		}cout<<endl;
	}
}
int bu(int * arr, int n){
	vector<vector < int > > dp(n, vector<int> (n, -1)); 
	for(int i = 0; i < n; i++){
		dp[i][i] = arr[i] * n;
	}
	for(int i = n-2; i >= 0; i--){
		for(int j = i+1; j < n; j++){
			int cd = n - (j-i);
			dp[i][j] = max(
				dp[i+1][j] + arr[i] * cd,
				dp[i][j-1] + arr[j] * cd
			);
		}
	}
	print_vv(dp);
	return dp[0][n-1];
}
int main(){
	int arr[] = {2, 3, 5, 1, 4};
	int n = sizeof(arr)/sizeof(arr[0]);
	vector<vector < int > > dp(n, vector<int> (n, -1)); 
	cout<<rec(arr, n, 0, n-1)<<endl;
	cout<<td(arr, n, 0, n-1, dp)<<endl;
	cout<<bu(arr, n)<<endl;
	print_vv(dp);
	return 0;
}