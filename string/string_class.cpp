#include<iostream>
#include<string>
using namespace std;


int main(){

	string s1("Hello");
	string s2 = "Another way of decaring string";
	string s3(s2);
	string s4 = s3;
	char a[] = {'a','b','c'};
	string s5 = a;
	string s6(a);

	//append the string
	s1.append(" Appended string");
	s2 += "Another way appended string";

	//erase the string
	s2.clear();

	//compare the string
	string s7 = "Apple";
	string s8 = "Mango";

	//compare funnction returns int value ==0 or >0 or <0
	//here the value will be according to the ascii value of A and M 
	cout<<s7.compare(s8);

	// >, < these are overloaded operator in the string

	if(s7>s8){
		cout<<"s7 is greater than s8"<<endl;
	}
	else{
		cout<<"s8 is greater than s7"<<endl;
	}


	string s9 = "I want to have apple juice";

	//find function will return the index of the index according to first ch 
	int idx = s9.find("apple");

	//remove a word
	string word = "apple";
	s9.erase(idx,word.length());

	cout<<s9<<endl;

	//iterotor : for iterating over the string

	cout<<endl<<"using iterotor: \n";

	for(string :: iterator it = s9.begin();it!=s9.end();it++){
		cout<<*it<<",";
	}
	cout<<endl;


	cout<<s1<<endl<<s2<<endl<<s3<<endl<<s4<<endl<<s5<<endl<<s6<<endl<<s7<<endl<<s8<<endl<<s9<<endl; 

	return 0;
}