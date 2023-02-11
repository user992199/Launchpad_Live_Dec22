#include<iostream>
using namespace std;
void print_subseq(char * in, char * out, int i = 0, int j = 0){
	// base case
	if(in[i] == '\0'){
		out[j] = '\0';
		cout<<out<<endl;
		return;
	}
	// recursive case
	print_subseq(in, out, i+1, j);
	out[j] = in[i];
	print_subseq(in, out, i+1, j+1);
}
int main(){
	char arr[] = "abc";
	int n = sizeof(arr)/sizeof(arr[0]);
	char out[n];
	print_subseq(arr, out); 
	return 0;
}