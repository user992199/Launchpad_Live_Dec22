#include<iostream>
#include<queue>
using namespace std;
class node{
public:
	int data;
	node * left, * right;
	node():left(0), right(0){}
	node(int d):left(0), right(0), data(d){}
};
void level_order_traversal(node * root){
	queue<node *> q;
	q.push(root);
	q.push(NULL);
	cout<<"Level Order Traversal: \n";
	while(q.size() > 1){
		node * temp = q.front();
		q.pop();
		if(!temp){
			cout<<endl;
			q.push(temp);
			continue;
		}
		if(temp->left) q.push(temp -> left);
		if(temp->right) q.push(temp -> right);
		cout<<temp -> data<<" ";
	}
	cout<<endl;
}
node * create_bt(){
	int data;
	cin>>data;
	if(data == -1) return NULL;
	node * root = new node(data);
	root -> left = create_bt();
	root -> right = create_bt();
	return root;
}

// Top View Tree

void find_ext(node * root, int &mil, int &mal, int cl = 0){
	// base case
	if(!root) return;
	// recursive case
	if(cl > mal) mal = cl;
	if(cl < mil) mil = cl;
	find_ext(root -> left, mil, mal, cl-1);
	find_ext(root -> right, mil, mal, cl+1);
}
bool top_view_helper(node * root, int tl, int cl = 0){
	// base case
	if(!root) return false;
	// recursive case
	if(cl == tl){
		cout<<root -> data<<" ";
		return true;
	}
	if(tl < 0){
		if(top_view_helper(root -> left, tl, cl-1)) return true;
		return top_view_helper(root -> right, tl, cl+1);
	}
	if(tl > 0){
		if(top_view_helper(root -> right, tl, cl+1)) return true;
		return top_view_helper(root -> left, tl, cl-1);
	}
	return false; // not possible to reach this line
}
void top_view(node * root){
	int mil = 0, mal = 0;
	find_ext(root, mil, mal);
	for(int i = mil; i <= mal; i++){
		top_view_helper(root, i);
	}
	cout<<endl;
}
void print_at_level_k(node * root, int k, int cl = 0){
	if(!root or cl > k) return;
	if(cl == k){
		cout<<root -> data<<" ";
		return;
	}
	print_at_level_k(root -> left, k, cl+1);
	print_at_level_k(root -> right, k, cl+1);
}
int print_at_dist_k(node * root, int target, int k){
	if(!root) return -1;
	if(root -> data == target){
		print_at_level_k(root, k, 0);
		return 0;
	}
	// if target is in the left subtree
	int x = print_at_dist_k(root -> left, target, k);
	if(x != -1){
		// kya root node print hoga ya nahi hoga
		if(x + 1 == k){
			cout<<root -> data<<" ";
			return x+1;
		}
		// right subtree ke nodes print kardo (kyunki usme target nahi hai)
		if(x+2 <= k) print_at_level_k(root -> right, k, x+2);
		return x+1;
	}
	// if target is in the right subtree
	x = print_at_dist_k(root -> right, target, k);
	if(x != -1){
		// kya root node print hoga
		if(x + 1 == k){
			cout<<root -> data<<" ";
			return x+1;
		}
		// left subtree ke nodes print kardo (kyunki usme target nahi hai)
		if(x+2 <= k) print_at_level_k(root -> left, k, x+2);
		return x+1;
	}
	// agar kisi bhi subtree mein target present nahi hai to
	return x;
}
int main(){
	node * root = create_bt();
	level_order_traversal(root);
	// top_view(root);
	print_at_dist_k(root, 10, 2);
	return 0;
}