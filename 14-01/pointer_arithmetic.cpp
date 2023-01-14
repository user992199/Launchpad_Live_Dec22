#include<iostream>
using namespace std;
int main(){
	int i[] = {1, 2, 3, 4, 5};
	int * ptr = &i[3];
	bool b;
	bool * bptr = &b;
	cout<<i<<endl;
	cout<<ptr - 1<<endl;
	cout<<ptr<<endl;
	cout<<ptr + 1<<endl;
	cout<<&i[4] - &i[4]<<endl;
	return 0;
}