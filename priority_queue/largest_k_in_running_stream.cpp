#include <iostream>
#include <queue>

using namespace std;


int main(){


	int input,k;
	cout<<"Enter the k and input value(-1 for exit)"<<endl;
	cin>>k>>input;

	//using min heap
	priority_queue<int, vector<int>, greater<int> > pq;

	//when you want to stop to give the element
	while(input!=-1){

		if(pq.size()<k){
			pq.push(input);
		}
		else{
			if(pq.top()<input){
				pq.pop();
				pq.push(input);
			}
		}

		cin>>input;

	}
	cout<<endl<<"Output is: ";
	while(!pq.empty()){
		cout<<pq.top()<<" ";
		pq.pop();
	}
	cout<<endl;


	return 0;
}
