#include<iostream>
using namespace std;
void rotate_by_1(char arr[]){
	int n = strlen(arr);
	char t = arr[n-1];
	for(int i = n-2; i >= 0; i--){
		arr[i+1] = arr[i];
	}
	arr[0] = t;
}
void rotate_by_n(char arr[], int n){
	n %= strlen(arr);
	while(n--){
		rotate_by_1(arr);
	}
}
void rotate_by_k(char arr[], int k){
	int n = strlen(arr);
	k %= n;
	for(int i = n - 1; i >= 0; i--){
		arr[i + k] = arr[i];
	}
	for(int i = 0; i < k; i++){
		arr[i] = arr[i + n];
	}
	arr[n] = '\0';
}
void reverse(char * arr, int s, int e){
	for(int i = 0; i <= (e-s)/2; i++){
		swap(arr[i+s], arr[e-i]);
	}
}
void rotate_by_k_opt(char * arr, int k){
	int n = strlen(arr);
	k %= n;
	reverse(arr, 0, n-1);
	reverse(arr, 0, k-1);
	reverse(arr, k, n-1);
}
int main(){
	char arr[100] = "coding blocks";
	int k = 2;
	// rotate_by_k(arr, k);
	// reverse(arr, 0, strlen(arr)-1);

	rotate_by_k_opt(arr, k);
	// reverse(arr, 0, strlen(arr)-1);
	cout<<arr<<endl;

	return 0;
}