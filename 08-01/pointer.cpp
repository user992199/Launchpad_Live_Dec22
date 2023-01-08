#include<iostream>
using namespace std;
int main(){
	int i = 65;
	// datatype * identifier;
	int * iptr, * y = &i;
	iptr = &i;
	iptr = y;
	int * iptr2 = &i;
	cout<<iptr<<endl;
	cout<<&i<<endl;
	cout<<iptr2<<endl;

	cout<<*y<<endl;

	// *iptr == i;
	(*iptr)++;
	*iptr2 += *iptr;

	cout<<*iptr2<<endl;
	cout<<*&i<<endl;

	bool * bptr = (bool*)&i;
	cout<<bptr<<endl;
	cout<<*bptr<<endl;
	return 0;
}