#include<iostream>
using namespace std;
int sizeof_char_arr(char * arr){
	int i = 0;
	while(arr[i] != '\0'){
		i++;
	}
	return i;
}
bool check_palindrome(char * arr){
	int n = sizeof_char_arr(arr);
	for(int i = 0; i < n/2; i++){
		if(arr[i] != arr[n-i-1]) return false;
	}
	return true;
}
int main(){
	char arr[] = "racebar";
	if(check_palindrome(arr)){
		cout<<"Yes\n";
	}else{
		cout<<"No\n";
	}
	return 0;
}