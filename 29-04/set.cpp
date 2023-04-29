#include<iostream>
#include<set>
#include<cstring>
#include<utility>
using namespace std;
int main(){
	// set has the properties of priority queue;
	set<pair<string, int> > s;
	s.insert(make_pair("Apple", 10));
	s.insert(make_pair("Banana", 5));
	s.insert(make_pair("Pineapple", 6));
	s.insert(make_pair("Grapes", 17));
	s.insert(make_pair("Mango", 1));

	auto it = s.find(make_pair("Apple", 10));

	s.erase(it);
	s.insert(make_pair("Cake", 10));
	// for(auto num: s){
	// 	cout<<num.first<<" "<<num.second<<endl;
	// }
	while(s.size()){
		auto node = *(s.begin());
		cout<<node.first<<" "<<node.second<<endl;
		s.erase(s.begin());
	}
	return 0;
}