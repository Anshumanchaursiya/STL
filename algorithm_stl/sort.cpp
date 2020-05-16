#include<iostream>
#include<algorithm>
using namespace std;

//compare function can be use for anything like string or digit and we can sort on that basis

bool compare(int a,int b){

	//sort in decreasing order
	return a>b;
}

bool compare_string(string s1,string s2){

	//sort according to the number of character of the string
	return s1.size()>s2.size();


	//sort according to lexographic order
	return s2>s1;
}

int main(){

	int arr[] = {2,1,5,4,3,2,10};
	
	int n = sizeof(arr)/sizeof(int);

	sort(arr,arr+n,compare);

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}


	cout<<endl;

	string s[] = {"anshuman","chaursiya","amit","singh","rahul","sharma"};

	sort(s,s+6,compare_string);

	for(int i=0;i<6;i++){
		cout<<s[i]<<" ";
	}

	cout<<endl;


	return 0;
}