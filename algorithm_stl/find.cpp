#include<iostream>
#include<algorithm>
using namespace std;


int main(){

	int arr[] = {11,3,22,9,10,33};
	int key;
	cin>>key;

	int* it = find(arr,arr+6,key);

	int index = it - arr;

	if(index==6){
		cout<<"Not found\n";
	} 
	else{
		cout<<"found at index: "<<index<<endl;
	}

	return 0;
}