#include<bits/stdc++.h>
    using namespace std;
    class Queue{
     int *arr;
     int size;
     int qfront;
     int rear;
     public:
     Queue(int size){
         this->size= size;
        arr = new int[size];
        qfront=0;
        rear=0;
     }
        /*----------------- Public Functions of Queue -----------------*/
        void insertion(int data){
            if(rear==size){
                cout<<"queue is full"<<endl;
            }
            else{
                arr[rear]=data;
                rear++;
            }
        }

        int pop(){
            if(qfront==rear){
                cout<<"no element left to pop"<<endl;
            }else{
                int ans = arr[qfront];
                arr[qfront]=-1;
                qfront++;
                if(qfront==rear){
                    qfront=0;
                    rear=0;
                }
                return ans;
            }
        }

          int front() {
        if(qfront == rear) {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }

        bool isEmpty() {
        if(qfront == rear) {
            return true;
        }
        else
        {
            return false;
        }
    }

    };
    int main(){
    Queue a(5);
    a.insertion(9);
    a.insertion(2);
    a.insertion(3);
    a.insertion(4);
    cout<<a.front()<<endl;
    a.pop();
    cout<<a.front()<<endl;
return 0;
}