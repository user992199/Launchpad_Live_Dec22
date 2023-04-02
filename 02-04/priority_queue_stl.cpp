#include<iostream>
#include<queue>
using namespace std;
template<typename T>
class functor{
public:
	bool operator ()(T a, T b){
		return a > b;
	}
};
int main(){
	// max heap
	// priority_queue<int> pq;
	// min heap
	/*
	priority_queue<datatype, vector<dataty̆pe>, greater<datatype> > identifier;
	*/
	// priority_queue<int, vector<int>, less<int> > pq;
	priority_queue<int, vector<int>, functor<int> > pq;
	int data;
	cin>>data;
	while(data != -1){
		pq.push(data);
		cin>>data;
	}
	cout<<"Size: "<<pq.size()<<endl;
	while(!pq.empty()){
		cout<<pq.top()<<" ";
		pq.pop();
	}
	cout<<endl;


	return 0;
}