#include<iostream>
using namespace std;
int main(){
    //           0   1  2  3  4  5  6  7  8  9
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key, i;
    cin>>key;
    for(i = 0; i < n; i++){
        if(arr[i] == key){
            cout<<i<<endl;
            break;
        }
    }
    // if key was found then i will be less than n
    // if key was not found, then the loop will break when 
    // i will become n
    if(i == n){
        cout<<"-1\n";
    }
    return 0;
}