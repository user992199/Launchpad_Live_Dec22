#include<iostream>
#include<vector>
using namespace std;
int n_s(int n, int k){
	// base case
	if(n == 0) return 1;
	// recursive case
	int ans = 0;
	for(int i = 1; i <= k and n-i >= 0; i++)
		ans += n_s(n-i, k);
	return ans;
}
int td(int n, vector<int> &dp, int k){
	if(dp[n] != -1) return dp[n];
	if(n == 0) return dp[n] = 1;
	int ans = 0;
	for(int i = 1; i <= k and n-i >= 0; i++)
		ans += td(n-i, dp, k);
	return dp[n] = ans;
}
int bu(int n, int k){
	vector<int> dp(n+1, 0);
	dp[0] = 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= k and i-j >= 0; j++){
			dp[i] += dp[i-j];
		}
	}
	return dp[n];
}
int main(){
	int n = 100, k = 5;
	vector<int> dp(n+1, -1);
	// cout<<n_s(n, k)<<endl;
	cout<<td(n, dp, k)<<endl;
	cout<<bu(n, k)<<endl;
	return 0;
}