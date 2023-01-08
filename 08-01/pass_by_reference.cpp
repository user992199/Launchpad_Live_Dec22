#include<iostream>
using namespace std;
void update(int &j){
	j = 100;
	cout<<"inside update(): "<<j<<endl;
}
int main(){
	int i = 10;
	// int j;
	cout<<"before update(): "<<i<<endl;
	// 10 = 900;
	update(i);
	cout<<"after update(): "<<i<<endl;
	// cout<<"j: "<<j<<endl;
	return 0;
}