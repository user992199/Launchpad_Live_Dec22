#include<iostream>
using namespace std;
int binary_search(int key){
	long long s = 0, e = key, ans = 0;
	while(e>=s){
		long long m = (s+e)/2;
		cout<<"m ka sq: "<<m*m<<endl;
		if(key == m*m){
			cout<<key<<" is a perfect square\n";
			return m;
		}
		else if(key > m*m){
			ans = m;
			s = m+1;
		}
		else if(key < m*m){
			e = m-1;
		}
	}
	cout<<key<<" is not a perfect square\n";
	return ans;
}
int main(){
	cout<<binary_search(1000000)<<endl;
	return 0;
}