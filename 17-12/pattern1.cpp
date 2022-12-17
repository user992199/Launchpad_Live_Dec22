#include<iostream>
using namespace std;
int main(){
	int n = 5;
	cin>>n;
	int rn = 1;
	while(rn <= n){
		int no_of_spaces = n - rn;
		while(no_of_spaces > 0){
			cout<<"  ";
			no_of_spaces = no_of_spaces - 1;
		}
		int num = rn, k = 1;
		while(k <= rn){
			cout<<num<<" ";
			num = num + 1;
			k = k + 1;
		}
		num = (rn-1) * 2; // num = num - 2;
		k = 1;
		while(k < rn){
			cout<<num<<" ";
			num = num - 1;
			k = k + 1;
		}
		cout<<endl;
		rn = rn + 1;
	}
	return 0;
}