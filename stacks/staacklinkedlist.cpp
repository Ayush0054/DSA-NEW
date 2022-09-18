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

    class Stack{
        public:
        Node* head;
        int size;
         
      Stack(int size){
        this-> size = size;
        this -> head= NULL;
      }



      void push(int data){
        int cnt =0;
        Node* temp =head;
        while(temp!=NULL){
            temp = temp -> next;
            cnt++;
        }

        if(cnt<size){
            Node* newnode = new Node(data);
            if(head==NULL){
                head = newnode;
                return;
            }
            else{
                newnode->next = head;
                head = newnode;
            }
        }
        else{
            cout<<"stack overflow"<<endl;
        }
      }



       void top(){
        if(head==NULL)cout<<"stack is  empty"<<endl;
        else{
            cout<<head-> data<<endl;
        }
       }
      void pop (){
           if(head==NULL) cout<<"Stack underflow"<<endl;
           else{
            Node* temp = head;
            cout<<"poped element is: "<< temp-> data <<endl;
            head = head -> next;
            delete temp;
           }
      }

        bool isEmpty(){
        if(head==NULL) return true;
        else return false;
    }

    // void display(){
    //     Node* p = NULL;
    //     while(p!=head){
    //         cout<<p->data<<endl;
    //         p = p-> next;
    //     }
         
 
    // }
    };
    int main(){
    Stack st(5);
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    st.pop();
    st.top();
return 0;
}