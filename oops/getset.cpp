#include<bits/stdc++.h>
    using namespace std;
    class hero {
        //properties
        private:
        int health; 
        public:
        char level;
         void print(){
            cout<< level <<endl;                    // get and set helps us to read and manipulate value
         } 

          int getHealth(){                       
            return health;
          }
          char getLevel(){
            return level;
          }
          void setHealth(int h){
            health =h;
          }
          void setLevel(char ch){
            level =ch;
          }

    };
    int main(){
        //creation of object
    hero ramesh;
    ramesh.setHealth(70);
    ramesh.level='C';
    cout<<"health is "<<ramesh.getHealth()<<endl;
    cout<<"level is "<<ramesh.level<<endl;
     //dynamically
    hero *b = new hero;
    b->setLevel('A');
    b->setHealth(70);
    cout<<"health is "<<(*b).getHealth()<<endl;
    cout<<"level is "<<(*b).level<<endl;
             //or
    cout<<"health is "<<b->getHealth()<<endl;
    cout<<"level is "<<b->level<<endl;

return 0;
}