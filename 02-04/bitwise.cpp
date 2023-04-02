#include<iostream>
using namespace std;
int main(){
	int a = 15;
	int b = 3;
	cout<<"a: "<<a<<"\nb: "<<b<<endl;
	cout<<"(a & b) :\t"<<(a & b)<<endl;
	cout<<"(a | b) :\t"<<(a | b)<<endl;
	cout<<"(~a) :\t\t"<<(~a)<<endl;
	cout<<"(a>>1) :\t"<<(a>>1)<<endl;
	cout<<"(a>>b) :\t"<<(a>>b)<<endl;
	cout<<"(a<<b) :\t"<<(a<<b)<<endl;
	return 0;
}