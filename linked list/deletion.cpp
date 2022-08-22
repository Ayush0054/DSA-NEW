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

        //destructor
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


    void insertathead(Node* &head,int d){

        // new node create 
        Node* temp = new Node(d);
        temp -> next = head;
        head = temp;
    }


    void insertattail(Node* &tail,int d){

        // new node create 
        Node* temp = new Node(d);
        tail -> next = temp;
        tail = temp;
    }


void insertopos(Node* &head,Node* &tail,int position,int d){

        if(position==1){
            insertathead(head,d);
            return;
        }
        Node* temp = head;
        int cnt =1;
         while(cnt<position-1){ 
            temp = temp -> next;           //temp kp aagey badhao
            cnt++;
         }
         if(temp -> next == NULL){
            insertattail(tail,d);
            return;
         }
         // creating a node for d
         Node* nodetoinsert = new Node(d);
            nodetoinsert -> next = temp -> next;
            temp -> next = nodetoinsert;
    }

void deletenode(int position,Node* &head,Node* &tail){

    //deleting first node
    if(position==1){
        Node* temp = head;
          head = head -> next;
          //memory free start node
          temp -> next = NULL;
          delete temp;
    }
    else
    {
        //deleting any middle or lasat node
         Node* curr = head;
         Node* prev = NULL;
         
         int cnt=1;
         while(cnt<position){
            prev = curr;
            curr = curr -> next;
            cnt++;
         }
       prev -> next   = curr -> next;
       curr -> next = NULL;
       delete curr;
         if (prev->next == NULL)
        {
            tail = prev;
        }
      
    }
}

    void print( Node* &head){
        Node* temp =head;
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
  
    insertattail(tail,12);
    insertattail(tail,15); 
   insertopos(head,tail,4,22);


   deletenode(4,head,tail);
   print(head);
   cout<<"tail "<< tail->data<<endl;
return 0;
}


