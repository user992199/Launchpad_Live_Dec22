#include<iostream>
using namespace std;
void far_to_cel(int init, int fval, int step){
	for(int f = init; f <= fval; f += step){
		int cel = 5.0/9*(f-32);
		cout<<f<<"\t=>\t"<<cel<<endl;
	}
}
void far_to_cel_2(){
	int init, fval, step;
	cin>>init>>fval>>step;
	for(int f = init; f <= fval; f += step){
		int cel = 5.0/9*(f-32);
		cout<<f<<"\t=>\t"<<cel<<endl;
	}
}
int main(){
	int init = 0, fval = 300, step = 10;
	cin>>init>>fval>>step;
	far_to_cel(init, fval, step);
	return 0;
}