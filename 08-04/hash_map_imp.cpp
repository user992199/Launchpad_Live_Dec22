#include<iostream>
#include<cstring>
using namespace std;
class node{
public:
	string key;
	int value;
	node * next;
	// node(string n, int p): key(n), value(p), next(0){}
	node(string n, int p, node* k = 0): key(n), value(p), next(k){}
};
class hash_map{
	node ** table;
	int cs, ts, prime_num;
	void rehash(){
		int old_ts = ts;
		node ** old_table = table;
		ts *= 2;
		table = new node* [ts];
		cs = 0;
		for(int i = 0; i < old_ts; i++){
			node * head = old_table[i];
			while(head){
				insert(head -> key, head -> value);
				head = head -> next;
			}
		}
		delete []old_table;
	}
	int hash_func(string key){
		int sum = 0;
		int factor = 1;
		for(int i = 0; key[i] != '\0'; i++){
			sum += (key[i] * factor)%ts;
			sum %= ts;
			factor *= prime_num;
			factor %= ts;
		}
		return sum;
	}
public:
	hash_map(int given_size = 7){
		ts = given_size;
		cs = 0;
		prime_num = 13;
		table = new node* [ts];
		for(int i = 0; i < ts; i++) table[i] = 0;
	}
	void insert(string key, int value){
		int hash_idx = hash_func(key);
		node * temp = new node(key, value);
		temp -> next = table[hash_idx];
		table[hash_idx] = temp;
		cs++;
		if(cs > ts * 0.6) rehash();
	}
	void print(){
		cout<<"Hash Table:-\n";
		for(int i = 0; i < ts; i++){
			node * head = table[i];
			cout<<i<<":\t";
			while(head){
				cout<<"("<<head -> key<<", "<<head -> value<<") ";
				head = head -> next;
			}
			cout<<endl;
		}
	}
	node* search(string key){
		int hash_idx = hash_func(key);
		node * head = table[hash_idx];
		while(head){
			if(head -> key == key) return head;
			head = head -> next;
		}
		return head;
	}
	int& operator[](string key){
		int hash_idx = hash_func(key);
		node * head = search(key);
		if(head) return head -> value;
		int garbage;
		insert(key, garbage);
		head = search(key);
		return head -> value;
	}
};
int main(){
	hash_map hm;
	hm.insert("Apple", 100);
	hm.insert("Banana", 120);
	hm.insert("Grapes", 200);
	hm.insert("Water Melon", 250);
	hm.insert("Papaya", 188);
	hm.insert("Melon", 150);
	hm.insert("Mango", 80);
	// hm.print();
	// node * find = hm.search("apple");
	// if(find){
	// 	cout<<"Node Found: ("<<find -> key<<", "<<find -> value<<")\n";
	// }else {
	// 	cout<<"Key not found\n";
	// }
	cout<<hm["Apple"]<<endl;
	hm["Ananas"] = 300;
	hm.print();
	return 0;
}