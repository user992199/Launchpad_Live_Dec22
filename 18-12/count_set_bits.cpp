#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int t = n;
	int count = 0;
	while(t){
		cout<<t%2;
		if(t % 2 == 1){
			count++;
		}
		t /= 2;
	}
	cout<<"\nNumber of set bits in "<<n<<" => "<<count<<endl;
	return 0;
}