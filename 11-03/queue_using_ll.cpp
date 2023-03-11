#include<iostream>
using namespace std;
class node{
public:
	int data;
	node * next;
	node():next(0){}
	node(int d):data(d), next(0){}
};
class Queue{
	node * head, * tail;
	int cs;
public:
	Queue():head(0), tail(0), cs(0){}
	void push(int data){
		if(!head) head = tail = new node(data);
		else{
			tail -> next = new node(data);
			tail = tail -> next;
		}
		cs++;
	}
	void pop(){
		if(!head) return;
		node * temp = head;
		head = head -> next;
		delete temp;
		if(!head) tail = 0;
		cs--;
	}
	int front(){
		return head->data;
	}
	int size(){
		return cs;
	}
	bool empty(){
		return !head;
	}
};
int main(){
	Queue q;
	cout<<"size: "<<q.size()<<endl;
	for(int i = 1; i < 21; i++){
		cout<<i<<" ";
		q.push(i);
	}cout<<endl;
	cout<<"size: "<<q.size()<<endl;
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}cout<<endl;
	cout<<"size: "<<q.size()<<endl;
	for(int i = 1; i < 21; i++){
		cout<<i<<" ";
		q.push(i);
	}cout<<endl;
	cout<<"size: "<<q.size()<<endl;
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}cout<<endl;
	return 0;
}