#include<iostream>
#include<stack>
using namespace std;
class Queue{
	stack<int> s1;	
public:
	void push(int data){
		// base case
		if(s1.empty()){
			s1.push(data);
			return;
		}
		// recursive case
		int top_ele = s1.top();
		s1.pop();
		push(data); // push_bottom
		s1.push(top_ele);
	}
	void pop(){
		s1.pop();
	}
	int front(){
		return s1.top();
	}
	int size(){
		return s1.size();
	}
	bool empty(){
		return s1.empty();
	}
};
int main(){
	Queue q;
	int n = 11;
	while(--n){
		cout<<n<<" ";
		q.push(n);
	}
	cout<<endl;
	cout<<q.size()<<endl;
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
	return 0;
}