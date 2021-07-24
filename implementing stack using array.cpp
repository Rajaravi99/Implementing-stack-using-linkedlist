#include<bits/stdc++.h>
using namespace std;

class stackua{
	int capacity;
	int *data;
	int nextindex;
	public:
		stackua(){
			data=new int[2];
			capacity=2;
			nextindex=0;
		}
		
		bool isempty(){
			if(nextindex==0){
				return true;
			}
			else{
				return false;
			}
		}
		
		int size(){
			return nextindex;
		}
		
		int top(){
			if(isempty()){
				cout<<"stack is empty"<<endl;
			}
			return data[nextindex-1];
		}
		
		int pop(){
			if(isempty()){
				cout<<"stack is empty"<<endl;
				return 0;
			}
			else{
				nextindex--;
				return data[nextindex];
			}
		}
		void push(int element){
			if(nextindex==capacity){
				int *newdata=new int[2*capacity];
				for(int i=0;i<nextindex;i++){
					newdata[i]=data[i];
				}
				newdata[nextindex]=element;
				nextindex++;
				capacity*=2;
				data=newdata;
			}
			else{
				data[nextindex]=element;
				nextindex++;
			}
		}
};

int main(){
	stackua s1;
	s1.push(10);
	s1.push(20);
	cout<<s1.top()<<endl;
	s1.push(30);
	cout<<s1.top()<<endl;
	s1.push(40);
	cout<<s1.top()<<endl;
	s1.push(80);
	cout<<s1.top()<<endl;
	s1.push(90);
	cout<<s1.top()<<endl;
	s1.pop();
	s1.pop();
	cout<<s1.top()<<endl;
	char ch;
	cin>>ch;
	return 0;
}
