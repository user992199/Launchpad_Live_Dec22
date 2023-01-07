#include<iostream>
using namespace std;
long long factorial(int n){
	long long ans = 1;
	while(n > 0) ans *= n--;
	return ans;
}
int main(){
	int n = 10;
	cin>>n;
	cout<<factorial(n)<<endl;
	return 0;
}