#include<iostream>
using namespace std;
int main(){
	int i = 10;
	// syntax to create a reference variable
	// datatype &identifier = og_variable_identifier;
	int &j = i;
	// it is compulsory to initialize a reference variable
	int &h = i;
	int &x = j;
	h += 6;
	j += 17;
	cout<<"i: "<<i<<endl;
	cout<<"j: "<<j<<endl;
	cout<<"h: "<<h<<endl;
	cout<<"x: "<<x<<endl;
	return 0;
}