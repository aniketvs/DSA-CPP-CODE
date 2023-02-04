#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
node* left;
node* right;
node(int val){
    data=val;
    left=right=NULL;
}
};
node* insertbst(node* root,int val){
    if(root==NULL){
        return new node(val);
    }
    if(val<root->data){
     root->left=   insertbst(root->left,val);
    }
    else if(val>root->data){
      root->right=  insertbst(root->right,val);
    }
    return root;
}
void inorder(node* root){
    if(!root) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    node* root=NULL;
    root=insertbst(root,5);
    insertbst(root,4);
    insertbst(root,6);
    insertbst(root,1);


    inorder(root);
}