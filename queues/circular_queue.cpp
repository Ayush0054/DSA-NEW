#include<bits/stdc++.h>
    using namespace std;
    class CQueue{
        int *arr;
        int size;
        int front;
        int rear;
        public:
         CQueue(int size){
            size = this-> size;
            arr= new int[size];
            front=rear=-1;
         }
         
        bool enque(int val){
            if( (front==0 && rear== size-1) ||(rear==(front-1)%(size-1))){
                cout<<"QUEUE IS FULL"<<endl;
            }
            else if(front==-1){
                front = rear =0;
                arr[rear]= val;
            }

            else if(rear==size-1 && front!=0){
                rear=0;
                arr[rear]=val;
            }
            else{
                rear++;
                arr[rear]=val;
            }
        }

        int deque(){
            if(front==-1){
                cout<<"QUEUE is EMPTY"<<endl;
                 return -1;
             }
             int ans = arr[front];
             arr[front] =-1;
             if(front==rear){
                front = rear = -1;
             }
             else if(front == size-1){
                front =0;
             }
             else{
                front++;
             }
             return ans;
        } 
    };
    int main(){
    
return 0;
}