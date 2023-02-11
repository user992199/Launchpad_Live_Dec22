#include<iostream>
using namespace std;
void print_all_perm(char * in, int i = 0){
	// base case
	if(in[i] == '\0'){
		cout<<in<<endl;
		return;
	}
	// recursive case
	for(int j = i; in[j] != '\0'; j++){
		swap(in[i], in[j]);
		print_all_perm(in, i+1);
		swap(in[i], in[j]);
	}
}
int main(){
	char arr[] = "12345";
	print_all_perm(arr);
	// cout<<"arr afterwards: "<<arr<<endl;
	return 0;
}