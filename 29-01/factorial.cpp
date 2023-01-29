#include<iostream>
using namespace std;
// int fact(int);
int fn(int n){
	// base case
	if(n <= 0) return 1;
	// recursive case
	return n * fn(n-1);
	// int chota_ans = fn(n-1);
	// // forming the answer
	// int bada_ans = n * chota_ans;
	// return bada_ans;
}
int main(){
	int n = 0;
	cout<<fn(n)<<endl;
	return 0;
}