#include<iostream>
#include<cstring>
using namespace std;
void tower_of_hanoi(int n, string s, string h, string t){
	// base case
	if(n == 0) return;
	// recursive case
	tower_of_hanoi(n-1, s, t, h);
	cout<<"Move Disk "<<n<<" from "<<s<<" to "<<t<<endl;
	tower_of_hanoi(n-1, h, s, t);
}
int main(){
	string a = "First T", b = "Second T", c = "Third T";
	tower_of_hanoi(4, a, b, c);
	return 0;
}