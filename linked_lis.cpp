#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node* next;
	Node(int val){
		data = val;
		next = NULL;
		}
};
class List{
	Node* head;
	Node* tail;
	public:
	List(){
        head= tail=NULL;
        }
	void push_front(int val){
		Node* newnode = new Node(val);
		if(head == NULL){
		head=tail=newnode;
		}
		else{
			newnode->next=head;
			head = newnode;
		}

	}
	void push_back(int val){
		Node* newnode = new Node(val);
        if(head == NULL){
        head=tail=newnode;
        }else{
		tail->next = newnode;
		tail = newnode;
		}
	}
	void display(){
		Node* temp = head;
		while(temp !=NULL){
		cout << temp->data <<" ->" ;
		temp = temp -> next;
		}
		cout << "NULL"<< endl;
	}
	void pop_front(){
		Node* temp =head;
		if(head == NULL){
		return; }
		else{
			head = temp->next;
			temp->next = NULL;
			delete temp;
		}
	}
	void pop_back(){
	Node* temp = head;
	if(head == NULL){
        return; }
	while(temp->next != tail){
	temp = temp->next;
	}
	temp->next = NULL;
	delete tail;
	tail = temp;
	}
	void insert(int val,int pos){
	Node* temp = head;
	Node* newnode = new Node(val);
	for(int i = 0;i<pos-1;i++){
		temp = temp->next;
	}
	newnode->next = temp->next;
	temp->next=newnode;
	}
	void reverse(){
	Node *curr = head;
	Node *prev = NULL;
	Node *nxt = NULL;
	while(curr != NULL){
	nxt = curr->next;
	curr->next =prev;
	prev = curr;
	curr = nxt;
	head = prev;
	}
}


};
int main(){
	List ll;
	ll.push_front(5);
	ll.push_front(4);
	ll.push_front(3);
	ll.push_front(2);
	ll.push_front(1);
	ll.push_back(6);
	ll.display();
	ll.pop_front();
	ll.display();
	ll.pop_back();
    ll.display();
	ll.insert(3,3);
    ll.display();
	ll.reverse();
	ll.display();
	return 0;
	}
