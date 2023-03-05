#include<iostream>
#include<vector>
using namespace std;
class Stack{
	vector<int> vec;
public:
	void push(int data){
		vec.push_back(data);
	}
	void pop(){
		vec.pop_back();
	}
	int size(){
		return vec.size();
	}
	int top(){
		return vec[vec.size()-1];
	}
	bool empty(){
		return vec.empty();
	}
};
int main(){
	Stack s;
	int n = 5;
	cout<<"Input: ";
	while(--n){
		cout<<n<<" ";
		s.push(n);
	}
	cout<<endl;
	cout<<"size: "<<s.size()<<endl;
	cout<<"Output: ";
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
	return 0;
}