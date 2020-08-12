#include <iostream>
#include <map>
#include <cstring>
using namespace std;

int main(){

	multimap<char,string > m;

	int n;
	cout<<"Enter the number of input: ";
	cin>>n;

	while(n--){
		char ch;
		cout<<"Enter the key and value: "<<endl;
		string s;
		cin>>ch>>s;

		m.insert(make_pair(ch,s));
	}

	//To delete
	auto it = m.begin();
	m.erase(it);



	//find perticular element
	//search for cat
	auto f = m.find('c');
	if(f->second=="cat"){
		m.erase(f);
	}




	//printing the keys and value
	for(multimap<char, string > :: iterator it=m.begin();it!=m.end();it++){
		cout<<it->first<<" -> "<<it->second<<endl;
	}

	

	//To check lower bound
	auto it2 = m.lower_bound('c'); // tells us >= 
	cout<<(*it2).second<<endl;

	return 0;
}