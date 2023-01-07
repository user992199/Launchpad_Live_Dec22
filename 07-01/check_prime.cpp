#include<iostream>
using namespace std;
bool check_prime(int n){
	if(n == 1) return false;
	for(int i = 2; i < n; i++)
		if(n%i == 0) 
			return false;
	return true;
}
int main(){
	int n = 7;
	if(check_prime(n)){
		cout<<n<<" is prime\n";
	}else{
		cout<<n<<" is not prime\n";
	}
	return 0;
}