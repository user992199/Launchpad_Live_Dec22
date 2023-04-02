#include<iostream>
#include<cstring>
#include<queue>
using namespace std;
class car{
public:
	string name;
	int price;
	int horse_power;
	car(string n, int p, int hp){
		name = n;
		price = p;
		horse_power = hp;
	}
	void print(){
		cout<<"Name: "<<name<<endl;
		cout<<"Price: "<<price<<endl;
		cout<<"Horse Power: "<<horse_power<<endl;
		cout<<endl;
	}
};
class functor_name{
public:
	bool operator() (car &c1, car &c2){
		return c1.name > c2.name;
	}
};
class functor_price{
public:
	bool operator() (car &c1, car &c2){
		return c1.price > c2.price;
	}
};
int main(){
	priority_queue<car, vector<car>, functor_price >pq;
	car c1("BMW", 1000, 50);
	car c2("AUDI", 5000, 45);
	car c3("Hero", 1888, 18);
	pq.push(c1);
	pq.push(c2);
	pq.push(c3);
	while(!pq.empty()){
		car c = pq.top();
		c.print();
		pq.pop();
	}
	return 0;
}