#include<iostream>
using namespace std;
int main(){
	// syntax 
	// int row = 3, col = 4;
	// declaration
	// datatype identifier[no of row][no of col];
	// int arr[100][100];

	// initialization 1
	/*
	datatype identifier[no of r][no of c] = {
		{elements of first row},
		{elements of second row},
		...
		{elements of last row}
	};
	*/
	// int arr[3][4] = {
	// 	{10, 11, 12, 13},
	// 	{20, 21, 22, 23},
	// 	{30, 31, 32, 33}
	// };
	// init 2
	/*
	datatype identifier[][no of c] = {
		{elements of first row},
		{elements of second row},
		...
		{elements of last row}
	};
	*/  
	// int arr[][4] = {
	// 	{10, 11, 12, 13},
	// 	{40, 41, 42, 43},
	// 	{20, 21, 22, 23},
	// 	{40, 41, 42, 43},
	// 	{30, 31, 32, 33},
	// 	{40, 41, 42, 43},
	// 	{50, 51, 52, 53}
	// };

	// init 3
	int arr[][5] = {1, 2, 3, 6, 7, 8, 9, 10};


	int row = sizeof(arr)/sizeof(arr[0]);
	int col = sizeof(arr[0])/sizeof(arr[0][0]);
	cout<<row<<endl;
	cout<<col<<endl;
	for(int i = 0 ; i < row; i++){
		for(int j = 0; j < col; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}