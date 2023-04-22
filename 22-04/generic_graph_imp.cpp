#include<iostream>
#include<list>
#include<unordered_map>
#include<cstring>
using namespace std;
template <typename T>
class Graph{
	unordered_map<T, list<T> > table;
public:
	void add_edge(T u, T v, bool bidirectional = true){
		table[u].push_back(v);
		if(bidirectional) table[v].push_back(u);
		else table[v];
	}
	void print(){
		cout<<"node\t|\tneigbors\n------------------------\n";
		for(pair<T, list<T> > i: table){
			cout<<i.first<<"\t|\t";
			for(T neighbor: i.second){
				cout<<neighbor<<" ";
			}cout<<endl;
		}
	}
	bool is_edge_present(T u, T v){
		for(T neighbor: table[u]){
			if(v == neighbor){
				return true;
			}
		}
		return false;
	}
};
int main(){
	Graph<string> g;
	g.add_edge("Modi", "Trump");
	g.add_edge("Modi", "Yogi");
	g.add_edge("Prabhu", "Modi", false);
	g.add_edge("Yogi", "Prabhu", false);
	g.add_edge("Putin", "Modi", false);
	g.add_edge("Putin", "Trump", false);
	g.add_edge("Putin", "Pope", false);
	g.print();
	if(g.is_edge_present("Prabhu", "Trump")){
		cout<<"yes\n";
	}else{
		cout<<"no\n";
	}
	return 0;
}