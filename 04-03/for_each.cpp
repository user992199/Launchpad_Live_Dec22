#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v;
	for(int i = 1; i <= 10; i++){
		v.push_back(i);
	}
	// for each
	for(auto i: v){
		cout<<i<<" ";
	}cout<<endl;

	auto i = 10;
	cout<<sizeof(i)<<endl;
	return 0;
}