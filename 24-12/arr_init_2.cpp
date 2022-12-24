#include<iostream>
using namespace std;
int main(){
	int arr[] = {5, 4, 3, 23, 4, 6, 7, 3, 7, 4, 2, 5, 7, 9};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout<<"n->"<<n<<endl;
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}