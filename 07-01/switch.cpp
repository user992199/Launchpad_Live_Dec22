#include<iostream>
using namespace std;
int main(){
	// syntax 
	/*
	// this variable can only have datatype: int or char
	switch(identifier){
	case possible_value_1:
		task 1;
	case possible_value_2:
		task 2;
	}
	*/
	float f = 78;
	char grade = 'D';
	// grade can only have datatype: int or char
	switch(grade){
	case 'a':
	case 'A':
		cout<<"91-100\n";
		break;
	case 'B':
	case 'b':
		cout<<"81-90\n";
		break;
	case 'C':
	case 'c':
		cout<<"71-80\n";
		break;
	case 68:
	case 'd':
		cout<<"61-70\n";
		break;
	case 'E':
	case 'e':
		cout<<"51-60\n";
		break;
	default:
		cout<<"Fail\n";
		break;
	}
	// cout<<(int)'D'<<endl;
	cout<<"Outside of Switch\n";
	return 0;
}