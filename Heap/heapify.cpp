#include<bits/stdc++.h>
using namespace std;


void heapify(int a[],int n,int i){
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && a[largest]<a[l]){
        largest=l;
    }
    if(r<n && a[largest]<a[r]){
        largest=r;
    }
    if(largest!=i){
        swap(a[i],a[largest]);
        heapify(a,n,largest);
    }
}
void buildHeap(int a[],int n){
    int indx=(n/2)-1;
    for(int i=indx;i>=0;i--){
        heapify(a,n,i);
    }

}
void printHeap(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){

    int a[]={1 ,2 ,3 ,1 ,4 ,5 ,2 ,3 ,6};
    int n=sizeof(a)/sizeof(a[0]);
    buildHeap(a,n);
    printHeap(a,n);
}