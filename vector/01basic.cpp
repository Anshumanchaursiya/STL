#include<iostream>
#include<vector>
using namespace std;

int main(){

	//std::vector<int> v;

	//We can create and initialize a vector

	vector<int> b(5,10); // five int with value 10, init a vector of zeros (n,0);
	vector<int> c(b.begin(),b.end());
	vector<int> d{10,20,30,40,50};


	//iteration over the vector
	for(int i=0;i<b.size();i++){
		cout<<b[i]<<",";
	}
	cout<<endl;


	//using iterator
	for(auto it = c.begin();it!=c.end();it++){
		cout<<(*it)<<",";
	}
	cout<<endl;

	//for each loop
	//auto x and int x both are same
	for(auto x:d){
		cout<<x<<",";
	}
	cout<<endl;

	std::vector<int> v;

	for(int i=0;i<5;i++){
		v.push_back(i);
	}

	//difference between the size occupied after initialization of vector of d and v

	cout<<"size: "<<d.size()<<endl;  //how much element present in the vector
	cout<<"capacity: "<<d.capacity()<<endl; //size of underlying vector
	cout<<"max size: "<<d.max_size()<<endl; //maximum number of eliment vector can hold in the worst case according to available memory in the system

	cout<<"size: "<<v.size()<<endl;
	cout<<"capacity: "<<v.capacity()<<endl;
	cout<<"max size: "<<v.max_size()<<endl;




	return 0;
}