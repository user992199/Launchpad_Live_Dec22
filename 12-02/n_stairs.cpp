#include<iostream>
using namespace std;
int n_stairs(int n, int k){
	// base case
	if(n==0) return 1;
	// recursive case
	int ans = 0;
	for(int i = 1; i <= k and i <= n; i++){
		ans += n_stairs(n-i, k);
	}
	return ans;
}
int main(){
	int n = 10, k = 5;
	cout<<n_stairs(n, k)<<endl;
	return 0;
}