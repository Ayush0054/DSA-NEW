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
/////////////////////////////////////////////////////////////////////////////      ||-->?<--||
Node* reversell(Node* head){
    if(head==NULL || head -> next ==NULL){
        return head;
    }
    Node* previous = NULL;
    Node* curr = head;
    while(curr != NULL){
         Node* forward = curr -> next;
        curr -> next = previous;             //current pointing towards previous
        previous = curr;
           curr = forward;   
        
    }
      return previous;
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

// //////////////////////////////////////////////////////
// middle  of ll
Node* middleNode(Node* head) {
        if(head==NULL || head-> next == NULL){
            return head;
        }
        if(head->next->next ==NULL){
            return head->next;
        }
        Node* slow =head;
        Node* fast =head->next;
        while(fast !=NULL  ){ 
            fast = fast ->next;
            if(fast!=NULL){
                fast = fast ->next;
                }
            slow  = slow -> next;
        }
        return slow;
        
    }
/////////////////////////////////////////////////////////////
// reverrse ll in k group
Node* kreverse(Node* head,int k){
    //base call                                                
    if(head == NULL){                                          
        return NULL;
    }
    
    //step 1 : reverse first k  nodes
    Node* forward = NULL;
    Node* curr = head;
    Node* prev = NULL;

    int cnt =0;
    while(curr!= NULL && cnt<k){
      forward = curr -> next;
      curr-> next = prev;
      prev=curr;
      curr = forward;
      cnt++;
    }

    if(forward != NULL){
        head->next=kreverse(forward,k);
    }
    return prev;
}




//////////////////////////////////////////////////////
//to detect loop in ll        #1

bool detectloop(Node* head){
    if(head==NULL){
        return false;
    }
    map<Node*,bool>visited;
    Node* temp = head;
    while(temp!=NULL){
        if(visited[temp]==true){
            return true;
        }
        visited[temp]=true;
        temp = temp -> next;
    }
    return false;
}

//////////////////////////////////////////////
//floydd cycle detection  to detect loop in ll #2
bool fdetect(Node* head){
    if(head==NULL){
        return false;

    }
    Node* fast = head;
    Node* slow = head;
    while(slow !=NULL && fast != NULL){
        fast = fast -> next;
        if(fast != NULL ){
            fast = fast -> next;
        }
        slow = slow -> next;

        if(slow==fast){
            return true;
        }

    }
    return false;
}


///////////////////////////////////////////////
// to find starting node of loop  by floyyd detection help
Node* fdetectnode(Node* head){
    if(head==NULL){
        return NULL;

    }
    Node* fast = head;
    Node* slow = head;
    while(slow !=NULL && fast != NULL){
        fast = fast -> next;
        if(fast != NULL ){
            fast = fast -> next;
        }
        slow = slow -> next;

        if(slow==fast){
            return slow;
        }

    }
    return NULL;
}

Node* getstartingnode(Node* head){
     if(head==NULL){
        return NULL;
    }

    Node* intersection = fdetectnode(head);
    if(intersection == NULL){
        return NULL;
    }
    Node* slow = head;
    while(slow!= intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }
    return slow;
}

///////////////////////////////
// to remove loop 
Node* removeloop(Node* head){
     if(head==NULL){
        return NULL;
    }
    Node* startofloop = getstartingnode(head);
    if(startofloop == NULL){
        return head;
    }
    Node* temp = startofloop;
    while(temp != startofloop){
        temp = temp -> next; 
    }
    temp -> next = NULL;              //for returning put return head;
}
/////////////////////
//remove duplicates from sorted ll
Node* removeduplicates(Node* head){
    //empty list
    if(head==NULL){
        return NULL;
    }

    //non empty
    Node* curr = head;
    while(curr!=NULL){
       if(curr-> next != NULL && curr-> data == curr -> next -> data){
        Node* newnext = curr -> next -> next;
        Node* todelete = curr -> next;
        todelete-> next = NULL;
         delete todelete;
        curr-> next = newnext;
       }
       else{
        curr = curr -> next;
       }
    }
    return head;
}



//////////////////
//remove dupluicates from unsorted ll
 Node * removeDuplicates( Node *head) 
    {
 if(head==NULL){
        return head;
    }
    map<int,bool>visited;
    Node* curr = head;
    Node* prev =  NULL;
    while(curr!=NULL){
        if(visited[curr->data]!=true){
            visited[curr-> data]=true;
            prev =curr;
            curr = curr -> next;
        }
        else{
            prev -> next = curr -> next;
            Node* todelete  = curr;
            curr = curr -> next;
            delete todelete;
        }
    }
    return head;
    }
    ///////////////
    // two while method

    
Node* removing_dublicate_elements(Node* head){
    //If the list is empty->
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* curr = head;

    while(curr != NULL){
        Node* temp = curr->next;

        while(temp != NULL){

            if((temp->next != NULL) && (curr->data == temp->data)){
                Node* forward = temp->next;
                Node* nodeToDelete = temp;
                delete(nodeToDelete);
                curr->next = temp;
                temp = forward;
            }

            else{
                temp = temp->next;
            }
        }
        curr = curr->next;
    }

    return head;
}


////////////////////////////////
  void print( Node* head){
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
    InsertAtTail(tail,5);                            
    // print(head);                         
                                
    InsertAtMiddle(head,tail, 3, 8);
    InsertAtMiddle(head,tail, 4, 9);                                            
    InsertAtMiddle(head,tail, 5, 10);                                     
    print(head);                                                        
    //  tail-> next = head -> next;               // to make loop in ll
    // deletion(head, tail,3);
    // print(head);

    // delete head;

    // head = reversell(head);
    //  print(head);

    //  head=middleNode(head);
    //  print(head);

    //  head = kreverse(head,3);
    //  print(head);
        // removeloop(head);
        removeduplicates(head);
        print(head);
    if(fdetect(head)){
        cout<<"ll is circular"<<endl;
    }
    else{
        cout<<"ll is not circular"<<endl;
    }
    cout<<"loop starts at : "<<getstartingnode(head)->data<<endl;
    return 0;
}