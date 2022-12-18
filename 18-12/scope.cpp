#include<iostream>
using namespace std;
int i = -10;
int main(){
	cout<<i<<endl;
	{
		i = 176;
	}
	cout<<i<<endl;
	int i = 10;
	{
		int i = 100;
		cout<<i<<endl;
	}
	if(i == 10){
		cout<<i<<endl;
		int i = 5;
		cout<<"before inner if "<<i<<endl;
		if(i == 5){
			i = 6;
			cout<<"scope resolution "<<::i<<endl;
		}
		cout<<"after inner if "<<i<<endl;
	}
	cout<<i<<endl;
	return 0;
}