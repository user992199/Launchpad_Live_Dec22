#include<iostream>
using namespace std;
class node{
public:
	int number;
	node * left; // 0
	node * right; // 1
	node():number(-1), left(0), right(0){}
};
class trie{
public:
	node * root;
	trie(){
		root = new node();
	}
	void insert(int n){
		node * temp = root;
		for(int i = 31; i >= 0; i--){
			int bit = n & (1 << i);
			if(bit){
				if(!(temp -> right))
					temp -> right = new node();
				temp = temp -> right;
			}
			else{
				if(!(temp -> left))
					temp -> left = new node();
				temp = temp -> left;	
			}
		}
		temp -> number = n;
	}
	int max_xor_helper(int n){
		node * temp = root;
		for(int i = 31; i >= 0; i--){
			int bit = n & (1 << i);
			if(bit){ // desired bit => 0
				if(temp -> left) temp = temp -> left;
				else temp = temp -> right;
			}else{ // desired bit => 1
				if(temp -> right) temp = temp -> right;
				else temp = temp -> left;
			}
		}
		return n ^ (temp -> number);
	}
	int max_xor(int * arr, int n){
		int ans = INT_MIN;
		insert(arr[0]);
		for(int i = 1; i < n; i++){
			ans = max(ans, max_xor_helper(arr[i]));
			insert(arr[i]);
		}
		return ans;
	}
};
int main(){
	trie t;
	int arr[] = {1, 2, 4, 8, 16, 32};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<t.max_xor(arr, n)<<endl;
	return 0;
}