#include<iostream>
#include<vector>
using namespace std;
int fibo_rec(int n){
	if(n == 0 or n == 1) return n;
	return fibo_rec(n-1) + fibo_rec(n-2);
}
int fibo_td(int n, vector<int> &dp){
	// check before calculate
	if(dp[n] != -1) return dp[n];
	if(n == 0 or n == 1) return dp[n] = n;
	// store before return
	return dp[n] = fibo_td(n-1, dp) + fibo_td(n-2, dp);
}
int fibo_bu(int n){
	vector<int> dp(n+1);
	// init => base case
	dp[0] = 0;
	dp[1] = 1;
	for(int i = 2; i <= n; i++){
		// recursive case
		dp[i] = dp[i-1] + dp[i-2];
	}
	return dp[n];
}
int fibo(int n){
	if(n == 0 or n == 1) return n;
	int a = 0, b = 1, c;
	for(int i = 2; i <= n; i++){
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}
int main(){
	int n = 100;
	vector<int> dp(n+1, -1);
	int *arr = new int[n+1];
	// memset(array_identifier, -1/0, sizeof array)
	memset(arr, -1, sizeof(int)*(n+1));
	cout<<fibo_td(n, dp)<<endl;
	// cout<<fibo(n)<<endl;
	cout<<fibo_bu(n)<<endl;
	cout<<fibo(n)<<endl;
	return 0;
}