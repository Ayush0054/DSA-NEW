#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
  int data;
  Node* next;
  
  //constructor 
  Node(int data){
      this -> data = data;
      this -> next = NULL;
  }
  ~Node(){
            int value = this-> data;
            //memory free
            if(this->next != NULL){
                delete next;
                this->next = NULL;
            }
            cout<<"memory is free for node with data "<<value<<endl;
        }
};
void insertathead(Node* &head,int data){
    Node* newnode = new Node(data);
    if(head != NULL){
        newnode -> next = head;
    }
    head = newnode;
}
void insertattail(Node* &tail,int data){
    Node* newnode = new Node(data);
    if(tail != NULL){
        tail -> next = newnode;
    }
   tail = newnode;
}
void insertatpos(Node* &head,Node* &tail,int pos,int data){
    if(pos==0){
        insertathead(head,data);
        return;
    }
    Node* insertor = head;
    int cnt =0;
    while(cnt<pos-1){
        insertor = insertor -> next;
        cnt ++;
    }
    if(insertor == NULL){
        insertattail(tail,data);
        return ;
    }
    Node* newnode = new Node(data);
    newnode -> next = insertor -> next;
    insertor -> next =newnode;
}
void deletion(Node* &head,Node* &tail,int pos){
    
    if(pos==0){
    Node* temp = head;
    head = head -> next;
    temp -> next = NULL;
    delete temp;
    }
    else{
        Node* prev = NULL;
        Node* curr = head;
        int cnt=0;
        while(cnt<pos){
            prev = curr ;
            curr = curr-> next;
            cnt++;
        }
        prev -> next =curr-> next;
        curr -> next = NULL;
        delete curr;
        if(prev-> next==NULL){
            tail = prev;
        }
    }
}
    void print(Node* &head){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp-> next;
        }
        cout<<endl;
    }
int main() {
	  Node* node1 = new Node(10);
	   Node* head = node1;
    Node* tail = node1;
  
    insertattail(tail,12);
    insertattail(tail,15); 
   insertatpos(head,tail,4,22);
     print(head);
	return 0;
}
