#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<int> s;
	int n = 50;
	cout<<"Input: ";
	while(--n){
		cout<<n<<" ";
		s.push(n);
	}
	cout<<endl;
	cout<<"size: "<<s.size()<<endl;
	cout<<"Output: ";
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
	cout<<"size: " <<s.size()<<endl;
	return 0;
}