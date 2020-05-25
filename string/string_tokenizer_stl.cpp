#include <iostream>
#include <cstring>

using namespace std;


int main(){

	char s[] = "This is a car";

	//char* ptr = strtok(char* s,char* delimeter)
	//strtok function returns a token on each subsequent call
	char *ptr = strtok(s," ");
	cout<<ptr<<endl;

	while(ptr!=NULL){
		ptr = strtok(NULL," ");
		cout<<ptr<<endl;
	}

	return 0;
}