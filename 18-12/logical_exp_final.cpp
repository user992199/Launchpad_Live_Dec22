#include<iostream>
using namespace std;
int main(){
	int a = 10, b = 5;
	int k = b / a * 10 * 10 * 16;
	cout<<k<<endl;
	if(a++ == 10 and b++ == 0){ 
		cout<<a++<<" "<<b<<endl; // a = 12, b = 5
	}else{
		cout<<a<<" "<<++b<<endl;
	}
	cout<<a<<" "<<b<<endl;
	return 0;
}