#include<iostream>
using namespace std;
void update(int *n){
	cout<<*n<<endl;
	*n = 100;
}
int main(){
	int n = 10;
	int * p = &n;
	update(p);
	cout<<n<<endl;
	// int n = 0;
	// int k = 0;
	// cout<<n/k<<endl;
	return 0;
}