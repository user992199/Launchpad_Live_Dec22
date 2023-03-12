#include<iostream>
using namespace std;
class node{
public:
	int data;
	node * left, * right;
	node():left(0), right(0){}
	node(int d):left(0), right(0), data(d){}
};
node * create_bt(){
	int data;
	cin>>data;
	if(data == -1) return NULL;
	node * root = new node(data);
	root -> left = create_bt();
	root -> right = create_bt();
	return root;
}
void cbt_2(node * &root){
	int data;
	cin>>data;
	if(data == -1) return;
	root = new node(data);
	cbt_2(root -> left);
	cbt_2(root -> right);
}
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
int count_node(node * root){
	// base case
	if(!root) return 0;
	// recursive case
	return count_node(root -> left) + count_node(root -> right) + 1;
}
int height_bt(node * root){
	// base case
	if(!root) return 0;
	// recursive case
	return max(height_bt(root -> left), height_bt(root -> right)) + 1;
}
int main(){
	node * root = create_bt();
	// node * root = 0;
	// cbt_2(root);
	cout<<"Preorder: ";
	preorder(root);
	cout<<endl;
	cout<<"Inorder: ";
	inorder(root);
	cout<<endl;
	cout<<"Postorder: ";
	postorder(root);
	cout<<endl;

	cout<<"Number of Node = "<<count_node(root)<<endl;
	cout<<"Height of Tree = "<<height_bt(root)<<endl;
	return 0;
}