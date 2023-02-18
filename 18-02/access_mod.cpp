#include<iostream>
using namespace std;
class user{
private:
	string userid;
	string password;
public:
	user(string userid, string password){
		this -> userid = userid;
		this -> password = password;
	}
	void print_details(){
		cout<<"userid: "<<userid<<endl;
		cout<<"password: "<<password<<endl;
	}
	// getters and setters
	string get_userid(){
		return userid;
	}
	void set_userid(string u){
		userid = u;
	}
	string get_password(){
		return password;
	}
	void set_password(string p){
		password = p;
	}
};
int main(){
	string i1 = "bull";
	string i2 = "jod";
	user u1(i1, i2);
	// u1.print_details();
	cout<<u1.get_userid()<<endl;
	cout<<u1.get_password()<<endl;
	i2 = "forloop";
	u1.set_password(i2);
	u1.print_details();
	return 0;
}