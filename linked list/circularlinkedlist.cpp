#include<bits/stdc++.h>
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
          //destructur
          ~Node(){
                int val = this -> data;
                if(this -> next != NULL){
                    delete next;
                    next = NULL;
                }
                cout<<"memory free for node with data "<<val<<endl;
          }
    };
    void insertion(Node* &tail,int element,int data){
        //empty list
        if(tail == NULL){
            Node* newnode = new Node(data);
            tail = newnode;
            newnode -> next = newnode;
        }
        else{
            //non empty list
            //assuming that the element is present in the list
            Node* curr = tail;

            while(curr -> data != element){
                curr = curr  -> next ;
            }

            //element found -> curr is representing element wala node
            Node* temp = new Node(data);
            temp -> next =curr -> next;
            curr -> next = temp; 
        }
    }
      void deletion(Node*  & tail ,int value){
           //empyt list
           if(tail == NULL){
            cout<<"list empty hai"<<endl;
            return;
           }
           else{
             // non empty
              // assuming that " value" is present in the linked list

              Node* prev = tail;
              Node* curr =prev -> next;
              while(curr -> data != value){
                prev = curr ;
                curr = curr -> next;
              }
              prev -> next = curr -> next;
              //single node ll
              if(curr == prev){
                tail = NULL;
              }
              // greatr than or equal to 2 ll
             else if(tail == curr){
                tail = prev;
              }
              curr -> next = NULL;
              delete curr;
           }
      }
    void print(Node* tail){
        Node* temp =tail;
        if(tail == NULL){
            cout<<"list is empty"<<endl;
            return;
        }
          do{
            cout<<tail -> data <<" ";
            tail = tail -> next;                        // we used do while bcoz it will execute at least one time 
          } while(tail != temp);
          cout<<endl;
    }

    //////////////////////////////////////////////////////////////
    // to check ll is circular or not
    bool iscircular(Node* head){
      if(head==NULL){
        return true;
      }
       Node* temp = head->next;
      while(temp!=NULL && temp!=head){
        temp = temp-> next;
      }
      
      if(temp==head){
        return true;
      }
      
      return false;
    }
    // ////////////////////////////////////////////////////////////
   int getlength(Node* head){
     Node* temp = head;
    int len = 1;

    do {
        temp = temp->next;
        len++;
    } while(temp->next != head);

    return len;
    }
   void split(Node* head1,Node* tail1,Node* head2,Node* tail2){
    tail2 = tail1;
    int len = getlength(head1);
    int mid = len /2;
    int cnt =0;
    Node* temp = head1;
    while(cnt!=mid){
     temp = temp -> next;
     cnt++;
    }
    if(len%2!=0){
      temp = temp -> next;
    }
    tail1 = temp;
    head2 = temp -> next;
     tail1 -> next = head1;
     tail2 -> next = head2;
   }
   /////////////////////second methond of spliting
   Node* middleNode(Node* &tail) {
    if(tail == NULL)
        return NULL;

    Node* slow = tail;
    Node* fast = tail;

    while(fast -> next != tail) {
        fast = fast -> next;
        if(fast -> next != tail) 
            fast = fast -> next;

        slow = slow -> next;
    }

    return slow;
}

void divideLinkedListInTwoCircularLinkedList(Node* &tail, Node* &middle) {
    Node* temp1 = tail;
    Node* temp2 = middle;

    while(temp1 -> next != middle) 
        temp1 = temp1 -> next;

    temp1 -> next = tail;

    while(temp2 -> next != tail)
        temp2 = temp2 -> next;

    temp2 -> next = middle;

    cout<<"Print first Cricular Linked List : ";
    print(tail);
    cout<<"Print second circular Linked List : ";
    print(middle);
}

    /////////////////////////////////////////////////////////
    int main(){
    Node* tail = NULL;
    //empty list me insert krre hain
    insertion(tail,1,3);
    insertion(tail,2,4);
    insertion(tail,3,5);
    insertion(tail,4,6);
    insertion(tail,5,7);
    insertion(tail,6,8);
    // insertion(tail,7,11);
    // print(tail);

    // deletion(tail,3);
    print(tail);
    if(iscircular(tail)){
      cout<<"ll is circular"<<endl;
    }
    else{
      cout<<"it is not circular"<<endl;
    }
    Node* middlenode = middleNode(tail);
    cout<<middlenode<<endl;
    divideLinkedListInTwoCircularLinkedList(tail,middlenode);
return 0;
}