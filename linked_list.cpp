#include <iostream>
#include<algorithm>
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
            head= tail =NULL;
        }
        void push_front(int val){
            Node* newnode = new Node(val);
            if(head==NULL){
                head =tail = newnode;
                return;
            }else{
				newnode->next = head;
				head=newnode;
			}
            
        }
		void push_back(int val){
            Node* newnode = new Node(val);
            if(tail==NULL){
                head =tail = newnode;
                return;
            }else{
                tail->next = newnode;
				tail = newnode;
            }

        }

		void display(){
			Node* temp = head;
			while(temp !=0){
				cout<< temp->data << "-->"  ;
				temp = temp->next;
			}
			cout << "NULL" <<endl;
		}

		void pop_front(){
			if(head==NULL){
				return;}
			Node* temp = head;
			head = head->next;
			temp->next = NULL;
			delete temp;
		}
		
		void pop_back(){
			if(head==NULL){
        		return;}
				Node* temp = head;
			while( temp->next != tail){
			temp = temp->next;
			}
			temp->next = NULL;
			delete tail;
			tail = temp;
		}
		void insert(int val,int pos){
		Node* newnode = new Node(val);
		Node*temp = head;
		for(int i= 0;i<pos-1;i++){
		temp =temp->next;}
		newnode ->next = temp->next;
		temp ->next = newnode;

 	}
	int search(int key){
	Node* temp = head;
	int idx = 0;
	while(temp != NULL){
	if(temp->data == key){
	return idx;}
	temp = temp->next;
	idx++;
	}
	return -1;
	}
    };

int main() {
    List ll;
    ll.push_front(1);
	ll.push_front(2);
	ll.push_front(3);
	ll.push_front(4);
	ll.push_back(5);
	ll.pop_front();

	ll.pop_back();
    ll.insert(5,3);
	cout<< ll.search(5) << endl;
	ll.display(); 
    return 0;
}
