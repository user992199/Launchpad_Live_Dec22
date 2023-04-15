#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int coin_pay_rec(int n, int * coin, int k){
	// base case
	if(n < 0) return INT_MAX;
	if(n == 0) return 0;
	int ans = coin_pay_rec(n - coin[0], coin, k);
	for(int i = 1; i < k; i++){
		ans = min(ans, coin_pay_rec(n-coin[i], coin, k));
	}
	if(ans == INT_MAX) return ans;
	return ans+1;
}
int greedy(int n, int * coin, int k){
	sort(coin, coin+k, greater<int>());
	int ans = 0, i = 0;
	while(n){
		ans += (n/coin[i]);
		n %= coin[i];
		i++;
	}
	return ans;
}

int main(){
	int n = 55;
	int coin[] = {2, 7, 10};
	int k = sizeof(coin)/sizeof(coin[0]);
	cout<<coin_pay_rec(n, coin, k)<<endl;
	cout<<greedy(n, coin, k)<<endl;
	return 0;
}