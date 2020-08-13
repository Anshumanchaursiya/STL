#include <iostream>
#include <map>
#include <vector>

using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;

	node(int d){

		data = d;
		left = right = NULL;

	}


};

//passing it by reference
void verical_order_print(node* root,int d,map<int, vector<int> > &m){

	//base case
	if(root==NULL){
		return;
	}
	//otherwise
	m[d].push_back(root->data);

	verical_order_print(root->left,d-1,m);
	verical_order_print(root->right,d+1,m);

	return ;
}


int main(){

	//building the tree

	node* root = new node(1);
	root->left = new node(2);
	root->right = new node(3);
	root->left->left = new node(4);
	root->left->right = new node(5);
	root->right->left = new node(6);
	root->right->right = new node(7);
	root->right->right->right = new node(9);

	map<int, vector<int> > m;

	//distance from the root initially
	int d=0;
	verical_order_print(root,d,m);

/*
	//this is also correct method to print all the value of map

	for(auto x:m){
		cout<<x.first<<"-> ";
		for(auto y:x.second){
			cout<<y<<" ";
		}
		cout<<endl;
	}

*/

	//another way to print the map of int and vector

	for(auto it=m.begin();it!=m.end();it++){
		cout<<it->first<<" ->";
		for(auto it2 = it->second.begin();it2!=it->second.end();it2++){
			cout<<(*it2)<<" ";
		}
		cout<<endl;
	}


	return 0;
}
