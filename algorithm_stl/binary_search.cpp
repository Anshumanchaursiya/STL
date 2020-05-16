#include<iostream>
#include<algorithm>

using namespace std;


int main(){


	int arr[] = {10,20,30,30,30,30,50,50,60};

	int n = sizeof(arr)/sizeof(int);

	//binary_search(s,e,key)
	//binary_search() returns boolean value
	bool present = binary_search(arr,arr+n,30);

	if(present){
		cout<<"Key is present"<<endl;
	}
	else{
		cout<<"not present"<<endl;
	}


	
	//lower_bound(s,e,key) -> return >=key address
	//upper_bound(s,e,key) -> return >key address
	int* lb = lower_bound(arr,arr+n,30);
	int* ub = upper_bound(arr,arr+n,30);

	cout<<"Lower bound index: "<<lb-arr<<endl;
	cout<<"Upper bound index: "<<ub-arr-1<<endl;

	//frequency of the key
	cout<<"frequency is: "<<ub-lb<<endl;

	return 0;
}