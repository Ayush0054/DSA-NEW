#include<bits/stdc++.h>
    using namespace std;
    class kqueue {
 public:
  int n;
  int k;
  int *front;
  int *rear;
  int *arr;
  int freespot;
  int *next;

  public:                                                                                                        
  kqueue(int n, int k){
    this -> n = n;
    this -> k = k;
    front = new int[k];
    rear = new int[k];
    for(int i =0;i<k;i++){
        front[i]=-1;
        rear[i]= -1;
    }
    next = new int[n];
    for(int i =0;i<n;i++){
    next[i]=i+1;
      }

     next[n-1]=-1;
      arr = new int[n];
      freespot = 0;
  } 


void enqueue(int data,int qn){
    if(freespot==-1){
        cout<<"full"<<endl;
        return;
    }
    int index = freespot;
   freespot = next[index];

    if(front[qn]==-1){
        front[qn]= index;
    }else{
        next[rear[qn]]=index;
    }

    next[index]=-1;
    rear[qn]=index;
    arr[index]=data;
}


 int dequeue(int qn){
    if(front[qn]==-1){
        cout<<"queue underflow"<<endl;
        return -1;
    }
    int index = front[qn];
    front[qn]=next[index];

    next[index] = freespot;
    freespot = index;
    return arr[index];
}
    };
    int main(){
    kqueue q(10, 3);
    q.enqueue(10, 1);
    q.enqueue(15,1);
    q.enqueue(20, 2);
    q.enqueue(25,1);

    cout << q.dequeue(1) << endl;
    cout << q.dequeue(2) << endl;
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(1) << endl;

    cout << q.dequeue(1) << endl;
return 0;
}