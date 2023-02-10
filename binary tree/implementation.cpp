#include<bits/stdc++.h>
    using namespace std;
     class treeNode {
        public:
      int data;
      treeNode* left;
      treeNode* right;
        
        treeNode(int data){
            this -> data = data;
            this -> left = NULL;
            this -> right = NULL;
        }
     };

     treeNode* buildtree(treeNode* root){
        cout<<"enter the data "<<endl;
        int data;
        cin>>data;
        root =new treeNode(data);
        
        if(data==-1){
            return NULL;
        }
        cout<<"enter data for inserting in left "<<data <<endl;
        root->left = buildtree(root->left);
        cout<<"enter data for inserting in right "<<data<<endl;
        root->right = buildtree(root->right);

        return root;
     }

     void levelordertraversal(treeNode* root){
        queue<treeNode*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            treeNode* temp = q.front();
            q.pop();
           
          if(temp==NULL){
             //purana level complete traverse ho chuka hai
            cout<<endl;
            if(!q.empty()){
                //queue still has some child nodes
                q.push(NULL);
            }
          }
     else{
            cout<<temp-> data <<" ";
            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }
     }
        }
     }

/////////////////////////////////////////////

     void inorder(treeNode* root){              //lnr
        //base case
        if(root==NULL){
            return;
        }
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
     }
     void preorder(treeNode* root){                 //nlr
        //base case
        if(root==NULL){
            return;
        }
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
     }
     void postorder(treeNode* root){                 //lrn
        //base case
        if(root==NULL){
            return;
        }
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
     }

//////////////////////////////////////////
treeNode* buildfromlevelorder(treeNode* root){
    queue<treeNode*>q;
    cout<<"enter data for root"<<endl;
    int data ;
    cin>>data;
    root = new treeNode(data);
    q.push(root);
    while(!q.empty()){
        treeNode* temp = q.front();
        q.pop();

        cout<<"enter left node for: "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;

        if(leftdata != -1){
            temp ->left = new treeNode(leftdata);
            q.push(temp->left);
        }
        cout<<"enter right node for: "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;

        if(rightdata != -1){
            temp ->right = new treeNode(rightdata);
            q.push(temp->right);
        }
    }
}



    int main(){
     treeNode* root =NULL;
    //  root = buildtree(root);

    //  levelordertraversal(root);
    //  cout<<"inorder: "<<endl;
    //  inorder(root);
    //  cout<<endl;
    //  cout<<"preorder: "<<endl;
    //  preorder(root);
    //  cout<<endl;
    //  cout<<"postorder: "<<endl;
    //  postorder(root);

    
    buildfromlevelorder(root);
    levelordertraversal(root);
return 0;
}