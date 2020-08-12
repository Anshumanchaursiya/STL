#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

//this progrom is use mainly when we want to extract small top user within large number of user

class Person{
public: 
	string name;
	int age;

	Person(){

	}

	Person(string name,int age){

		this->name = name;
		this->age = age;
	}

};

class CompareClass{
public: 

	bool operator()(Person p1,Person p2){

		return p1.age < p2.age;
	}


};

int main(){

	priority_queue<Person, vector<Person>, CompareClass > pq;

	int n;

	cout<<"Enter total number of person: ";
	cin>>n;

	for(int i=0;i<n;i++){
		int age;
		cout<<"Enter name and age: ";
		string person;
		cin>>person>>age;
		Person p(person,age);
		pq.push(p);
	}

	int num_output;

	cout<<endl<<"Enter the number you want to extract person: ";
	cin>>num_output;

	for(int i=0;i<num_output;i++){

		Person p = pq.top();
		cout<<p.name<<" "<<p.age<<endl;
		pq.pop();
	}



	return 0;
}