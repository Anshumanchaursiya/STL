#include <iostream>

using namespace std;


int main(){

	//decleration of pair
	pair<int,char> p;
	p.first = 1;
	p.second = 'a';

	//copying 
	pair<int,char> p2(p);

	cout<<"p2: "<<p2.first<<" "<<p2.second<<endl;

	//decleration with initialization
	pair<int,string> p3 = make_pair(10,"TEN");

	cout<<"p3: "<<p3.first<<" "<<p3.second<<endl;


	//we can make array of pair
	//can make vector of pair
	//also can make pair of pair

	pair<pair<int,int>, string> car;

	car.first.first = 10;
	car.first.second = 10;
	car.second = "maruti";

	cout<<"car: "<<car.first.first<<" "<<car.first.second<<" "<<car.second<<endl;


	return 0;
}