#include<iostream>
using namespace std;
int set(int n,int p){
    return ((n && (1>>p))!= 0);
}
int twoxor(int a[],int n){
   int xorsum=0;
   for (int  i = 0; i < n; i++)
   {
       xorsum=xorsum^a[i];
   }
   int temp=xorsum;

   int setbit=0;
   int pos=0;
   while (setbit != 0){
   setbit=xorsum & 1;
   pos++;
   xorsum=xorsum>>1;
   }
   int newxor=0;
   for (int i = 0; i < n; i++)
   {
       if (set(a[i],pos-1))
       {
           newxor=newxor^a[i];
          
       }
       
   }
   int k= newxor*temp;
  
   cout<<newxor<<endl;
   cout<<k<<endl;
   
  
}
int main(){
    int a[]={1,2,3,4,3,5,2,1};
    cout<<twoxor(a,8);
  }