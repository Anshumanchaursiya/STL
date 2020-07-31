#include <iostream>
#include <queue>

using namespace std;


int main(){

	queue<int> q;
	q.push(1);
	q.push(2);

	for(int i=0;i<3;i++){
		q.push(i+5);
	}




	while(!q.empty() ){
		cout<<q.front()<<" ";
		q.pop();
	}cout<<endl;




	return 0;
}