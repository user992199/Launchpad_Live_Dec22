#include<iostream>
#include<unordered_map>
#include<map>
#include<utility>
using namespace std;
int main(){
	/*
	syntax:
	unordered_map<key ka datatype, value ka datatype> identifier;
	*/
	// unordered_map<string, int> umap;
	unordered_map<string, int> umap;
	map<string, int> omap;
	umap.insert(make_pair("Apple", 10)); // insertion
	omap.insert(make_pair("Apple", 10)); // insertion
	
	umap["Banana"] = 12; // insertion
	umap["Apple"] = 9; // updation
	omap["Banana"] = 12; // insertion
	omap["Apple"] = 9; // updation
	
	pair<string, int> p("Ananas", 20);
	umap.insert(p);
	omap.insert(p);

	for(pair<string, int> p: umap){
		cout<<p.first<<" "<<p.second<<endl;
	}

	for(pair<string, int> p: omap){
		cout<<p.first<<" "<<p.second<<endl;
	}

	for(auto it = umap.begin(); it != umap.end(); it++){
		cout<<(it -> first)<<" "<<(it -> second)<<endl;
	}
	return 0;
}