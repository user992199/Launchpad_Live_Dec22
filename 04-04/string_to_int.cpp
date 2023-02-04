#include<iostream>
#include<cstring>
using namespace std;
int s_to_i(string s){
	// base case
	if(s.size() == 0) return 0;
	// recursive case
	int n = s.size();
	int ld = s[n - 1] - '0';
	int rd = s_to_i(s.substr(0, n-1));
	return rd*10 + ld;
}
int main(){
	string s = "999";
	int k = s_to_i(s);
	cout<<k<<endl;
	cout<<++k<<endl;
	return 0;
}