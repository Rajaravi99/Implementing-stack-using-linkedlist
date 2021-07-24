#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		
		Node(int element){
			data=element;
			next=NULL;
		}
};
class stackull{
	Node *head;
	int size;
	public:
		stackull(int element){
			head=NULL;
			size=0;
		}
		bool isempty(){
			return size==0;
		}
		
		int top(){
			if(size==0){
				return -1;
			}
			else{
				return head->data;
			}	
		}
		
		int getsize(){
			return size;
		}
		
		int pop(){
			if(!isempty()){
			    int d=head->data;
                Node *temp=head;
                head=head->next;
                delete(temp);
                size--;
                return d;
			}
			else{
				return -1;
			}
		}
		
		void push(int element){
			Node *newnode=new Node(element);
			Node *temp=head;
			head=newnode;
			head->next=temp;
			size++;
		}
};


int main(){
	stackull s1(2);
	s1.push(1);
	cout<<s1.top()<<endl;
	s1.push(2);
	cout<<s1.top()<<endl;
	s1.pop();
	cout<<s1.top()<<endl;
	cout<<s1.getsize()<<endl;
	char ch;
	cin>>ch;
	return 0;
}
