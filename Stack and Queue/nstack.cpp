#include<bits/stdc++.h>
using namespace std;

int fre=0;
int arr[6];
int top[3];
int net[6];
bool isFull(){
    if(fre==(-1)){
        return true;}
  else  return false;
}
bool isEmpty(int st){
    if(top[st]==-1)return true;
   else  return false;
}
void push(int val,int st){
    if(isFull()){
        return;
    }
    int i=fre;
    fre=net[i];
    net[i]=top[st];
    top[st]=i;
    arr[i]=val;

}
int pop(int st){
    if(isEmpty(st)){
        return -2;
    }
    int i=top[st];
    top[st]=net[i];
    net[i]=fre;
    fre=i;
    

    return arr[i];


}

int main(){
  
    for(int i=0;i<3;i++){
        top[i]=-1;
    }
    for(int j=0;j<5;j++){
        net[j]=j+1;
    }
    net[5]=-1;
    push(1,0);
    push(2,0);
    push(3,1);
    push(4,0);
    push(5,1);
    cout<<pop(0)<<endl;
    cout<<pop(1)<<endl;
    cout<<pop(0)<<endl;
    cout<<pop(0)<<endl;
    cout<<pop(1)<<endl;
    return 0;
}