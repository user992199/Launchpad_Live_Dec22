#include<iostream>
using namespace std;
void print_substr(char * arr, int s, int e){
	for(int i = s; i <=e; i++){
		cout<<arr[i];
	}
	cout<<endl;
}
void print_all_substr(char * arr){
	int n = strlen(arr);
	for(int s = 0; s < n; s++){
		for(int e = s; e < n; e++){
			print_substr(arr, s, e);
		}
	}
	cout<<""<<endl;
}
int main(){
	char arr[] = "helpo";
	print_all_substr(arr);
	return 0;
}