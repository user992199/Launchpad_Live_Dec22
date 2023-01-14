#include<iostream>
using namespace std;
// default argument
void get_input_char_arr(char * arr, int n, char delimiter = '\n'){
	int i = 0;
	char temp;
	cin.get(temp);
	while(temp!=delimiter and i < n){
		arr[i] = temp;
		i++;
		cin.get(temp);
	}
	arr[i] = '\0';
}
int sizeof_char_arr(char * arr){
	int i = 0;
	while(arr[i] != '\0'){
		i++;
	}
	return i;
}
void print(char * arr){
	for(int i = 0; arr[i] != '\0'; i++){
		cout<<arr[i];
	}
	cout<<endl;
}
int main(){
	char arr[101];
	cin.getline(arr, 100);
	print(arr);
	// char b;
	// cin.get(b);
	// cout<<b<<endl;
	cout<<sizeof_char_arr(arr)<<endl;
	return 0;
}