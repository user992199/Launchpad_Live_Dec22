#include<iostream>
using namespace std;
class node{
public:
	int data;
	node * next;
	node():next(0){}
	node(int d):data(d), next(0){}
};
class Stack{
	node * head;
	int cs;
public:
	Stack():head(0), cs(0){}
	void push(int data){
		node * temp = new node(data);
		temp -> next = head;
		head = temp;
		cs++;
	}
	void pop(){
		if(head){
			node * temp = head;
			head = head -> next;
			delete temp;
			cs--;
		}
	}
	int size(){
		return cs;
	}
	int top(){
		return head -> data;
	}
	bool empty(){
		return !head;
	}
};
int main(){
	Stack s;
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
	cout<<endl;
	s.pop();
	s.pop();
	s.pop();
	cout<<"size: " <<s.size()<<endl;
	return 0;
}