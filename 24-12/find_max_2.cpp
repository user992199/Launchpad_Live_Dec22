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
	int mi = 0;
	for(int i = 0; i < n; i++){
		if(arr[mi] < arr[i]){
			mi = i;
		}
	}
	cout<<arr[mi]<<endl;
	return 0;
}