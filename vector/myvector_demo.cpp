#include <iostream>
#include "vector_implementation.h"

using namespace std;


int main(){

	vector v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.pop_back();

	cout<<"size: "<<v.size()<<endl;
	cout<<"capacity: "<<v.capacity()<<endl;



	return 0;
}