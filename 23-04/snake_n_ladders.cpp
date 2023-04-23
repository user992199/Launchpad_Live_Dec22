#include<iostream>
#include<list>
#include<unordered_map>
#include<queue>
#include<cstring>
using namespace std;
template <typename T>
class Graph{
	unordered_map<T, list<T> > table;
	int * board;
public:
	Graph(){
		board = new int[50];
		for(int i = 0; i < 50; i++) board[i] = 0;
		board[2] = 13;
		board[5] = 2;
		board[9] = 18;
		board[18] = 11;
		board[17] = -13;
		board[20] = -14;
		board[24] = -8;
		board[25] = -10;
		board[32] = -2;
		board[34] = -22;
	}
	void add_edge(T u, T v){
		table[u].push_back(v + board[v]);
	}
	void add_all_edges(){
		for(int i = 0; i < 36; i++){
			for(int die = 1; die <= 6; die++){
				add_edge(i, i + die);
			}
		}
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
	g.add_all_edges();
	g.print();
	cout<<g.sssp(0, 36)<<endl;
	return 0;
}