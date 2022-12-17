#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n;
	cin>>n;
	int temp;
	int max = INT_MIN;
	while(n > 0){
		cin>>temp;
		if(temp > max){
			max = temp;
		}
		n = n - 1;
	}
	cout<<max<<endl;
	return 0;
}