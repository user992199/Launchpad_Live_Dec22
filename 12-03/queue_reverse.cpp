#include<iostream>
#include<queue>
using namespace std;
void reverse_queue(queue<int> &q){
	// base case
	if(q.empty()) return;
	// recursive case
	int front_element = q.front();
	q.pop();
	reverse_queue(q);
	q.push(front_element);
}
void print(queue<int> q){
	while(q.size()){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
}
int main(){
	queue<int> q;
	int n = 11;
	cout<<"Input: ";
	while(--n){
		cout<<n<<" ";
		q.push(n);
	}
	cout<<endl;
	cout<<"Before Reversing\n";
	print(q);
	reverse_queue(q);
	cout<<"After Reversing\n";
	print(q);
	return 0;
}