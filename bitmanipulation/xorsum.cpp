#include<iostream>
using namespace std;

int xr(int a[],int n){
      int xorsum=0;
      for (int i = 0; i < n; i++)
      {
          xorsum=xorsum^a[i];
          
      }
      return xorsum;
      
}

int main(){
    int a[]={2,3,1,4,1,2,3};
    cout<<xr(a,8);
}