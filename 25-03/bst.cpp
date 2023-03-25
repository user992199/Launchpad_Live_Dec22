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
int main(){
	node * root = create_bst();
	print_all(root);
	// search(root, 13) ? cout<<"Data Found\n" : cout<<"Data not Found\n";
	check_bst(root) ? cout<<"Yes\n" : cout<<"No\n";
	return 0;
}