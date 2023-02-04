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
void level_order(node* root,int y){
    if(root==NULL){
        return;
    }
queue<node *> q;
q.push(root);
q.push(NULL);
int s=0;
int k=0;
while (!q.empty())
{
node* cur = q.front();
q.pop();
if(cur!=NULL){
    if(k==y){
        s+=cur->data;
    }
    cout<<cur->data<<" ";
if(cur->left){
    q.push(cur->left);
}
if(cur->right){
    q.push(cur->right);
}
}else if(!q.empty()){
    q.push(NULL);
    k++;
}
}

cout<<s<<endl;
}
int main(){
int post[]={4,2,5,3,1};
int in[]={4,2,1,5,3};

cout<<"inorder traversal"<<endl;
node* root =build(post,in,0,4);

level_order(root,2);

}