
#include<bits/stdc++.h>
    using namespace std;
    class Node{  
        public:
        int data;
        Node* next;

        //constructor
        Node(int data){
            this -> data = data;
            this -> next =NULL;
        }
    };

    void insertattail(Node* &tail,int d){

        // new node create 
        Node* temp = new Node(d);
        tail -> next = temp;
        tail = temp;
    }

    void print( Node* &tail){
        Node* temp =tail;
        while(temp != NULL){
            cout<< temp -> data <<" ";
            temp = temp -> next;
        }
        cout<<endl;
    }
    int main(){
        //created new node
    Node* node1 = new Node(10);
    // cout<<node1 -> data <<endl;
    // cout<<node1 -> next << endl;
    
    // head pointed to node 1
    Node* head = node1;
    Node* tail = node1;
  
   print(head);
    insertattail(tail,12);
   print(head);
    insertattail(tail,15);
   print(head);


return 0;
}