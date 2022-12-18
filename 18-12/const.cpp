#include<iostream>
using namespace std;
int main(){
	// usko baadme koi value assign nahi kar skte
	float input;
	cin>>input;
	const float pie = input; // usko initialize karna compulsory hota hai
	cout<<pie<<endl;
	return 0;
}