#include<iostream>
#include<string>
#include<list>
using namespace std;

//template + iterator + comparator
template<class ForwardIterator, class T,class compare>

ForwardIterator search(ForwardIterator start,ForwardIterator end,T key, compare cmp){

	while(start!=end){
		if(cmp(*start,key)){
			return start;
		}
		start++;
	}

	return end;
}

class book{
	
public:
	string name;
	int price;
	

	book(){

	}

	book(string n,int price){
		name = n;
		this->price = price;
	}

};

class comparebook{

public:

	bool operator ()(book A,book B){
		if(A.name==B.name){
			return true;
		}
		else{
			return false;
		}
	}


};

int main(){

	book b1("python",50);
	book b2("english",100);
	book b3("physics",150);

	list<book> l;
	l.push_back(b1);
	l.push_back(b2);
	l.push_back(b3);


	book find_this_book("python",110);

	comparebook cmp;

	//without iterator
	//code here
	/*
	if(cmp(b1,find_this_book)){
		cout<<"book found";
	}
	else{
		cout<<"not found";
	}
	return 0;

	*/


	//with iterator
	list<book> :: iterator it =  search(l.begin(),l.end(),find_this_book,cmp);

	if(it !=l.end()){
		cout<<"Book found";
	}
	else{
		cout<<"Not found";
	}


	return 0;
}