#include<iostream>
#include<vector>

using namespace std;


int main(){

	std::vector<int> v{1,2,3,4,5};

	v.push_back(6);

	cout<<"size of v: "<<v.size()<<endl; 
	cout<<"capacity of v: "<<v.capacity()<<endl;

	//pop_back o(1) time
	v.pop_back();

	//insert 100 after 3rd element
	v.insert(v.begin()+3,100);

	//insert 4 time 200 after 3rd element
	v.insert(v.begin()+3,4,200);

	//erase 3rd element in the vector
	v.erase(v.begin()+3);

	//erase from 3rd to 5th element
	v.erase(v.begin()+3,v.begin()+5);

	//to avoid the shrink
	v.resize(8); //if the size is increasing then more memory will be occupied

	//remove all the element of the vector but memory occupied by system will be same
	v.clear(); // size will be 0 but capacity remain same

	if(v.empty()){ //check whether the size empty
		cout<<"v is empty";

	}



	for(int x:v){
		cout<<x<<" ";
	}
	cout<<endl;

	std::vector<int> d;

	//in this case doubling is happaning that is an expensive operation
	for(int i=0;i<5;i++){
		d.push_back(i+1);
		cout<<"changing capacity is: "<<d.capacity()<<endl;
	}


	std::vector<int> d2;
	d2.reserve(10);

	for(int i=0;i<5;i++){
		d2.push_back(i+1);
		cout<<"changing capacity is: "<<d2.capacity()<<endl;
	}


	return 0;
}