#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
string lcs_string(string s1, string s2){
	// base case
	if(s1 == "" or s2 == "") return "";
	// recursive case
	if(s1[0] == s2[0]){
		return s1[0] + lcs_string(s1.substr(1), s2.substr(1));
	}
	string op1 = lcs_string(s1, s2.substr(1));
	string op2 = lcs_string(s1.substr(1), s2);
	return op1.length() > op2.length() ? op1 : op2;
}
int lcs(string s1, string s2){
	// base case
	if(s1 == "" or s2 == "") return 0;
	// recursive case
	if(s1[0] == s2[0]){
		return 1 + lcs(s1.substr(1), s2.substr(1));
	}
	int op1 = lcs(s1, s2.substr(1));
	int op2 = lcs(s1.substr(1), s2);
	return max(op1, op2);
}
int td(string s1, string s2, vector<vector<int> > &dp, int i = 0, int j = 0){
	if(s1[i] == '\0' or s2[j] == '\0') return 0;
	// check before calculate
	if(dp[i][j] != -1) return dp[i][j];
	if(s1[i] == s2[j])
		return dp[i][j] = 1 + td(s1, s2, dp, i+1, j+1);
	int op1 = td(s1, s2, dp, i+1, j);
	int op2 = td(s1, s2, dp, i, j+1);
	// store before return
	return dp[i][j] = max(op1, op2);
}
void print_vv(vector<vector<int> > dp){
	for(int i = 0; i < dp.size(); i++){
		for(int j = 0; j < dp[i].size(); j++){
			cout<<dp[i][j]<<" ";
		}cout<<endl;
	}
}
int bu(string s1, string s2){
	int m = s1.length(), n = s2.length();
	vector<vector<int> > dp(m, vector<int> (n, -1));
	for(int i = m-1; i >= 0; i--){
		for(int j = n-1; j >= 0; j--){
			if(i == m-1){
				if(j == n-1){
					if(s1[i] == s2[j]) dp[i][j] = 1;
					else dp[i][j] = 0;
				}
				else if(s1[i] == s2[j]) dp[i][j] = max(1, dp[i][j+1]);
				else dp[i][j] = dp[i][j+1];
			}
			else if(j == m-1){
				if(s1[i] == s2[j]) dp[i][j] = max(1, dp[i+1][j]);
				else dp[i][j] = dp[i][j+1];
			}
			else if(s1[i] == s2[j]) dp[i][j] = 1 + dp[i+1][j+1];
			else dp[i][j] = max(dp[i][j+1], dp[i+1][j]);
		}
	}
	return dp[0][0];
}
int main(){
	string s1 = "Batman"; // row
	string s2 = "Baatm"; // col
	vector<vector<int> > dp(s1.length(), vector<int> (s2.length(), -1));
	cout<<lcs_string(s1, s2)<<endl;
	cout<<lcs(s1, s2)<<endl;
	cout<<td(s1, s2, dp)<<endl;
	cout<<bu(s1, s2)<<endl;
	return 0;
}