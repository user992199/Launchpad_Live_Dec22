#include<iostream>
#include<vector>
using namespace std;
int ks_rec(int * w, int * p, int n, int cap){
	// base case
	if(n == 0 or cap == 0) return 0;
	// recursive case
	if(cap >= w[n-1]){
		return max(
			ks_rec(w, p, n-1, cap - w[n-1]) + p[n-1],
			ks_rec(w, p, n-1, cap)
		);
	}
	else{
		return ks_rec(w, p, n-1, cap);
	}
}
int ks_td(int * w, int * p, int n, int cap, vector<vector<int> > &dp){
	if(n == 0 or cap <= 0) return 0;
	if(dp[cap][n-1] != -1) return dp[cap][n-1];
	if(cap >= w[n-1]){
		return dp[cap][n-1] = max(
			ks_td(w, p, n-1, cap - w[n-1], dp) + p[n-1],
			ks_td(w, p, n-1, cap, dp)
		);
	}
	return dp[cap][n-1] = ks_td(w, p, n-1, cap, dp);
}
void print_vv(vector<vector<int> > dp){
	for(int i = 0; i < dp.size(); i++){
		for(int j = 0; j < dp[i].size(); j++){
			cout<<dp[i][j]<<" ";
		}cout<<endl;
	}
}
int ks_bu(int * w, int * p, int n, int cap){
	vector<vector<int> > dp(cap+1, vector<int> (n, 0));
	for(int curr_cap = 1; curr_cap <= cap; curr_cap++){
		if(curr_cap >= w[0])
			dp[curr_cap][0] = p[0];
	}
	for(int curr_cap = 1; curr_cap <= cap; curr_cap++){
		for(int i = 1; i < n; i++){
			if(curr_cap >= w[i]){
				dp[curr_cap][i] = max(
					dp[curr_cap - w[i]][i-1] + p[i],
					dp[curr_cap][i-1]
				);
			}
			else dp[curr_cap][i] = dp[curr_cap][i-1];
		}
	}
	return dp[cap][n-1];
}
int main(){
	int weight[] = {1, 4, 3, 10, 1};
	int price[] = {1, 2, 5, 1, 10};
	int n = sizeof(price)/sizeof(price[0]);
	int cap = 8;
	vector<vector<int> > dp(cap+1, vector<int> (n, -1));
	cout<<ks_rec(weight, price, n, cap)<<endl;
	cout<<ks_td(weight, price, n, cap, dp)<<endl;
	cout<<ks_bu(weight, price, n, cap)<<endl;
	return 0;
}