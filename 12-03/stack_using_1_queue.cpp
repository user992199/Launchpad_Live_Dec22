#include<iostream>
#include<queue>
using namespace std;
class Stack{
	queue<int> q1;
public:
	void reverse_queue(){
		// base case
		if(q1.empty()) return;
		// recursive case
		int front_element = q1.front();
		q1.pop();
		reverse_queue();
		q1.push(front_element);
	}
	void push(int data){
		reverse_queue();
		q1.push(data);
		reverse_queue();
	}
	void pop(){
		q1.pop();
	}
	int top(){
		return q1.front();
	}
	int size(){
		return q1.size();
	}
	bool empty(){
		return q1.empty();
	}
};
int main(){
	Stack s;
	int n = 11;
	while(--n){
		cout<<n<<" ";
		s.push(n);
	}cout<<endl;
	cout<<"size: "<<s.size()<<endl;
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
	return 0;
}