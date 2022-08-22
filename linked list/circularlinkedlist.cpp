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
            tail = tail -> next;                        // we used do while bcpz it will execute at least one time 
          } while(tail != temp);
    }
    int main(){
    Node* tail = NULL;
    //empty list me insert krre hain
    insertion(tail,5,3);
    // insertion(tail,3,5);
    // insertion(tail,5,7);
    // insertion(tail,7,9);
    // insertion(tail,5,6);
    // insertion(tail,3,4);
    // print(tail);

    deletion(tail,3);
    print(tail);
return 0;
}