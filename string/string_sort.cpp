#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool compare(string a,string b){

	if(a.length() == b.length()){
		return a>b;
	}

	return a.length() > b.length();
}

int main(){

	string s[100];
	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		getline(cin,s[i],'\n');
	}

	sort(s,s+n,compare);

	for(int i=0;i<n;i++){
		cout<<s[i]<<endl;
	}

	return 0;
}