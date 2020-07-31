#include <iostream>
#include <list>

using namespace std;

int main(){

	list<pair<int,int> > *l;

	//number of veritces
	int n;
	cout<<"Enter number of vertices: ";
	cin>>n;

	l = new list<pair<int,int> >[n];

	int e;
	cout<<endl<<"Enter the number of edge: ";
	cin>>e;

	cout<<endl<<"Enter the detail of edge: "<<endl;
	for(int i=0;i<e;i++){

		//edge from x to y having weight wt
		int x,y,wt;
		cin>>x>>y>>wt;

		//adding edge from x to y 
		l[x].push_back(make_pair(y,wt));


		//if it is bidirectional
		l[y].push_back(make_pair(x,wt));

	}

	//printing the edges  , number of vertices = n 
	//first loop according to number of vertices
	for(int i=0;i<n;i++){

		cout<<"Linked list "<<i<<"-->";

		for(auto xp:l[i]){
			cout<<"("<<xp.first<<","<<xp.second<<"), ";
		}

		cout<<endl;
	}


	return 0;
}
