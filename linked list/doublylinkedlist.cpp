#include<bits/stdc++.h>
    using namespace std;
    class Node {
        public:
         int data;
         Node* prev;
         Node* next;

         //constructor
         Node(int d){
           this -> data = d;
           this -> prev = NULL;
           this -> next = NULL;
           
         }
         //destructor
    ~Node(){
        int val = this -> data;
        if (next != NULL){
            delete next;
            next =  NULL;
        }
        cout<<"memory free for node with data"<<val<<endl;
    }
         
    };
         void print(Node* &head){
            Node* temp = head;
            while(temp != NULL){
                cout<<temp -> data<<" ";
                temp = temp-> next;
            }
           cout<<endl;
         }
         int getlength(Node* &head){
            Node* temp = head;
            int len =0;
            while(temp != NULL){
                len++;
                temp = temp-> next;
            }
            return len;

         }
        void insertathead(Node* &head,Node* &tail,int data){
            if(head == NULL){
            Node* newnode = new Node(data);
            head = newnode;
            tail = newnode;
            }
            else{
            Node* newnode = new Node(data);
            newnode -> next =head;
            head -> prev =newnode;
            head = newnode;
            }
        }
        void insertattail(Node* &head,Node* &tail,int data){
            if(tail == NULL){
            Node* newnode = new Node(data);
            tail = newnode;
            head = newnode;
            }
            else{
            Node* newnode = new Node(data);
            newnode -> prev =tail;
            tail -> next =newnode;
            tail = newnode;
            }
        }
void InsertAtMiddle(Node* &head , Node* &tail, int index, int data){
    if(index==0){
        insertathead(head,tail,data);
        return;
    }
   Node* insertor= head;
   int cnt =0;
   while(cnt< index-1 && (insertor!=NULL)){
    insertor = insertor -> next;
    cnt++;
   }
   if(insertor -> next== NULL ){
       insertattail(head,tail,data);
       return;   
   }

   Node* newnode = new Node(data);
   newnode -> next = insertor -> next;
   insertor -> next -> prev = newnode;
   insertor -> next =newnode;
   newnode -> prev = insertor;
}

void deletion(Node* &head, Node* &tail, int index){
    if (index == 0){
        Node* deletor = head;
        deletor->next -> prev = NULL;
        head = deletor->next;
        deletor->next = NULL;
        delete deletor;
        return;
    }

    int count = 0;
    Node* curr = head;
    Node* previous = NULL;
    while (count < index){
        previous = curr;
        curr = curr->next;
        count++;
    }

    // if (connector == NULL || connector->next == NULL) return;

    // if (connector->next->next == NULL) tail = connector;
      curr -> prev = NULL;
     previous-> next = curr->next ;
    curr->next = NULL;
    delete curr;

} 
Node* reverse(Node* head){
  if(head==NULL || head ->next == NULL){
    head->prev = NULL;
    return head;
  }          
  Node* newhead = reverse(head-> next);
  head -> next -> next = head;
  head -> prev = head -> next;
  head -> next = NULL;
  return newhead;
}

    int main(){
    // Node* node1 = new Node(10);
    Node* head =  NULL;
    Node *tail = NULL;
  
   cout<<"length "<< getlength(head)<<endl;
   insertathead(head,tail,11);

   insertattail(head,tail,14);
 
   InsertAtMiddle(head,tail,1,12);
   print(head);
//    deletion(head,tail,1);
//    print(head);
//    deletion(head,tail,1);
//    print(head);
 head=reverse(head);
 print(head);
return 0;
}