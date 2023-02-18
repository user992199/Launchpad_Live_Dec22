#include<iostream>
using namespace std;
template <typename T>
class Vector{
public:
	T * arr;
	int vsize;
	int vcapacity;
	Vector(){
		arr = 0;
		vsize = 0;
		vcapacity = 0;
	}
	Vector(int n, T val = 0){
		vsize = n;
		vcapacity = n;
		arr = new T[n];
		for(int i = 0; i < n; i++){
			arr[i] = val;
		}
	}
	Vector(Vector &v){
		vsize = v.vsize;
		vcapacity = v.vcapacity;
		arr = new T[vsize];
		for(int i = 0; i < vsize; i++){
			arr[i] = v.arr[i];
		}
	}
	// push_back()
	void push_back(T data){
		if(!vcapacity){
			arr = new T;
			vcapacity++;
		}else if(vsize == vcapacity){
			vcapacity = 2 * vcapacity;
			T * temp = arr;
			arr = new T[vcapacity];
			for(int i = 0; i < vsize; i++){
				arr[i] = temp[i];
			}
			delete []temp;
		}
		arr[vsize++] = data;
	}
	// pop_back()
	void pop_back(){
		if(!vsize) return;
		vsize--;
	}
	// empty()
	bool empty(){
		return vsize == 0;
	}
	// clear()
	void clear(){
		vsize = 0;
	}
	// capacity()
	int capacity(){
		return vcapacity;
	}
	// size()
	int size(){
		return vsize;
	}
	void reserve(int rcap){
		if(rcap < vcapacity){
			return;
		}
		vcapacity = rcap;
		T * temp = arr;
		arr = new T[vcapacity];
		for(int i = 0; i < vsize; i++){
			arr[i] = temp[i];
		}
		delete []temp;
	}
	T operator [] (int index){
		return arr[index];
	}
};
int main(){
	Vector<int> v;
	Vector<char> vch;
	int n = 20;
	v.reserve(100);
	for(int i = 0; i < n; i++){
		// cout<<"cap: "<<v.capacity()<<" | size: "<<v.size()<<endl;
		v.push_back(i+'a');
		vch.push_back(i +'a');
	}
	v.reserve(40);
	cout<<v.capacity()<<endl;
	// v.clear();
	v.pop_back();
	for(int i = 0; i < v.size(); i++){
		cout<<v[i]<<" ";
	}cout<<endl;
	for(int i = 0; i < vch.size(); i++){
		cout<<vch[i]<<" ";
	}cout<<endl;
	return 0;
}