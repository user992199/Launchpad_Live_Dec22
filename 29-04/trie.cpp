#include<iostream>
#include<cstring>
#include<unordered_map>
using namespace std;
class node{
public:
	char data;
	unordered_map<char, node*> children;
	bool is_word_ending;
	node():data('\0'), is_word_ending(false){}
	node(char d, bool iwe = false):data(d), is_word_ending(iwe){}
};
class trie{
	node * root;
public:
	trie(){
		root = new node();
	}
	void insert(string word){
		node * temp = root;
		for(int i = 0; word[i]; i++){
			char ch = word[i];
			if(!(temp -> children.count(ch))){
				temp -> children[ch] = new node(ch);
			}
			temp = temp -> children[ch];
		}
		temp -> is_word_ending = true;
	}
	bool search(string word){
		node * temp = root;
		for(int i = 0; word[i]; i++){
			if(temp -> children.count(word[i])){
				temp = temp -> children[word[i]];
			}else{
				return false;
			}
		}
		return temp -> is_word_ending;
	}
	void search_loop(){
		string word;
		cin>>word;
		while(word != "END"){
			search(word) ? 
				cout<<"Word Found\n":
				cout<<"Word NOT there\n";
			cin>>word;
		}
	}
};
int main(){
	trie t;
	t.insert("Apple");
	t.insert("Book");
	t.insert("House");
	t.insert("Hound");
	t.insert("Home");
	t.insert("Bat");
	t.insert("Batman");
	t.insert("App");
	t.insert("Homely");
	t.insert("Mac");
	t.insert("Macbook");
	t.search_loop();
	return 0;
}