#include<iostream>
using namespace std;
int main(){
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int sum = 0;
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i < n; i++){
		sum += arr[i];
	}
	cout<<sum/n<<endl;
	return 0;
}