#include<iostream>
#include<vector>
using namespace std;
int main(){
	// vector<datatype> identifier;
	vector<int> v;
	int n = 20;
	v.reserve(100);
	for(int i = 0; i < n; i++){
		cout<<"cap: "<<v.capacity()<<" | size: "<<v.size()<<endl;
		v.push_back((n-i)%4);
	}
	v.reserve(40);
	cout<<v.capacity()<<endl;
	v.clear();
	for(int i = 0; i < v.size(); i++){
		cout<<v[i]<<" ";
	}cout<<endl;
	sort(v.rbegin(), v.rend());
	for(int i = 0; i < v.size();i++){
		cout<<v[i]<<" ";
	}cout<<endl;

	sort(v.begin(), v.end());
	for(int i = 0; i < v.size();i++){
		cout<<v[i]<<" ";
	}cout<<endl;

	// cout<<v.max_size()<<endl;
	// vector_name.push_back(); -> is used to insert data at the back
	// vector_name.pop_back(); -> is used to remove data from the back
	// vector_name.size(); -> returns number of elements in vector
	// vector_name.capacity(); -> returns the capacity of the vector in current state
	// vectore_name.max_size(); -> max size possible of vector
	// vector_name.clear(); -> clears the vector

	return 0;
}