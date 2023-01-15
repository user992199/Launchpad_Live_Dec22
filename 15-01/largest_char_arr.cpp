#include<iostream>
#include<cstring>
// #include<climits>
using namespace std;
int length(char * arr){
	int i = 0;
	while(arr[i]){
		i++;
	}
	return i;
}
void copy_arr(char * target, char * source){
	int i = 0;
	while(source[i]){
		target[i] = source[i];
		i++;
	}
}
int main(){
	char in[100], max_arr[100];
	int max_size = -1;
	int n; 
	cin>>n;
	cin.ignore();
	while(n--){
		cin.getline(in, 100);
		// syntax
		// strlen(char arr);
		int s2 = strlen(in);
		if(s2 > max_size){
			// syntax
			// strcpy(target char arr, source char arr);
			strcpy(max_arr, in);
			max_size = s2;
		}
	}
	cout<<max_arr<<endl;
	return 0;
}