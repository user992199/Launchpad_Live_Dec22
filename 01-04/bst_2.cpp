#include<iostream>
using namespace std;
class node{
public:
	int data;
	node * left, * right;
	node(int d):data(d), left(0), right(0){}
};
void preorder(node * root){
	// base case
	if(!root) return;
	// recursive case
	cout<<root -> data<<" ";
	preorder(root -> left);
	preorder(root -> right);
}
void inorder(node * root){
	// base case
	if(!root) return;
	// recursive case
	inorder(root -> left);
	cout<<root -> data<<" ";
	inorder(root -> right);
}
void postorder(node * root){
	// base case
	if(!root) return;
	// recursive case
	postorder(root -> left);
	postorder(root -> right);
	cout<<root -> data<<" ";
}
void print_all(node * root){
	cout<<"Preorder: ";
	preorder(root);
	cout<<endl;
	cout<<"Inorder: ";
	inorder(root);
	cout<<endl;
	cout<<"Postorder: ";
	postorder(root);
	cout<<endl;
}
node * insert_node(node * root, int data){
	if(!root){
		root = new node(data);
		return root;
	}
	if(root -> data <= data)
		root -> right = insert_node(root -> right, data);
	if(root -> data > data) 
		root -> left = insert_node(root -> left, data);
	return root;
}
node * create_bst(){
	int data;
	cin>>data;
	node * root = 0;
	while(data != -1){
		root = insert_node(root, data);
		cin>>data;
	}
	return root;
}
node * search(node * root, int target){
	if(!root or root -> data == target) return root;
	else if(root -> data < target)
		return search(root -> right, target);
	else // if (root -> data > target)
		return search(root -> left, target);
}
bool check_bst(node * root, int ll = INT_MIN, int ul = INT_MAX){
	if(!root) return true;
	if(root -> data >= ll and root -> data <= ul)
		if(check_bst(root -> left, ll, root -> data))
			if(check_bst(root -> right, root -> data, ul))
				return true;
	return false;
}
void print_range(node * root, int k1, int k2){
	// base case
	if(!root) return;
	// recursive case
	if(root -> data >= k1) print_range(root -> left, k1, k2);
	if(root -> data <= k2 and root -> data >= k1) 
		cout<<root -> data<<" ";
	if(root -> data <= k2) print_range(root -> right, k1, k2);
}
int height(node * root){
	if(!root) return 0;
	return max(height(root -> left), height(root -> right)) + 1;
}
bool is_bal(node * root){
	if(!root) return true;
	if(!(is_bal(root -> left) and is_bal(root -> right)))
		return false;
	int diff = abs(height(root -> left) - height(root -> right));
	// if(diff < 2) return true;
	// return false;
	return diff < 2;
}
class Pair{
public:
	int height;
	bool bal;
	Pair(int h, bool b): height(h), bal(b){}
};
Pair is_bal_opt_helper(node * root){
	if(!root){
		Pair p(0, true);
		return p;
	}
	Pair n(0, false);
	Pair l = is_bal_opt_helper(root -> left);
	if(!l.bal) return n;
	Pair r = is_bal_opt_helper(root -> right);
	if(!r.bal) return n;
	int diff = abs(l.height - r.height);
	if(diff < 2){
		n.height = max(l.height, r.height) + 1;
		n.bal = true;
	}
	return n;
}
bool is_bal_opt(node * root){
	return is_bal_opt_helper(root).bal;
}
int main(){
	node * root = create_bst();
	print_all(root);
	print_range(root, 5, 10);
	cout<<endl;
	is_bal_opt(root) ? cout<<"Bal\n" : cout<<"NBal\n";
	return 0;
}