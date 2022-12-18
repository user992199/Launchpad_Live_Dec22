#include<iostream>
using namespace std;
int main(){
	char in;
	cin.get(in); // cin>>in;
	while(in != '$'){
		cout<<in<<" "<<(int)in<<"_";
		cin.get(in); // cin>>in;
	}
	return 0;
}