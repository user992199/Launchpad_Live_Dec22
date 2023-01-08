#include<iostream>
using namespace std;
int main(){
	char a = 'u';
	int k = -1;
	char b = 'b';
	int i = 10;
	char c = 'c';
	char d = 'd';
	double z = 19.242;
	char e = 'e';

	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;
	cout<<"c: "<<c<<endl;
	cout<<"d: "<<d<<endl;
	cout<<"e: "<<e<<endl;

	cout<<"---------------------------\n";
	
	cout<<"address of a: "<<&a<<endl;
	cout<<"address of b: "<<&b<<endl;
	cout<<"address of c: "<<&c<<endl;
	cout<<"address of d: "<<&d<<endl;
	cout<<"address of e: "<<&e<<endl;

	cout<<"---------------------------\n";
	
	// fooling of compiler
	cout<<"address of a: "<<(int*)&a<<endl;
	cout<<"address of b: "<<(bool*)&b<<endl;
	cout<<"address of c: "<<(float*)&c<<endl;
	cout<<"address of d: "<<(void*)&d<<endl;
	cout<<"address of e: "<<(double*)&e<<endl;

	return 0;
}