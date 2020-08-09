#include <iostream>
#include <cstring>

using namespace std;

class F{
public:
	void operator()(string s){
		cout<<"We are learning "<<s<<endl;
	}
};

int main(){

	F f; //constructor
	f("functional object"); //overloaded

	return 0;
}