#include<iostream>
using namespace std;
int main(){
	int n;
	char arr[1000];
	cin>>n;
	cin.getline(arr, 100);
	cout<<"Number: "<<n<<endl;
	cout<<"String: "<<arr<<endl;
	return 0;
}