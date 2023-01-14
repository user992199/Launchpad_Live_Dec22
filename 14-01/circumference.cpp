#include<iostream>
using namespace std;
int main(){
	int r, v;
	r = 10;
	// 1000 lines of code
	// int * rptr = NULL;
	int * rptr = 0;
	// *rptr = 10;
	// 1000 lines of code
	rptr = &r;
	// 1000 lines of code
	cout<<*rptr * 2 * 3.14<<endl;
	return 0;
}