#include<iostream>
#include<vector>
using namespace std;
int main(){
	int row = 3, col = 2, val = 100;
	vector<vector<int> > v(row, vector<int> (col, val));
	// vector<int> v1(10, 5);
	v.push_back(vector<int> (10, 5));
	v[0].push_back(10);
	for(int r = 0; r < v.size(); r++){
		for(int c = 0; c < v[r].size(); c++){
			cout<<v[r][c]<<" ";
		}cout<<endl;
	}
	// vector<int> v2 ({1, 2, 3, 4, 5});
	// vector<int> v3(number of buckets, value in each bucket);
	// vector<int> v3(5, 10);
	// vector<int> v4(5);
	// vector<int> v5 = v3;
	// for(int i = 0; i < v5.size();i++){
	// 	cout<<v5[i]<<" ";
	// }cout<<endl;
	return 0;
}