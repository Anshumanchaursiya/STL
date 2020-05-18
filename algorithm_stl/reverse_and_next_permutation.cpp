#include <iostream>
#include <algorithm>

using namespace std;


int main(){

	int arr[] = {2,3,4,5,6};
	int n = sizeof(arr)/sizeof(int);

	//reverse(s,e)  s-> starting address , e-> ending address
	reverse(arr,arr+n);

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

	cout<<endl<<"Max: "<<max(10,20);
	cout<<endl;

	string s = "anshuman";
	int size = s.size();

	//next_permutation(s,e);
	next_permutation(s.begin(),s.end());

	cout<<s<<endl;
	

	return 0 ;
}