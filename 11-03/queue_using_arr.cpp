#include<iostream>
using namespace std;
class Queue{
	int * arr;
	int s, e, ms, cs;
public:
	Queue(int given_size = 10){
		arr = new int[given_size];
		s = 0;
		e = -1;
		ms = given_size;
		cs = 0;
	}
	void push(int data){
		if(cs == ms){
			// cout<<"Queue is Full\n";
			return;
		}
		// e = (e+1)%ms;
		// arr[e] = data;
		arr[(++e)%ms] = data;
		cs++;
	}
	void pop(){
		if(cs == 0) return;
		// s = (s+1)%ms;
		// (++s)%ms;
		++s %= ms;
		cs--;
	}
	int front(){
		return arr[s];
	}
	int size(){
		return cs;
	}
	bool empty(){
		return cs == 0;
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
}