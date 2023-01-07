#include<iostream>
using namespace std;
/* 
syntax 
defining a function
datatype identifier(datatype_1 parameter_1, datatype_2 parameter_2 ...){
	piece of code
}
*/
// forward declaration
void print_hello_n_times(int n);
void print_hello();
void print_hello_n_times_world_m_times(int n, int m);
int add(int, int);

int main(){
	// syntax
	// invoking or calling a function
	// identifier(arguments);
	// print_hello();
	// print_hello();
	// print_hello();
	// print_hello();
	// print_hello();
	// print_hello_n_times(5);
	// print_hello_n_times_world_m_times(5, 10);
	// int n = 10;
	// cout<<endl<<n<<endl;
	int a = 5, b = 119;
	int c = add(b, a);
	cout<<c<<endl;
	return 0;
}

// function definitions
void print_hello_n_times(int n){
	for(int i = 0; i < n; i++){
		print_hello();
	}
}
void print_hello(){
	cout<<"hello ";
	int i = 10;
	if(i > 0){
		print_hello_n_times(0);
	}
}
void print_hello_n_times_world_m_times(int n, int m){
	print_hello_n_times(n);
	for(int i = 0; i < m; i++){
		cout<<"world ";
	}
}
int add(int a, int b){
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;
	int c = a+b;
	return c;
}