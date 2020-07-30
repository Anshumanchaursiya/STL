#include <iostream>

using namespace std;


template<typename T>

class vector{
private:
	int cs,ts;
	T* arr;

public:
	vector(){
		cs = 0;
		ts = 1;
		arr = new T[ts];
	}

	void push_back(const int n){

		if(cs == ts){
			//arr is full
			T* old_arr = arr;
			arr = new T[2*ts];
			ts = 2*ts;

			for(int i=0;i<cs;i++){
				arr[i] = old_arr[i];
			}

			delete [] old_arr; 
		}

		arr[cs++] = n;	

	}

	void pop_back(){

		cs--;
	}

	T front() const{
		return arr[0];
	}

	T back() const{
		return arr[cs-1];
	}

	bool empty() const{
		return cs==0;
	}

	int capacity() const{
		return ts;
	}

	T at(const int i){
		return arr[i];
	}

	//operator overloading
	T operator[](const int i){
		return arr[i];
	}

	int size() const{
		return cs;
	}

};


int main(){

	vector<char> v;
	v.push_back('a');
	v.push_back('b');
	v.push_back('c');
	v.push_back('k');
	v.pop_back();

	cout<<"size: "<<v.size()<<endl;
	cout<<"capacity: "<<v.capacity()<<endl;

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;


	return 0;
}