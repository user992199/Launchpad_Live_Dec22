#include<iostream>
using namespace std;
int main(){
	// int i = 0;
	// i = i + 1;
	// i += 1; // i = i + 1;
	// i += 10;
	// i -= 11; // i = i - 11;
	// i *= 5; // i = i * 5;
	// i %= 3; // i = i % 3;
	// i /= i; // i = i / i;
	// cout<<i<<endl;
	// i++; // i += i + 1 += 1; // i = i + 1;
	// cout<<i<<endl;
	// i--; // i -= 1; // i = i - 1;
	// cout<<i<<endl;
	// ++i;
	int i = 10; // 10
	int j = ++i; // pre increment // i = 11
	cout<<"i "<<i++<<endl; // post increment // i = 12
	cout<<i<<endl; // i = 12
	cout<<"j "<<j<<endl; // 11
	int k = --j; // pre decrement
	cout<<k<<endl;
	cout<<j--<<endl; // post decrement
	return 0;
}