#include<bits/stdc++.h>
    using namespace std;
      class hero {
        //properties
        private:
        int health; 
        public:
        char level;
        static int op;
        hero(){
            cout<<"constructor called"<<endl;
        } 
        hero(int health ,char level){
            this -> level =level;
            this -> health = health;
        }
        void print(){
            cout<<health<<endl;
            cout<< level <<endl;                   
         } 
         //destructor
        ~hero(){
            cout<<"destructor called"<<endl;
        } 
    };
    int hero :: op =5;
    
    int main(){
  
    hero ramesh;
      //dynamically
      hero *h = new hero;
        delete h;         //for dynamically destructor call is manually
    //   hero temp(22,'T');
    //   temp.print();
    //   //copy constructor
    //   hero R(temp);
    //   R.print();
return 0;
}