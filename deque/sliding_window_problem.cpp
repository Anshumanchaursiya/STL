#include <iostream>
#include <deque> 

using namespace std;

//bruit force approach : o(n*k) --> time complexity
//optimal solution : o(n+k) --> time complexity , o(k) -->space complexity

int main(){


	int n,k;
	cin>>n>>k;
	int a[n];
	deque <int> Q(k);

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int i;

	//To process the first k eliment
	for(i=0;i<k;i++){

		while(!Q.empty() && a[Q.back()] < a[i]){
			Q.pop_back();
		}

		Q.push_back(i);  //pushing indexes
	}

	//process the remaining eliment

	for(;i<n;i++){

		cout<<a[Q.front()]<<" ";

		//1. Remove the element which is not part of window
		while(!Q.empty() && (Q.front() <= (i-k)) ){
			Q.pop_front();
		}

		//2. Remove the element which is not useful and present in window
		while(!Q.empty() && (a[Q.back()] < a[i])){
			Q.pop_back();
		}

		//3. Add the new elements
		Q.push_back(i);
	}

	cout<<a[Q.front()]<<endl;


	return 0;
}