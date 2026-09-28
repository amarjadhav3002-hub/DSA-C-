#include<iostream>
using namespace std;

class Node{
public:
	int data;
	Node* next;
	Node(int val){
	data=val;
	next = NULL;
	}
};
class Queue{
	Node* head;
	Node* tail;
	public:
	Queue(){
	head = tail=NULL;
	}
	void push(int val){
	Node* newnode = new Node(val);	
	if(head==NULL){
	head = tail = newnode;
	}
	else{
	tail->next=newnode;
	tail = newnode;
	}
	}
	void pop(){
	Node* temp = head;
	if(head==NULL) return;
	else{
	head = head->next;
	temp->next = NULL;
	delete temp;
	}
	}
	int front(){
	if(head==NULL) return 0;
	else{
	return head->data;
}	}
	bool empty(){
	return head==NULL;
	}

};
int main(){
	Queue q;
	q.push(6);
	q.push(7);
	q.push(8);
	while(!q.empty()){
		cout << q.front() <<" ";
		q.pop();
		}
		cout<<endl;
		return 0 ;
}
