#include<iostream>
using namespace std;
int main(){
	char ch;
	cin>>ch;
	if(isupper(ch)){
		cout<<"UPPER CASE\n";
	}
	else if(islower(ch)){
		cout<<"lower case\n";
	}
	return 0;
}