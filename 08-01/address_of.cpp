#include<iostream>
using namespace std;
int main(){
	int i;
	float f;
	bool b;
	double d;
	
	cout<<"address of i: "<<&i<<endl;
	cout<<"address of f: "<<&f<<endl;
	cout<<"address of b: "<<&b<<endl;
	cout<<"address of d: "<<&d<<endl;

	cout<<"-------------------------\n";

	cout<<"size of address of i: "<<sizeof(i)<<endl;
	cout<<"size of address of f: "<<sizeof(f)<<endl;
	cout<<"size of address of b: "<<sizeof(b)<<endl;
	cout<<"size of address of d: "<<sizeof(d)<<endl;

	cout<<"-------------------------\n";

	cout<<"size of address of i: "<<sizeof(&i)<<endl;
	cout<<"size of address of f: "<<sizeof(&f)<<endl;
	cout<<"size of address of b: "<<sizeof(&b)<<endl;
	cout<<"size of address of d: "<<sizeof(&d)<<endl;

	return 0;
}