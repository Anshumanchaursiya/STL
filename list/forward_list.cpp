#include <iostream>
#include <forward_list> 
 
using namespace std; 
  
int main() 
{ 
    forward_list<int> fl{10,20};
    fl.push_front(1);
    fl.push_front(2); 
    fl.push_front(6); 
  
    // Forward list becomes 6, 2, 1, 10,20
  
  	for(auto x:fl){
  		cout<<x<<"-->";
  	}
  	cout<<endl;

  	return 0;
} 