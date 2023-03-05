#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void next_greater(int * arr, int * ng, int n){
	stack<int> s;
	for(int i = 0; i < n; i++){
		while(!s.empty() and arr[i] > arr[s.top()]){
			ng[s.top()] = arr[i];
			s.pop();
		}
		s.push(i);
	}
	while(!s.empty()){
		ng[s.top()] = -1;
		s.pop();
	}
}
void print_a(int * arr, int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
}
void print_v(vector<int> & v){
	for(int i = 0; i < v.size(); i++){
		cout<<v[i]<<"\t";
	}
	cout<<endl;
}
int main(){
	// int arr[] = {7, 4, 2, 5, 3, 1, 6, 11};
	// int n = sizeof(arr)/sizeof(arr[0]);
	// vector<int> input;
	// input.push_back(7);
	// input.push_back(4);
	// input.push_back(2);
	// input.push_back(5);
	// input.push_back(3);
	// input.push_back(1);
	// input.push_back(6);
	// input.push_back(11);
	// vector<int> v = next_greater(input);
	int arr[] = {7, 4, 2, 5, 3, 1, 6, 11};
	int n = sizeof(arr)/sizeof(arr[0]);
	int *ng = new int[n];
	next_greater(arr, ng, n);
	print_a(arr, n);
	print_a(ng, n);
	return 0;
}