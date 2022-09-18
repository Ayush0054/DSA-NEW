#include<bits/stdc++.h>
    using namespace std;
    class Stack {
        public:
        int *arr;
        int top;
        int size;

       Stack(int size){
            this->size= size;
            arr= new int[size];
            top = -1;
        }

        //operation and implementation
    void push(int element){
       if(size-top > 1){
        top++;
        arr[top]= element;
       }
       else{
        cout<<"stack overflow"<<endl;
       }
    }

    void pop (){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }

    int peek(){
     if(top>= 0 && top <size){
        return arr[top];
     }
     else{
   cout<< "stack is empty"<<endl;
     }
    }

    bool isempty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }

    bool isfull(){
        if(size==top+1){
            return true;
        }
        else{
            return false;
        }
    }

    void display(Stack st){
       for(int i = top;i>=0;i--){
        cout<<st.arr[i]<<" " ;
       }
       cout<<endl;
    }

    void peek(Stack st, int index){
        int x= -1;
        if(st.top - index +1<0){
            cout<<"invalid index"<<endl;
        }
        x = st.arr[st.top-index+1];
        cout<<x<<endl;;
    }
    };
    int main(){
     Stack st(5);
     st.push(3);
     st.push(2);
     st.push(1);
        cout<< st.peek()<<endl;
        st.display(st);
      st.peek(st,2);
return 0;
}