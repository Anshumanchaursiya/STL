#include <iostream>

using namespace std;

bool compare(int a,int b){

	//sort in descending order
	return a<b;
}


//this function is implemented in algorithm header file as sort(s,e,compare) function
void bubble_sort(int* a,int n,bool (&compare)(int n1,int n2)){

	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(compare(a[j],a[j+1])){
				swap(a[j],a[j+1]);
			}
		}
	}

	return;
}

int main(){

	int arr[] = {2,1,4,8,6,7,5};

	int n = sizeof(arr)/sizeof(int);

	bubble_sort(arr,n,compare);

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	return 0;
}