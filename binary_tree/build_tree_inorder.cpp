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
int search(int in[],int s,int e,int c){
    for(int i=s;i<=e;i++){
        if(in[i]==c){
            return i;
        }
    }
    return -1;
}
node* build(int pre[],int in[],int start,int end ){
static int i=0;
if(start>end){
    return NULL;
}
int cur=pre[i];
i++;
node* nod = new node(cur);

if(start==end){
    return nod;
}
int pos= search(in,start,end,cur);

nod->left = build(pre,in,start,pos-1);
nod->right = build(pre,in,pos+1,end);
return nod;
}
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    
     inorder(root->right);
   
}
int main(){
int pre[]={10,1,30,40,20};
int in[]={1,10,20,30,40};


cout<<"inorder traversal"<<endl;
node* root =build(pre,in,0,4);
inorder(root);
}