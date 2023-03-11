#include<iostream>
#include<vector>
using namespace std;
class Queue{
	vector<int> v;
public:
	void push(int data){
		v.push_back(data);
	}
	void pop(){
		for(int i = 1; i < v.size(); i++){
			v[i-1] = v[i];
		}
		v.pop_back();
	}
	int front(){
		return v[0];
	}
	int size(){
		return v.size();
	}
	bool empty(){
		return v.empty();
	}
};
int main(){
	Queue q;
	cout<<"size: "<<q.size()<<endl;
	for(int i = 1; i < 21; i++){
		cout<<i<<" ";
		q.push(i);
	}cout<<endl;
	cout<<"size: "<<q.size()<<endl;
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}cout<<endl;
	cout<<"size: "<<q.size()<<endl;
	for(int i = 1; i < 21; i++){
		cout<<i<<" ";
		q.push(i);
	}cout<<endl;
	cout<<"size: "<<q.size()<<endl;
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}cout<<endl;
	return 0;
	return 0;
}