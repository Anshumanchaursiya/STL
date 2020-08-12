#include <iostream>
#include <map>

using namespace std;

int main(){

	map<string,int> m;

	//1. insert
	m.insert(make_pair("apple",50));

	//another way of insert
	pair<string,int > p;
	p.first = "mango";
	p.second = 60;

	m.insert(p);

	//another way of insert
	m["banana"] = 20;





	//2. Search

	string fruit;
	cout<<"Enter the fruit name you want to know: ";
	cin>>fruit;
	auto it = m.find(fruit);


	//4. update the price
	m[fruit]+=2;


	if(it!=m.end()){
		cout<<endl<<"Price of "<<fruit<<" is "<<m[fruit]<<endl;
	}
	else{
		cout<<endl<<"Fruit is not present"<<endl;
	}

	//3.erase key
	m.erase(fruit);

	//Another way to find the key in map
	if(m.count(fruit)){
		cout<<endl<<"Price of "<<fruit<<" is "<<m[fruit]<<endl;
	}
	else{
		cout<<endl<<"Fruit is not present"<<endl;
	}
 
	m["litchi"] = 40;
	m["chiku"] = 80;

	for(map<string, int > :: iterator it=m.begin();it!=m.end();it++){
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}

	cout<<endl<<"using for each loop"<<endl;

	//for each loop
	for(auto p:m){
		cout<<p.first<<" "<<p.second<<endl;
	}


	return 0;
}