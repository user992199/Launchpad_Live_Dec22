#include<iostream>
using namespace std;
class node{
public:
	int data;
	node * next;
	node(): next(0){}
	node(int d): data(d), next(0){}
};

int main(){
	node A;
	A.data = 100;
	node B(10);
	A.next = &B;
	node * temp = new node(-100);
	B.next = temp;
	cout<<A.data<<endl;
	// A node mein next waali bucket ko access karega
	cout<< A.next -> data<<endl;
	cout<<A.next -> next -> data<<endl;

	return 0;
}