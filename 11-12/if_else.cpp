#include<iostream>
using namespace std;
int main(){
	/* syntax
	if(cond){
		task 1 // to be performed if cond is true
	}
	else{
		task 2 // to be performed if cond is false
	}
	*/
	int i = 10, j = 0;
	if (!(i == 0) && j == 0) { // and == &&
		cout<<"i is zero"<<endl;
	}
	else if (j == 10 || i == 10){ // or == ||
		cout<<"j is zero but i is not"<<endl;
	}
	else {
		cout<<"i and j both are not zero"<<endl;
	}
	return 0;
}