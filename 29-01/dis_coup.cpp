#include<iostream>
using namespace std;
bool check(long long k, long long n, long long m, long long x, long long y){
	return k*x <= m+y*(n-k);
}
int dis_coup(){
	long long n, m, x, y;
	cin>>x>>m>>x>>y;
	int s = 0, e = n;
	long long ans = 0;
	while(s<=e){
		long long k = s + (e-s)/2;
		if(check(k, n, m, x, y)){
			s = k+1;
			ans = k;
		}else{
			e = k-1;
		}
	}
	cout<<k<<endl;
}
int main() {
	dis_coup();
	return 0;
}