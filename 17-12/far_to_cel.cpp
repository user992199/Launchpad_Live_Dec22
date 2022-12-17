#include<iostream>
using namespace std;
int main(){
	int init, fval, step;
	cin>>init>>fval>>step;
	cout<<"far\t=>\tcel\n";
	while(init <= fval){
		int cel = (5.0/9)*(init-32);
		cout<<init<<"\t=>\t"<<cel<<endl;
		init = init + step;
	}
	return 0;
}