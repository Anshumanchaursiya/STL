#include <iostream>
#include <queue>

using namespace std;

template<typename T>

class stack{

private:
	queue<T> q1,q2;

public:

	void push(T x){
		if(q1.empty()){
			q1.push(x);	
		}
		else{
			q2.push(x);
			while(!q1.empty()){
				T d = q1.front();
				q2.push(d);
				q1.pop();
			}
		}

		if(q1.empty()){
			while(!q2.empty()){
				q1.push(q2.front());
				q2.pop();
			}
		}
	}

	void pop(){
		q1.pop();
	}

	int top(){
		return q1.front();
	}

	bool empty(){
		if(q1.empty()){
			return true;
		}
		return false;
	}


};

int main(){

	stack<int> s;
	s.push(1);
	s.push(2);
	cout<<"Top: "<<s.top()<<endl;
	s.pop();
	cout<<"Top: "<<s.top()<<endl;

	//s.pop();
	cout<<s.empty()<<endl;

	s.push(10);
	s.push(20);

	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}cout<<endl;

	return 0;
}

