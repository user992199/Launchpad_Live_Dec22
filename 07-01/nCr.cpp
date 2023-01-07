#include<iostream>
using namespace std;
long long factorial(int n){
	long long ans = 1;
	while(n > 0) ans *= n--;
	return ans;
}
long long nCr(int n, int r){
	return factorial(n)/(factorial(n-r)*factorial(r));
}
int main(){
	int n, r;
	cin>>n>>r;
	cout<<nCr(n, r)<<endl;
	return 0;
}