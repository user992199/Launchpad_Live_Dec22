#include<iostream>
#include<stack>
using namespace std;
class Queue{
	stack<int> s1;
	stack<int> s2;
public:
	void push(int data){
		// step 1
		// s1 se s2 mein saara data daalo
		while(!s1.empty()){
			s2.push(s1.top());
			s1.pop();
		}
		// step 2
		// s1 mein element push karo
		s1.push(data);
		// step 3
		// s2 se s1 mein saara data wapis daalo
		while(!s2.empty()){
			s1.push(s2.top());
			s2.pop();
		}
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