#include<bits/stdc++.h>
    using namespace std;
    class Node{
      public:
        int data;
        Node* next;

        Node(int data){
            this-> data = data;
            this -> next = NULL;
        }
    };
    class Queue{
      public:
        Node* front;
        Node* rear;
        int size;
        
         Queue(int size){
        this-> size = size;
        this -> front= NULL;
        this->rear=NULL;
      }

      void insertion(int x){
        Node* t = new Node(size);
        if(t==NULL){
            cout<<"queue is full"<<endl;
        }else{
            t->data = x;
            t-> next = NULL;
            if(front==NULL){
                front = rear = t;
            }else{
                rear -> next = t;
                rear = t;
            }
        }
      }

      int deque (){
        int x =-1;
        Node* t;
        if(front == NULL){
            cout<<"queue is empty"<<endl;
        }else{
            x=front ->data;
            t=front;
            front = front -> next;
            delete t;
        }
        return x;
        
      }

      void display(){
        Node *p=front;
        while(p!=NULL){
            cout<<p->data<<" ";
            p=p-> next;
        }
        cout<<endl;
      }
    };
    int main(){
    Queue q(5);
       q.insertion(5);
       q.insertion(4);
       q.insertion(3);
       q.display();
       q.deque();
       q.display();
       q.deque();
       q.display();
       q.deque();
       q.display();
return 0;
}