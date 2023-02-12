#include<iostream>
using namespace std;
int main(){
	// syntax
	// {	datatype * identifier = new datatype;	}
	// {	datatype * idemtifier;
	// 		identifier = new datatype;	}
	// int * ptr = new int;
	// *ptr = 10;
	// cout<<ptr<<endl;
	// cout<<*ptr<<endl;
	// int k = 100;
	// ptr = &k;
	// cout<<ptr<<endl;
	// cout<<*ptr<<endl;
	char * chptr = new char;
	*chptr = 'k';
	cout<<chptr<<endl;
	return 0;
}