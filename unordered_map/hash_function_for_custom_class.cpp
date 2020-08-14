#include <iostream>
#include <unordered_map>
#include <cstring>

using namespace std;

class student{
public:

	string first_name;
	string last_name;
	int roll_no;

	student(string first_name,string last_name,int roll_no){
		this->first_name = first_name;
		this->last_name = last_name;
		this->roll_no = roll_no; 
	}

	bool operator ==(const student &s)const{

		return roll_no == s.roll_no;
	}

};

class hashfun{
public:

	size_t operator()(const student &s) const{
		return s.first_name.length() + s.last_name.length() ;	
	}
};


int main(){

	unordered_map<student, int, hashfun > student_map;

	student s1("anshuman","chaursiya",10);
	student s2("rahul","kumar",30);
	student s3("alok","singh",35);
	student s4("anshuman","chaursiya",12);

	//Add student -- marks to hashmap
	student_map[s1] = 90;
	student_map[s2] = 96;
	student_map[s3] = 98;
	student_map[s4] = 88;

	//iterate over all the student
	for(auto x:student_map){
		cout<<"roll no: "<<x.first.roll_no<<", name: "<<x.first.first_name<<" "<<x.first.last_name<<", marks: "<<x.second<<endl;
	}

	return 0;
}
