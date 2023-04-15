#include<iostream>
#include<vector>
using namespace std;
int n_s(int n){
	// base case
	if(n == 0 or n == 1) return 1;
	// recursive case
	return n_s(n-1) + n_s(n-2);
}
int td(int n, vector<int> &dp){
	if(dp[n] != -1) return dp[n];
	if(n == 0 or n == 1) return dp[n] = 1;
	return dp[n] = td(n-1, dp) + td(n-2, dp);
}
int bu(int n){
	vector<int> dp(n+1);
	dp[0] = dp[1] = 1;
	for(int i = 2; i <= n; i++)
		dp[i] = dp[i-1] + dp[i-2];
	return dp[n];
}
int main(){
	int n = 5;
	vector<int> dp(n+1, -1);
	cout<<n_s(n)<<endl;
	cout<<td(n, dp)<<endl;
	cout<<bu(n)<<endl;
	return 0;
}