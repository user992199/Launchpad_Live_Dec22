#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[100];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	// int max = INT_MIN;
	int max = arr[0];
	for(int i = 0; i < n; i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	cout<<max<<endl;
	return 0;
}