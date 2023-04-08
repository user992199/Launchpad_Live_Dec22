#include<iostream>
#include<utility>
using namespace std;
int main(){
	// pair<int, int> p;
	// p.first = 100;
	// p.second = 150;
	// cout<<p.first<<" "<<p.second<<endl;
	// int i = 10, j = 15;
	// pair<int, int> p(i, j);
	// cout<<p.first<<" "<<p.second<<endl;
	// int i = 10, j = 15;
	// pair<int, int> p = make_pair(i, j);
	// cout<<p.first<<" "<<p.second<<endl;
	// pair<int, int> p2 = p;
	// cout<<p2.first<<" "<<p2.second<<endl;
	pair<int, pair <int, int> > p3(10, make_pair(15, 20));
	cout<<p3.first<<endl;
	cout<<p3.second.first<<endl;
	cout<<p3.second.second<<endl;
	return 0;
}