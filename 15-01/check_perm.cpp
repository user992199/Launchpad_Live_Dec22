#include<iostream>
using namespace std;
bool check_perm(char a1[], char a2[]){
	int f1[128] = {0}, f2[128] = {0};
	if(strlen(a1) != strlen(a2)) return false;
	for(int i = 0; a1[i] != '\0'; i++){
		f1[a1[i]]++;
		f2[a2[i]]++;
	}
	for(int i = 0; i < 128; i++){
		if(f1[i] != f2[i]) return false;
	}
	return true;
}
int main(){
	char a1[] = "^201&7 ";
	char a2[] = "10&72 ^";
	if(check_perm(a1, a2)){
		cout<<"yes\n";
	}else{
		cout<<"no\n";
	}
	return 0;
}