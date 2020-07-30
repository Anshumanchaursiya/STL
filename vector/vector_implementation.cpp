#include <iostream>

using namespace std;

class vector{
private:
	int cs,ts;
	int* arr;

public:
	vector(){
		cs = 0;
		ts = 1;
		arr = new int[ts];
	}

	void push_back(const int n){

		if(cs == ts){
			//arr is full
			int* old_arr = arr;
			arr = new int[2*ts];
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

	int front() const{
		return arr[0];
	}

	int back() const{
		return arr[cs-1];
	}

	bool empty() const{
		return cs==0;
	}

	int capacity() const{
		return ts;
	}

	int at(const int i){
		return arr[i];
	}

	//operator overloading
	int operator[](const int i){
		return arr[i];
	}

	int size() const{
		return cs;
	}

};


int main(){

	vector v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.pop_back();

	cout<<"size: "<<v.size()<<endl;
	cout<<"capacity: "<<v.capacity()<<endl;

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;


	return 0;
}