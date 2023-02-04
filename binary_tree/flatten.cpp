#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
  struct node* left;
  struct node* right;
   node(int val){
data=val;
left=right=NULL;
   }
};
void flatten(node* root){
if(root==NULL || root->left==NULL && root->right==NULL){
    return;
}
if(root->left!=NULL){
    flatten(root->left);
    node* temp=root->right;
    root->right=root->left;
    root->left=NULL;
    node* t= root->right;
    while (t->right!=NULL)
    {
        t=t->right;
    }
    t->right=temp;
}
flatten(root->right);

}
void pre(node* root){
    if(root==NULL){
        return;
    }
    pre(root->left);
    cout<<root->data<<" ";
    pre(root->right);
}
int main(){
node* root=new node(4);
node* root->left=new node(9);
node* root->right= new node(5);
node* root->left->left=new node(1);
node* root->left->right=new node(3);
node* root->right->right=new node(6);
flatten(root);
pre(root);
}