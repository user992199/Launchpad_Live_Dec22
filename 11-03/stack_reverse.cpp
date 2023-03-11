#include<iostream>
#include<stack>
using namespace std;
void push_bottom(stack<int> &s, int data){
	// base case
	if(s.empty()){
		s.push(data);
		return;
	}
	// recursive case
	int ts = s.top();
	s.pop();
	push_bottom(s, data);
	s.push(ts);
}
void reverse_stack(stack<int> &s){
	// base case
	if(s.empty()) return;
	// recursive case
	int te = s.top();
	s.pop();
	reverse_stack(s);
	push_bottom(s, te);
}
void print(stack<int> s){
	while(s.size()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
}
int main(){
	stack<int> s;
	int n = 10;
	while(--n){
		s.push(n);
	}
	print(s);
	reverse_stack(s);
	print(s);
	return 0;
}