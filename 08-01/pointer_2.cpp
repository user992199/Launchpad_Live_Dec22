#include<iostream>
using namespace std;
int main(){
	double x = 10;
	double * y = &x;
	cout<<"x: "<<x <<endl;
	cout<<"&x: "<<&x<<endl;
	cout<<"y: "<<y <<endl;
	cout<<"&y: "<<&y<<endl;
	cout<<"*(&x): "<<*(&x)	<<endl;
	cout<<"&(*y): "<<&(*y)<<endl;
	cout<<"x+1: "<<x+1 <<endl;
	cout<<"&x+1: "<<&x+1<<endl;
	cout<<"y+1: "<<y+1	<<endl;
	cout<<"*y + 1: "<<*y + 1<<endl;
	cout<<"*(&y): "<<*(&y)<<endl;
	return 0;
}