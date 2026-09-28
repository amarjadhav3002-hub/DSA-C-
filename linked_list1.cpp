#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
	Node(int val){
		data = val;
		next = NULL:
	}
};
struct list{
	Node* head;
	Node* tail;
	list(){
		head=tail=NULL;
	}
	void push_front(int val){
	Node* newnode = new Node(val);
	if(head==NULL){
	head = tail= newnode;
	}else{
	newnode->next=head;
	head = newnode;
	}
	}
	void push_back(int val){
	Node* newnode = new Node(val);
	if(head==NULL){
		head=tail=newnode;
	}else{
		tail->next=newnode;
		tail = newnode;
	}
	}
	void display(){
	Node* temp = head;
	while(temp!=NULL){
	cout<< temp->data <<"->";
	temp = temp->next;
	}
	cout <<"NULL";
	}
	void pop_front(){
	Node* temp = head;
dddddddddd
		
};
