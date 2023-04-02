#include<iostream>
#include<queue>
using namespace std;
int min_cost(int * arr, int n){
	// priority_queue<int> pq;
	priority_queue<int, vector<int>, greater<int> > pq;
	for(int i = 0; i < n; i++){
		pq.push(arr[i]);
	}
	int ans = 0;
	while(pq.size() > 1){
		int first = pq.top();
		pq.pop();
		int second = pq.top();
		pq.pop();
		ans += first + second;
		pq.push(first + second);
	}
	return ans;
}
int main(){
	int arr[] = {1, 4, 3, 2, 8, 3, 10, 1, 2, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<min_cost(arr, n)<<endl;
	return 0;
}