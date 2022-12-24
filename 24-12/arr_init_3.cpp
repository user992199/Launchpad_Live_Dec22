#include<iostream>
using namespace std;
int main(){
	int arr[100] = {1, 2, 3};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout<<"n->"<<n<<endl;
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}