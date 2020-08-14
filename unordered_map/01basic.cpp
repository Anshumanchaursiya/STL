#include <iostream>
#include <unordered_map>
#include <cstring>

using namespace std;


int main(){


	unordered_map<string,int > um;

	//1. insert 
	um.insert(make_pair("banana",20));

	pair<string, int> p;
	p.first = "apple";
	p.second = 50;
	um.insert(p);

	um["litchi"] = 60;



	//2. find

	string fruit;
	cout<<"Enter the string you want to search: ";
	cin>>fruit;

	if(um.find(fruit)!=um.end()){
		cout<<endl<<fruit<<" is available in hastable"<<endl;

	}
	else{
		cout<<endl<<fruit<<" is not available in hastable"<<endl;
	}

	//3. erase
	um.erase(fruit);

	if(um.count(fruit)){
		cout<<endl<<fruit<<" is not available in hastable"<<endl;
	}
	else{
		cout<<endl<<" not available"<<endl;
	}

	um["orage"] = 40;

	for(auto x:um){
		cout<<x.first<<" "<<x.second<<endl;
	}


	return 0;
}