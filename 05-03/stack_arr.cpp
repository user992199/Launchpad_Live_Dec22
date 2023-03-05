#include<iostream>
using namespace std;
class Stack{
	int * arr;
	int cs, ts;
public:
	Stack(int s = 10){
		arr = new int[s];
		cs = 0;
		ts = s;
	}
	void push(int data){
		if(cs == ts){
			cout<<"\nStack Overflow\n";
			return;
		}
		arr[cs++] = data;
	}
	void pop(){
		if(cs) cs--;
		// cs ? cs-- : cout<<"Stack Underflow\n";
	}
	int size(){
		return cs;
	}
	int top(){
		return arr[cs-1];
	}
	bool empty(){
		return cs == 0;
	}
};
int main(){
	Stack s(5);
	int n = 50;
	cout<<"Input: ";
	while(--n){
		cout<<n<<" ";
		s.push(n);
	}
	cout<<endl;
	cout<<"size: "<<s.size()<<endl;
	cout<<"Output: ";
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	s.pop();
	s.pop();
	s.pop();
	cout<<endl;
	return 0;
}