#include<bits/stdc++.h>
    using namespace std;
     class BstNode{
        public:
        int data;
        BstNode* left;
        BstNode* right;
        BstNode(int d){
            this->data=d;
            this->left=NULL;
            this->right=NULL;
        }
     };
     BstNode* insertintobst(BstNode* root,int d){
        if(root==NULL){
            root = new BstNode(d);
            return root;
        }
        if(d>root->data){
            root->right=insertintobst(root->right,d);
        }else{
            root->left=insertintobst(root->left,d);
            
        }
        return root;
     }
     void takeInput(BstNode* &root){
        int data;
        cin>>data;
        while(data !=-1){
           root=insertintobst(root,data);
           cin>>data;
        }
     }
     void inorder(BstNode* root){              //lnr
        //base case
        if(root==NULL){
            return;
        }
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
     }
 int minValue(BstNode* root) {
     
    BstNode* temp = root;
      if(temp==NULL){
          return -1;
      }
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp->data;
}
 int maxValue(BstNode* root) {
     
    BstNode* temp = root;
      if(temp==NULL){
          return -1;
      }
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp->data;
}
    BstNode* deleter(BstNode* root,int val){
      if(root==NULL){
        return NULL;
      }
      if(root->data==val){
         //0
         if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
         }
        //1
         if(root->left!=NULL && root->right==NULL){
            BstNode* temp=root->left;
            delete root;
            return temp;
         }
         if(root->left==NULL && root->right!=NULL){
            BstNode* temp=root->right;
            delete root;
            return temp;
         }
       //2
        if(root->left!=NULL && root->right!=NULL){
             //two method right ka minimum lelo ya left ka maximum
            int minii = minValue(root->right);
            root->data=minii;
             root->right=deleter(root->right,minii);
             return root;
         }
      }
      else if(root->data > val){
          root->left=deleter(root->left,val);
          return root;
      }
      else if(root->data < val){
          root->right=deleter(root->right,val);
          return root;
      }
    }
    int main(){
     BstNode* root =NULL;
     cout<<"enter data to create Bst"<<endl;
     takeInput(root);
     cout<<"traversing"<<endl;
     inorder(root);
     cout<<"min "<<minValue(root)<<endl;
     cout<<"max "<<maxValue(root)<<endl;
      deleter(root,50);
    cout<<"traversing"<<endl;
     inorder(root);
return 0;
}

//50 20 70 10 30 90 110 -1