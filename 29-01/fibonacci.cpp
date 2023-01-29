#include<iostream>
using namespace std;
int fibo(int n){
	// base case
	if(n <= 1) return n;
	// recursive case
	return fibo(n-1) + fibo(n-2);
	// int chota_ans_1 = fibo(n-1);
	// int chota_ans_2 = fibo(n-2);
	// // ans form
	// int bada_ans = chota_ans_1 + chota_ans_2;
	// return bada_ans;
}
int main(){
	int n = 10;
	for(int i = 0; i <= n; i++)
		cout<<fibo(i)<<" ";
	cout<<endl;
	return 0;
}