#include<iostream>
#include<stack>
using namespace std;
bool bal(char * arr){
	stack<char> s;
	for(int i = 0; arr[i]; i++){
		switch(arr[i]){
		case '{':
		case '[':
		case '(':
			s.push(arr[i]);
			break;
		case '}':
			if(!s.empty() and s.top() == '{') s.pop();
			else return false;
			break;
		case ']':
			if(!s.empty() and s.top() == '[') s.pop();
			else return false;
			break;
		case ')':
			if(!s.empty() and s.top() == '(') s.pop();
			else return false;
			break;
		}
	}
	return s.empty();
}
int main(){
	char arr[] = "{a+b*[c-d*(e%f)]-g}";
	bal(arr) ? cout<<"Yes\n" : cout<<"No\n";
	return 0;
}