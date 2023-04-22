#include<iostream>
#include<list>
using namespace std;
class Graph{
	list<int> * table;
	int s;
public:
	Graph(int size = 5){
		s = size;
		table = new list<int> [s];
	}
	void add_edge(int u, int v, bool bidirectional = true){
		table[u].push_back(v);
		if(bidirectional){
			table[v].push_back(u);
		}
	}
	void print(){
		cout<<"key\t->\tvalue\n";
		for(int i = 0; i < s; i++){
			cout<<i<<"\t->\t";
			for(int neighbor: table[i]){
				cout<<neighbor<<" ";
			}cout<<endl;
		}
	}
	bool is_edge_present(int u, int v){
		for(int neighbor: table[u]){
			if(v == neighbor){
				return true;
			}
		}
		return false;
	}
};
int main(){
	Graph g;
	g.add_edge(0, 1);
	g.add_edge(0, 4);
	g.add_edge(1, 4);
	g.add_edge(1, 3);
	g.add_edge(1, 2);
	g.add_edge(3, 4);
	g.add_edge(3, 2);
	g.print();
	if(g.is_edge_present(0, 3)){
		cout<<"yes\n";
	}else{
		cout<<"no\n";
	}
	return 0;
}