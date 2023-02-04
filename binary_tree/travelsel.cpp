#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
     struct node* left;
     struct node* right;
     node(int val){
        data=val;
        left=NULL;
        right=NULL;
     }
};
void left(node** root,int val){
    node* n =new node(val);
   if(*root==NULL){
    *root=n;
    return;
   }
   node* temp = *root;
   while(temp->left !=NULL){
     temp=temp->left;
   }
   temp->left=n;


}
void right(node** root,int val){
    node* n =new node(val);
   if(*root==NULL){
    *root=n;
    return;
   }
   node* temp = *root;
   while(temp->right !=NULL){
     temp=temp->right;
   }
   temp->right=n;


}
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    
    inorder(root->right);
}
void postorder(node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    
    postorder(root->right);
      cout<<root->data<<" ";
}

int main(){
    node* root =NULL;
    cout<<"enter a nu."<<endl;
    int n;
    cin>>n;
    int val;
    int k;
    cout<<"enter a node"<<endl;
    for(int i=0;i<n;i++){
        cout<<"enter a position"<<endl;
        cin>>k;
         cout<<"enter a data"<<endl;
        cin>>val;
        if(k==1){
            left(&root , val);}
        else{
        right(&root , val);

        }
    }
 
    preorder(root);

}


