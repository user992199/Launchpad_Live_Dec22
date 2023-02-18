#include<iostream>
using namespace std;
class car{
public:
	// member variables
	char *name;
	float model_number;
	bool sunroof;
	int price;
	static int count;
	const int license_number;
	// non parameterized constructor function
	car():license_number(100), price(99){
		name = NULL;
		count++;
	}
	// parameterized constructor function
	car(char n[], float mn, bool sr, int p, int ln):license_number(ln){
		name = new char[strlen(n)+1];
		strcpy(name, n);
		model_number = mn;
		sunroof = sr;
		price = p;
		count++;
	}
	car(car &c):license_number(c.license_number+1){
		name = new char [strlen(c.name) + 1];
		strcpy(name, c.name);
		model_number = c.model_number;
		sunroof = c.sunroof;
		price = c.price;
		count++;
	}
	void print_details(){
		cout<<"name:\t\t\t"<<name<<endl;
		cout<<"model number:\t"<<model_number<<endl;
		cout<<"sunroof:\t\t"<<sunroof<<endl;
		cout<<"price:\t\t\t"<<price<<endl;
		cout<<"license_number:\t"<<license_number<<endl;
		cout<<endl;
	}
	void update_name(char arr[]){
		if(name != NULL){
			delete []name;
		}
		name = new char [strlen(arr) + 1];
		strcpy(name, arr);
	}
};
int car::count = 0;
int main(){
	char n1[] = "honda";
	char n2[] = "hero";
	char n3[] = "zonda";
	car c1(n1, 4.35, true, 10000, 88);
	car c2(c1);
	car c3;

	c1.print_details();
	c1.model_number = 99;
	c2.update_name(n2);
	// c1.print_details();
	// c2.print_details();
	// c3.update_name(n3);
	// c3.print_details();
	cout<<c1.count++<<endl;
	cout<<c2.count++<<endl;
	cout<<c3.count++<<endl;
	cout<<car::count++<<endl;
	cout<<c3.count<<endl;



	return 0;
}