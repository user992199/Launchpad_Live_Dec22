#include<iostream>
using namespace std;
int main(){
	int n = 34253214;
	int sum = 0;
	int temp = n;
	while(temp > 0){
		sum = sum + temp%10; 
		temp = temp / 10; 
	}
	cout<<sum<<endl;
	return 0;
}