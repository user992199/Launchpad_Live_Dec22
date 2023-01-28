#include<iostream>
using namespace std;
void search(int arr[][10], int r, int c, int key){
	int i = 0, j = c-1;
	while(i < r and j >= 0){
		if(key == arr[i][j]){
			cout<<"key '"<<key<<"' found:\n";
			cout<<"row => "<<i<<endl;
			cout<<"col => "<<j<<endl;
			return;
		}else if(key < arr[i][j]){
			j--;
		}else{
			i++;
		}
	}
	cout<<"Key not found ;(\n";
}
int main(){
	int arr[10][10] = {
		{1, 3, 5, 7},
		{2, 3, 7, 9}, 
		{2, 4, 8, 10},
		{4, 5, 13, 14},
		{6, 11, 15, 16}
	};
	int r = 5;
	int c = 4;
	search(arr, r, c, 18);
	return 0;
}