#include<iostream>
#include<unordered_map>
#include<cstring>
#include<list>
#include<utility>
#include<set>
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
	void sssp(T src){
		set<pair<int, T> > s;
		unordered_map<T, int> distance;
		for(auto node: adj_list){
			distance[node.first] = INT_MAX;
		}
		s.insert(make_pair(0, src));
		distance[src] = 0;
		while(s.size()){
			auto node_pair = *(s.begin());
			T node = node_pair.second;
			s.erase(s.begin());
			for(auto neighbor_pair: adj_list[node]){
				T neighbor = neighbor_pair.first;
				int node_neighbor_dist = neighbor_pair.second;
				auto neigh_add = s.find(make_pair(distance[neighbor], neighbor));
				int dist_through_node = distance[node] + node_neighbor_dist;
				if(neigh_add != s.end()){
					if(distance[neighbor] > dist_through_node){
						distance[neighbor] = dist_through_node;
						s.erase(neigh_add);
						s.insert(make_pair(dist_through_node, neighbor));
					}
				}
				else{
					if(distance[neighbor] == INT_MAX){
						distance[neighbor] = dist_through_node;
						s.insert(make_pair(dist_through_node, neighbor));
					}
				}
			}
		}
		for(auto node: distance){
			cout<<node.first<<" "<<node.second<<endl;
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
	// g.print();
	g.sssp("Jaipur");


	return 0;
}