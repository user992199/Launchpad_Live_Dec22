#include<iostream>
using namespace std;
void update(int * ptr){
	*ptr = 18;
	cout<<"update: "<<*ptr<<endl;
}
void sp(int * &iptr, int * &jptr){
	swap(iptr, jptr);
	cout<<"iptr: "<<*iptr<<endl;
	cout<<"jptr: "<<*jptr<<endl;
}
int main(){
	int i = 0, j = 9;
	int * iptr = &i;
	int * jptr = &j;
	sp(iptr, jptr);
	cout<<"inside main:\n";
	cout<<"i: "<<i<<" ; j: "<<j<<endl;
	cout<<"iptr: "<<*iptr<<endl;
	cout<<"jptr: "<<*jptr<<endl;
	return 0;
}