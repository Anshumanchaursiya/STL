#include<iostream>
using namespace std;

template<typename T>

int linear_search(T* arr,T val,int size){

	for(int i=0;i<size;i++){
		if(arr[i] == val){
			return i;
		}
	}

	return -1;
}


int main(){

	float a[] =  {1.5,2.3,3.7,4.0,6};
	int size = sizeof(a)/sizeof(float);

	float search = 1.0;

	cout<<linear_search(a,search,size)<<endl;

	return 0;
}