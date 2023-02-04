#include<bits/stdc++.h>
using namespace std;

class base1{
    private:
    int a;
    public:
    base1(int x=0){
              a=x;
    }
  friend bool operator< (base1 x, base1 y);
};
bool operator<(base1 x,base1 y){
    return x.a<y.a;
}

int main(){
 base1 b1(20),b2(30);
 if(b1<b2){
    cout<<"yes";
 }
 else {
    cout<<"no";
 }
}