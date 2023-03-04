#include<iostream>
#include<list>
using namespace std;

int main(){
	// syntax
	// list<datatype> list_identifier;
	// list<int> l;
	// int n = 6;
	// while(--n)
	// 	l.push_back(n);
	// for(auto i : l){
	// 	cout<<i<<" ";
	// }cout<<endl;
	// for(list<int> :: iterator it = l.begin(); it != l.end(); it++){
	// 	cout<<*it<<" ";
	// }cout<<endl;
	// for(list<int> :: reverse_iterator it = l.rbegin(); it != l.rend(); it++){
	// 	cout<<*it<<" ";
	// }cout<<endl;
	// for(auto it = l.begin(); it != l.end(); it++){
	// 	cout<<*it<<" ";
	// }cout<<endl;
	// for(auto it = l.rbegin(); it != l.rend(); it++){
	// 	cout<<*it<<" ";
	// }cout<<endl;
	list<int> l;
	int n = 6;
	while(--n)
		l.push_back(n);
	int pos = 2;
	int data = 100;
	list<int> :: iterator it = l.begin();
	// list<int> :: iterator it = l.end();
	while(--pos){
		it++;
		// it--;
	}
	l.erase(it);
	for(int i: l){
		cout<<i<<" ";
	}cout<<endl;
	return 0;
}