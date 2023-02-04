#include<iostream>
using namespace std;
void print_words(int n){
	// base case
	if(n==0) return;
	// recursive case
	string digits[] = {
		"zero", "one", "two", "three", "four", 
		"five", "six", "seven", "eight", "nine"
	};
	print_words(n/10);
	cout<<digits[n%10]<<" ";
}
int main(){
	int n = 982634;
	print_words(n);
	cout<<endl;
	return 0;
}