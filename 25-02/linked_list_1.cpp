#include<iostream>
using namespace std;
class node{
public:
	int data;
	node * next; 
	node():next(0){}
	node(int d):next(0), data(d){}
	// node(int d, node * n): data(d), next(n){}
};
void print_ll(node * head){
	while(head){
		cout << head -> data << " -> ";
		head = head -> next;
	}
	cout<<"NULL\n";
	// node * curr = head;
	// while(curr != 0){
	// 	cout << curr -> data << " -> ";
	// 	curr = curr -> next;
	// }
	// cout<<"NULL\n";
}
int length_ll(node * head){
	int cnt = 0;
	while(head){
		cnt++;
		head = head -> next;
	}
	return cnt;
}
void insert_at_begin(int data, node * & head,  node * & tail){
	node * temp = new node(data);
	if(head == NULL){
		head = tail = new node(data);
	}else{
		temp -> next = head;
		head = temp;
		// head = new node(data, head);
	}
}
void insert_at_end(int data, node * & head, node * & tail){
	node * temp = new node(data);
	if(tail){
		tail -> next = temp;
		tail = temp;
	}else{
		head = tail = temp;
	}
}
void insert_at_pos(int data, int pos, node * & head, node * & tail){
	int n = length_ll(head);
	if(pos < 2){
		insert_at_begin(data, head, tail);
	}else if(pos > n){
		insert_at_end(data, head, tail);
	}else{
		node * curr_node = head;
		int curr_pos = 1;
		// loop to reach the position where node is to be inserted
		while(curr_pos < pos-1){
			curr_node = curr_node -> next;
			curr_pos++;
		}
		node * new_node = new node(data); // step 1
		new_node -> next = curr_node -> next; // step 2
		curr_node -> next = new_node; // step 3
	}
}
int main(){
	node * head = 0, * tail = 0;
	for(int i = 10; i < 60; i+=10)
		insert_at_end(i, head, tail);
	print_ll(head);
	cout<<length_ll(head)<<endl;
	insert_at_pos(0, 1, head, tail);
	print_ll(head);
	insert_at_pos(100, 7, head, tail);
	print_ll(head);
	insert_at_pos(35, 5, head, tail);
	print_ll(head);
	return 0;
}