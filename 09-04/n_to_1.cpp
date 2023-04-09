#include<iostream>
using namespace std;
int rec(int n){
	// base case
	if(n == 1) return 0;
	// recursive case
	int ans = rec(n-1);
	if(n%2 == 0) ans = min(ans, rec(n/2));
	if(n%3 == 0) ans = min(ans, rec(n/3));
	return ans + 1;
}
int top_down(int n, int * dp){
	if(dp[n] != -1) return dp[n];
	// base case
	if(n == 1) return dp[n] = 0;
	// recursive case
	int ans = top_down(n-1, dp);
	if(n%2 == 0) ans = min(ans, top_down(n/2, dp));
	if(n%3 == 0) ans = min(ans, top_down(n/3, dp));
	return dp[n] = ans + 1;
}
int bot_up(int n){
	int *dp = new int[n+1];
	dp[1] = 0;
	for(int i = 2; i <= n; i++){
		int ans = dp[i-1];
		if(n%2 == 0) ans = min(ans, dp[i/2]);
		if(n%3 == 0) ans = min(ans, dp[i/3]);
		dp[i] = ans + 1;
	}
	return dp[n];
}
int main(){
	int n = 1024;
	// cout<<rec(n)<<endl;
	int * arr = new int[n+1];
	memset(arr, -1, sizeof(int)*(n+1));
	cout<<top_down(n, arr)<<endl;
	cout<<bot_up(n)<<endl;
	// for(int i = 1; i <= n; i++){
	// 	cout<<i<<": "<<arr[i]<<endl;
	// }
	return 0;
}