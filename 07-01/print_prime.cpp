#include<iostream>
using namespace std;
bool check_prime(int n){
	if(n == 1) return false;
	for(int i = 2; i < n; i++)
		if(n%i == 0) 
			return false;
	return true;
}
void print_prime(int n){
	for(int i = 2; i <= n; i++){
		if(check_prime(i)){
			cout<<i<<" ";
		}
	}
	cout<<endl;
	return;
}
int main(){
	int n = 1000;
	// cin>>n;
	print_prime(n);
	return 0;
}