#include<iostream>
using namespace std;
bool comp(char arr[], char key[]){
	int an = strlen(arr);
	int kn = strlen(key);
	if(an != kn) return false;
	for(int i = 0; i < kn; i++){
		if(arr[i] != key[i]) return false;
	}
	return true;
}
int string_search(char arr[][100], char key[], int n){

	for(int i = 0; i < n; i++){
		cout<<"arr[i]: "<<arr[i]<<endl;
		cout<<"strcmp(arr[i], key): "<<strcmp(arr[i], key)<<endl;
		if(strcmp(arr[i], key) == 0){
			return i+1;
		}
	}
	return -1;
}
int main(){
	char arr[10][100] = {
		"hello",
		"world",
		"football",
		"soccer",
		"cricket",
		"mac",
		"king",
		"socc",
		"seven"
	};
	int n = 8;
	char key[] = "socc";
	cout<<string_search(arr, key, n)<<endl;
	return 0;
}