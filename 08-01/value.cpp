#include<iostream>
using namespace std;
void update(int i){
	i += 5;
}
int main(){
	int i = 10;
	int j;
	cout<<i<<endl;
	update(i);
	cout<<i<<endl;
	cout<<"j: "<<j<<endl;
	return 0;
}