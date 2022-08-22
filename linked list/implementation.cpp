#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    // constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        if (this->next != NULL){
            delete next;
        }
    }
};

void InsertAtHead(Node* &head, int data){
    Node* new_node = new Node(data);
    if (head != NULL){
        new_node->next = head;
    }
    head = new_node;
}

void InsertAtTail(Node* &tail, int data){
    Node* new_node = new Node(data);
    if (tail != NULL){
        tail->next = new_node;
    }
    tail = new_node;
}

void InsertAtMiddle(Node* &head , Node* &tail, int index, int data){
    if (index == 0){
        InsertAtHead(head,data);
        return;
    } 
    int count = 0;
    Node* insertor = head;
    while((count<(index-1)) && (insertor!=NULL)){
        insertor = insertor->next;
        count++;
    }

    if (insertor==NULL || insertor->next == NULL){
        InsertAtTail(tail,data);
        return;
    }

    Node* new_node = new Node(data);
    new_node->next = insertor->next;
    insertor->next = new_node;
}

void deletion(Node* &head, Node* &tail, int index){
    if (index == 0){
        Node* deletor = head;
        head = head->next;
        deletor->next = NULL;
        delete deletor;
        return;
    }

    int count = 0;
    Node* connector = head;
    while ((count < (index-1)) && connector!= NULL){
        connector = connector->next;
        count++;
    }

    if (connector == NULL || connector->next == NULL) return;

    if (connector->next->next == NULL) tail = connector;

    Node* deletor = connector->next;
    connector->next = deletor->next;
    deletor->next = NULL;
    delete deletor;

}

Node* reversell(Node* &head){
    if(head==NULL || head -> next ==NULL){
        return head;
    }
    Node* previous = NULL;
    Node* curr = head;
    Node* forward = NULL;
    while(curr != NULL){
         forward = curr -> next;
        curr -> next = previous;             //current pointing towards previous
        previous = curr;
           curr = forward;   
        
    }
      return head;
}
////////////////////////////////recursive way to reverse
// void Reverse(Node* head,Node* curr ,Node* previous){
//    if(curr == NULL){
//       head = previous;
//       return;
//    }
//     Node* forward = curr -> next;
//     Reverse(head,forward,curr);
//     curr -> next =previous;
// }
// Node* reversell(Node* head){
//     Node* previous = NULL;
//     Node* curr = head;
//     Reverse(head,curr,previous);
//     return head;
// }
        // second recursive approach


////////////////////////////////////////////////////////////////
////////////////recursive way 2///////////////////////////////
Node* reverse1(Node* head){
    //base case
    if(head==NULL || head-> next == NULL){
        return head;
    }
    Node* chotahead = reverse1(head-> next);
    head-> next-> next =head;
    head -> next = NULL;
    return chotahead;
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
    Node *head = new Node(5);
    Node *tail = head;
    // print(head);
    InsertAtHead(head,4);
    // print(head);
    InsertAtTail(tail,6);
    // print(head);

    InsertAtMiddle(head,tail, 3, 8);
    InsertAtMiddle(head,tail, 4, 9);
    InsertAtMiddle(head,tail, 5, 10);
    // print(head);

    // deletion(head, tail,3);
    // print(head);

    // delete head;
    reverse1(head);
     print(head);
     

    return 0;
}