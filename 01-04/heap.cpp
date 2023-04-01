#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Heap{
	vector<int> v;
public:
	Heap(){
		v.push_back(-1);
	}
	void push(int data){
		v.push_back(data);
		int c = v.size() - 1;
		int p = c/2;
		while(c > 1 and v[c] < v[p]){
			swap(v[c], v[p]);
			c = p;
			p = c/2;
		}
		// print_lo();
	}
	void print_lo(){
		queue<int> q;
		q.push(1);
		q.push(0);
		while(q.size() > 1){
			int ci = q.front();
			q.pop();
			if(ci == 0){
				cout<<endl;
				q.push(0);
				continue;
			}
			cout<<v[ci]<<" ";
			if(ci * 2 < v.size()) q.push(ci*2);
			if(ci * 2 + 1 < v.size()) q.push(ci*2+1);
		}
		cout<<endl;
	}
	void print(){
		for(int i = 1; i < v.size(); i++){
			cout<<v[i]<<" ";
		}cout<<endl;
	}
	int top(){
		return v[1];
	}
	int size(){
		return v.size() - 1;
	}
	void pop(){
		if(v.size() == 1) return;
		swap(v[1], v[v.size() - 1]);
		v.pop_back();
		int p = 1;
		int lc = p*2;
		int rc = p*2 + 1;
		while(lc < v.size()){
			int mi = p;
			if(v[p] > v[lc]) mi = lc;
			if(rc < v.size() and v[mi] > v[rc]) mi = rc;
			if(p == mi) break;
			swap(v[p], v[mi]);
			p = mi;
			lc = p * 2;
			rc = lc + 1;
		}
	}
	bool empty(){
		return v.size() == 1;
	}
};
int main(){
	Heap h;
	int d;
	cin>>d;
	while(d != -1){
		h.push(d);
		cin>>d;
	}
	// h.print();
	h.print_lo();
	while(!h.empty()){
		cout<<h.top()<<" ";
		h.pop();
	}
	return 0;
}