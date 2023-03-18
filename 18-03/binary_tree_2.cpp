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
int diameter_bt(node * root){
	// base case
	if(!root) return 0;
	// recursive case
	int op1 = height_bt(root -> right) + height_bt(root -> left);
	int op2 = diameter_bt(root -> left);
	int op3 = diameter_bt(root -> right);
	return max(op1, max(op2, op3));
}
class Pair{
public:
	int height;
	int diameter;
	Pair(int h, int d): height(h), diameter(d){}
};
Pair diameter_opt_helper(node * root){
	// base case
	if(!root){
		Pair p(0, 0);
		return p;
	}
	// recursive case
	Pair l = diameter_opt_helper(root -> left);
	Pair r = diameter_opt_helper(root -> right);
	int hgt = max(l.height, r.height) + 1;
	int dmtr = max(l.diameter, max(r.diameter, l.height + r.height));
	Pair curr(hgt, dmtr);
	return curr;
}
int diameter_opt(node * root){
	return diameter_opt_helper(root).diameter;
}
node * search_bt(node * root, int key){
	// base case 
	if(!root) return 0;
	// recursive case
	if(root -> data == key){return root;}
	node * left = search_bt(root -> left, key);
	if(left) return left;
	return search_bt(root -> right, key);
}
void mirror(node * root){
	// base case
	if(!root) return;
	// recursive case
	mirror(root -> left);
	mirror(root -> right);
	swap(root -> left, root -> right);
}
void print_details(node * root){
	cout<<"Number of Node = "<<count_node(root)<<endl;
	cout<<"Height of Tree = "<<height_bt(root)<<endl;
	cout<<"Diameter of Tree = "<<diameter_bt(root)<<endl;
	cout<<"Fast Diameter of Tree = "<<diameter_opt(root)<<endl;
}
void print_all(node * root, bool check){
	cout<<"Preorder: ";
	preorder(root);
	cout<<endl;
	cout<<"Inorder: ";
	inorder(root);
	cout<<endl;
	cout<<"Postorder: ";
	postorder(root);
	cout<<endl;

	if(check) print_details(root);
}
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

node * create_level_wise(){
	cout<<"Enter root node: ";
	int data;
	cin>>data;
	queue<node *> q;
	if(data == -1) return 0;
	node * root = new node(data);
	q.push(root);
	while(!q.empty()){
		node * temp = q.front();
		q.pop();
		cout<<"Enter the children of "<<temp -> data<<": ";
		int l, r;
		cin>>l>>r;
		if(l != -1){
			temp -> left = new node(l);
			q.push(temp -> left);
		}
		if(r != -1){
			temp -> right = new node(r);
			q.push(temp -> right);
		}
	} 
	return root;
}

void right_view_lot(node * root){
	queue<node *> q;
	q.push(root);
	q.push(NULL);
	cout<<"Right View: \n";
	while(q.size() > 1){
		node * temp = q.front();
		q.pop();
		if(!temp){
			cout<<endl;
			q.push(temp);
			continue;
		}
		else if(!q.front()){
			cout<<temp -> data<<endl;
		}
		if(temp->left) q.push(temp -> left);
		if(temp->right) q.push(temp -> right);
	}
	cout<<endl;
}
void rv_helper(node * root, int cl, int &ml){
	// base case
	if(!root) return;
	// recursive case
	if(cl > ml){
		ml = cl;
		cout<<root -> data<<endl;
	}
	rv_helper(root -> right, cl+1, ml);
	rv_helper(root -> left, cl+1, ml);
}
void right_view_rec(node * root){
	cout<<"Right View Recursion: \n";
	int ml = -1;
	rv_helper(root, 0, ml);
}
int main(){
	node * root = create_bt();
	// if(search_bt(root, 9)) cout<<"Found\n";
	// else cout<<"Not Found\n";
	// print_all(root, false);
	// mirror(root);
	// level_order_traversal(root);
	// print_all(root, false);


	// node * root = create_level_wise();
	level_order_traversal(root);
	right_view_lot(root);
	right_view_rec(root);
	return 0;
}