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
        if(c==in[i]){
            return i;
        }
    }
    return -1;
}
node* build(int post[],int in[],int s,int e){
    static int i=e;
     if(s>e){
        return NULL;
     }
    int cur = post[i];
    i--;
    node* n= new node(cur);
    if(s==e){
        return n;
    }
    int pos = search(in,s,e,cur);
    n->right=build(post,in,pos+1,e);
    n->left=build(post,in,s,pos-1);
  
    return n;
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
int post[]={4,2,5,3,1};
int in[]={4,2,1,5,3};

cout<<"inorder traversal"<<endl;
node* root =build(post,in,0,4);
inorder(root);

}