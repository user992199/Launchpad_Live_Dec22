#include<iostream>
#include<list>
#include<unordered_map>
#include<queue>
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
	void bfs(T src){
		unordered_map< T, bool > visited;
		queue<T> q;
		visited[src] = true;
		q.push(src);
		while(q.size()){
			T node = q.front();
			q.pop();
			cout<<node<<" ";
			for(auto neighbor: table[node]){
				if(!visited[neighbor]){
					visited[neighbor] = true;
					q.push(neighbor);
				}
			}
		}

		cout<<endl;
	}
	int sssp(T u, T v){ // single source shortest path
		unordered_map< T, bool > visited;
		unordered_map< T, int > distance;
		unordered_map<T, T> parent;
		queue<T> q;
		visited[u] = true;
		q.push(u);
		distance[u] = 0;
		while(q.size()){
			T node = q.front();
			q.pop();
			for(auto neighbor: table[node]){
				if(!visited[neighbor]){
					visited[neighbor] = true;
					q.push(neighbor);
					distance[neighbor] = distance[node] + 1;
					parent[neighbor] = node;
				}
			}
		}	
		T node = v;
		while(node != u){
			cout<<node<<" <- ";
			node = parent[node];
		}cout<<u<<endl;
		return distance[v];
	}
};
int main(){
	Graph<int> g;
	g.add_edge(0, 1);
	g.add_edge(0, 4);
	g.add_edge(2, 1);
	g.add_edge(2, 4);
	g.add_edge(3, 4);
	g.add_edge(2, 3);
	g.add_edge(5, 3);
	cout<<g.sssp(0, 5)<<endl;;
	return 0;
}