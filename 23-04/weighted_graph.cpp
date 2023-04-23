#include<iostream>
#include<unordered_map>
#include<cstring>
#include<list>
#include<utility>
using namespace std;
template <typename T>
class Graph{
	unordered_map<T, list<pair<T, int> > > adj_list;
public:
	void add_edge(T u, T v, int weight, bool bidir = true){
		adj_list[u].push_back(make_pair(v, weight));
		if(bidir){
			adj_list[v].push_back(make_pair(u, weight));
		}
	}
	void print(){
		for(auto node: adj_list){
			cout<<node.first<<"\t->\t";
			for(auto neighbor: adj_list[node.first]){
				cout<<neighbor.first<<"("<<neighbor.second<<")\t";
			}cout<<endl;
		}
	}
};
int main(){
	Graph<string> g;
	g.add_edge("Agra", "Amritsar", 1);
	g.add_edge("Jaipur", "Amritsar", 4);
	g.add_edge("Agra", "Delhi", 1);
	g.add_edge("Jaipur", "Delhi", 2);
	g.add_edge("Agra", "Bhopal", 2);
	g.add_edge("Mumbai", "Bhopal", 3);
	g.add_edge("Mumbai", "Jaipur", 8);
	g.print();
	return 0;
}