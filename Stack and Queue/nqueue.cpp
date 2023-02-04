#include<bits/stdc++.h>
using namespace std;
int arr[6];
int nxt[6];
int f[2];
int r[2];
int fre=0;
bool isFull(){
    if(fre==-1)return true;
    return false;
}
bool isempty(int st){
    if(f[st]==-1)return true;
    return false;
}
void push(int val,int st){
    if(isFull()){
        return;
    }
    int i=fre;
    fre=nxt[i];
    if(isempty(st)){
        f[st]=i;
    }else{
        nxt[r[st]]=i;
    }
    nxt[i]=-1;
    r[st]=i;
    arr[i]=val;

}
int pop(int st){
    if(isempty(st)){
        return -1;
    }
    int i=f[st];
    f[st]=nxt[i];
    nxt[i]=fre;
    fre=i;
    return arr[i];
}
int main(){
    for(int i=0;i<2;i++){
        f[i]=-1;
    }
    for(int i=0;i<5;i++){
        nxt[i]=i+1;
    }
    nxt[5]=-1;
    push(1,0);
    
    push(2,0);
      push(5,1);
    push(3,0);
    push(4,1);
  
    cout<<pop(0)<<endl;
    cout<<pop(0)<<endl;
    cout<<pop(1)<<endl;
}