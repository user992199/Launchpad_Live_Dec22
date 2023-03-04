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
node * merge_2_ll_rec(node * h1, node * h2){
	// base case
	if(!h1) return h2;
	if(!h2) return h1;
	// recursive case
	node * h3;
	if(h1 -> data < h2 -> data){
		h3 = h1;
		h3 -> next = merge_2_ll_rec(h1 -> next, h2);
	}else{
		h3 = h2;
		h3 -> next = merge_2_ll_rec(h1, h2 -> next);
	}
	return h3;
}
node * merge_2_ll(node * h1, node * h2){
	node * h3 = 0;
	node * t3 = h3;
	if(h1 -> data < h2 -> data){
		t3 = h3 = h1;
		h1 = h1 -> next;
	}else{
		t3 = h3 = h2;
		h2 = h2 -> next;
	}
	while(h1 and h2){
		if(h1 -> data < h2 -> data){
			t3 -> next = h1;
			h1 = h1 -> next;
			t3 = t3 -> next;
		}else{
			t3 -> next = h2;
			h2 = h2 -> next;
			t3 = t3 -> next;
		}
	}
	if(h1){
		t3 -> next = h1;
	}
	if(h2){
		t3 -> next = h2;
	}
	return h3;
}
node * merge_sort(node * head){
	// base case
	if(!head or head -> next == 0) return head;
	// recursive case
	// divide
	node * mid = find_middle(head);
	node * h2 = mid -> next;
	mid -> next = 0;
	// sort
	head = merge_sort(head);
	h2 = merge_sort(h2);
	// merge
	head = merge_2_ll_rec(head, h2);
	return head;
}
void create_cycle(node * head, node * & tail){
	recompute_tail(head, tail);
	tail -> next = head -> next -> next;
}
node * cycle_detect(node * head){
	node * fast = head;
	node * slow = head;
	while(fast and fast -> next){
		// cout<<"slow: "<<slow -> data<<endl;
		// cout<<"fast: "<<fast -> data<<endl<<endl;
		fast = fast -> next -> next;
		slow = slow -> next;
		if(fast == slow){ 
			// cout<<"exit => slow: "<<slow -> data<<endl;
			return slow;
		}
	}
	return NULL;
}
void break_cycle(node * head){
	node * f = cycle_detect(head);
	if(!f) return;
	node * s = head -> next;
	while(s != f -> next){
		s = s -> next;
		f = f -> next;
	}
	f -> next = 0;
}
int main(){
	node * head = 0, * tail = 0;
	for(int i = 0; i < 10; i++){
		insert_at_pos(i, i/2, head, tail);
	}
	cout<<"before\n";
	if(!cycle_detect(head))
		print_ll(head);
	create_cycle(head, tail);
	cout<<"after\n";
	if(!cycle_detect(head))
		print_ll(head);
	else
		break_cycle(head);
	cout<<"after after\n";
	print_ll(head);
	return 0;
}