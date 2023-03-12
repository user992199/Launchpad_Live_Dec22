#include<iostream>
#include<queue>
using namespace std;
class Stack{
	queue<int> q1;
	queue<int> q2;
public:
	void push(int data){
		if(q1.empty()){
			q1.push(data);
			while(!q2.empty()){
				q1.push(q2.front());
				q2.pop();
			}
		}else{
			q2.push(data);
			while(!q1.empty()){
				q2.push(q1.front());
				q1.pop();
			}
		}
	}
	void pop(){
		if(!q1.empty()){
			q1.pop();
		}else if(!q2.empty()){
			q2.pop();
		}
	}
	int top(){
		if(!q1.empty()){
			return q1.front();
		}else if(!q2.empty()){
			return q2.front();
		}
		return -1;
	}
	int size(){
		if(!q1.empty()){
			return q1.size();
		}
		return q2.size();
	}
	bool empty(){
		return q1.empty() and q2.empty();
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