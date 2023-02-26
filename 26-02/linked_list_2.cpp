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
void delete_from_begin(node * &head, node * & tail){
	if(head){ // same as if(head != NULL)
		node * temp = head;
		head = head -> next;
		delete temp;
		if(!head) // same as if(head == NULL)
			tail = NULL;
	}
}
void delete_from_end(node *&head, node *&tail){
	if(head){
		if(!(head -> next)){
			delete head;
			head = tail = 0;
		}else{
			// find 2nd last node
			node * temp = head;
			while(temp -> next -> next){
				temp = temp -> next;
			}
			temp -> next = 0;
			delete tail;
			tail = temp;
		}
	}
}
void delete_from_pos(int pos, node * & head, node * & tail){
	int n = length_ll(head);
	if(pos <= 1) delete_from_begin(head, tail);
	else if(pos >= n) delete_from_end(head, tail);
	else{
		// get the prev node of the node which is to be deleted
		node * prev = head;
		int curr_pos = 1;
		while(curr_pos < pos - 1){
			prev = prev -> next;
			curr_pos++;
		}
		node * curr_node = prev -> next;
		prev -> next = curr_node -> next;
		delete curr_node;
	}
}
node * linear_search(node * head, int key){
	while(head){
		head = head -> next;
		if( head -> data == key ) return head;
	}
	return head;
}
node * linear_search_rec(node * head, int key){
	// base case
	if(!head) return 0;
	// recursive case
	if(head -> data == key) return head;
	return linear_search_rec(head -> next, key);
}
node * find_middle(node * head){
	node * fast = head;
	node * slow = head;
	while(fast -> next and fast -> next -> next){
		slow = slow -> next;
		fast = fast -> next -> next;
	}
	return slow;
}
void recompute_tail(node * head, node * & tail){
	while(head -> next){
		head = head -> next;
	}
	tail = head;
}
void bubble_sort(node * & head, node * & tail){
	int n = length_ll(head);
	for(int i = 0; i < n-1; i++){
		node * pn, * cn, * nn;
		pn = 0;
		cn = head;
		nn = cn -> next;
		while( cn -> next ){
			nn = cn -> next;
			if( cn -> data > nn -> data){
				if(cn == head){
					cn -> next = nn -> next;
					nn -> next = cn;
					head = nn;
					pn = nn;
				}else{
					pn -> next = nn;
					cn -> next = nn -> next;
					nn -> next = cn;
					pn = nn;
				}
			}else{
				pn = cn;
				cn = nn;
			}
		}
	}
	recompute_tail(head, tail);
}
void reverse_ll(node * & head, node * & tail){
	node * pn = 0, * cn = head, * nn = head;
	while(nn){
		nn = cn -> next;
		cn -> next = pn;
		pn = cn;
		cn = nn;
	}
	swap(head, tail);
}
int main(){
	node * head = 0, * tail = 0;
	for(int i = 10; i < 60; i+=10)
		insert_at_begin(i, head, tail);
	insert_at_begin(-10, head, tail);
	print_ll(head);
	bubble_sort(head, tail);
	print_ll(head);
	reverse_ll(head, tail);
	print_ll(head);
	return 0;
}