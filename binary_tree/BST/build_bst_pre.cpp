#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
node* insertbst(node* root,int val){
if(!root) return new node(val);
if(val<root->data){
    root->left=insertbst(root->left,val);
}
else if(val>root->data){
    root->right=insertbst(root->right,val);
}
return root;
}
void preorder(node* root){
    if(!root) return;
   
    preorder(root->left);
     cout<<root->data<<" ";
    preorder(root->right);
}
int main(){
    int pre[]={10,5,1,7,40,50};
    int n = sizeof(pre)/sizeof(pre[0]);
    node* root=NULL;
    root=insertbst(root,pre[0]);
    for(int i=1;i<n;i++){
        insertbst(root,pre[i]);
    }
  preorder(root);

}