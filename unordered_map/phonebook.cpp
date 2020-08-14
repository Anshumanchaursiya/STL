#include <iostream>
#include <unordered_map>
#include <cstring>
#include <vector>

using namespace std;

int main(){


	unordered_map<string, vector<string> > m;

	//inserting the number in the phonebook

	m["rahul"].push_back("9838989999");
	m["rahul"].push_back("1234512345");
	m["rahul"].push_back("9999999222");
	m["alok"].push_back("2222222222");
	m["alok"].push_back("1111111111");
	m["hemant"].push_back("000000000");
	m["hemant"].push_back("3333333333");
	m["alok"].push_back("000000000000");

	for(auto x:m){
		cout<<x.first<<" ->";
		for(auto v:x.second){
			cout<<v<<", ";
		}
		cout<<endl;
	}

	//find the person if it exist in the phonebook
	string person;
	cout<<endl<<"Enter the persone name you want to find: ";
	cin>>person;

	if(m.count(person)==0){
		cout<<"Absent"<<endl;
	}
	else{
		cout<<endl<<"Their mobile number are following: "<<endl;
		for(string s:m[person]){
			cout<<s<<", ";
		}
		cout<<endl;
	}

	return 0;
}