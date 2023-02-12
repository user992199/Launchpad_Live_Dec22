#include<iostream>
using namespace std;
class car{
public:
	// member variables
	char name[100];
	float model_number;
	bool sunroof;
	int price;
	// non parameterized constructor function
	car(){
		cout<<"inside np constructor\n";
	}
	// parameterized constructor function
	car(char n[], float mn, bool sr, int p){
		cout<<"inside p constructor\n";
		strcpy(name, n);
		model_number = mn;
		sunroof = sr;
		price = p;
	}
	car(car &c){
		cout<<"inside copy constructor\n";
		strcpy(name, c.name);
		model_number = c.model_number;
		sunroof = c.sunroof;
		price = c.price;
	}
	~car(){
		cout<<"inside destructor function of "<<model_number<<endl;
	}
	// methods or member function
	// return_type identifier(parameters){}
	void print_details(){
		cout<<"name:\t\t\t"<<name<<endl;
		cout<<"model number:\t"<<model_number<<endl;
		cout<<"sunroof:\t\t"<<sunroof<<endl;
		cout<<"price:\t\t\t"<<price<<endl;
		cout<<endl;
	}
	void update_name(char arr[]){
		strcpy(name, arr);
	}
};
int main(){
	// syntax to create an object/instance/varible of class
	// identifier_of_class identifier_of_object;
	// datatype identifier;
	char n1[] = "book";
	car c1(n1, 7.56, true, 1000000);
	c1.print_details();
	car c2(c1);
	c2.model_number = 8;
	c2.print_details();
	car c3 = c2;
	c3.model_number = 9;
	c3.print_details();
	car c4;
	c4 = c3;
	c4.model_number = 10;
	c4.print_details();
	return 0;
}