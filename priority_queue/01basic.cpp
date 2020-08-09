#include <iostream>
#include <queue>

using namespace std;

int main(){

	//priority_queue <int> pq; // default--> max heap

	priority_queue <int,vector<int>, greater<int>> pq; // for min heap

	int n;
	cout<<"Enter the number of element: ";
	cin>>n;
	for(int i=0;i<n;i++){
		int element;
		cin>>element;
		pq.push(element);

	}

	for(int i=0;i<n;i++){
		cout<<pq.top()<<" ";
		pq.pop();
	}
	cout<<endl;

	return 0;
}