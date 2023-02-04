#include<iostream>
using namespace std;
void print_num_rev(int n){
	// base case
	if(n==0) return;
	// recursive case
	cout<<n<<endl;
	print_num_rev(n-1);
}
void print_num_inc(int n){
	// base case
	if(n==0) return;
	// recursive case
	print_num_inc(n-1);
	cout<<n<<endl;
}
int power(int x, int n){
	// base case
	if(n == 0) return 1;
	// recursive case
	return x * power(x, n-1);
}
int main(){
	int n = 10;
	print_num_inc(n);
	cout<<power(2, n)<<endl;
	return 0;
}