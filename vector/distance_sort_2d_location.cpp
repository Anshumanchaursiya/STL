#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


bool compare(pair<int,int> p1,pair<int,int> p2){

	int d1 = p1.first*p1.first + p1.second*p1.second;
	int d2 = p2.first*p2.first + p2.second*p2.second;

	//sort according to x co - ordinate
	if(d1 == d2){
		return p1.first < p2.first;
	}

	return d1 < d2;

}

int main(){

	std::vector<pair<int,int> > v;

	int n;
	cin>>n;
	cout<<"\nEnter the co ordinates"<<endl;
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		v.push_back(make_pair(x,y));
	}

	sort(v.begin(),v.end(),compare);
	cout<<endl;
	for(auto x:v){
		cout<<"x: "<<x.first<<", y: "<<x.second<<endl;
	}


	return 0;
}
