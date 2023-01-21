#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string s = "Hello world";
	s = "Bye bye";
	// s.pop_back();
	cout<<s.size()<<endl;
	cout<<s<<endl;
	s.push_back('\0');
	s.push_back('p');
	s.push_back('\0');
	s.push_back('Y');
	cout<<s.length()<<endl;
	cout<<s<<endl;
	

	// cout<<"using for loop\n";
	// for(int i = 0; i < s.size(); i++){
	// 	cout<<s[i];
	// }cout<<endl;
	return 0;
}