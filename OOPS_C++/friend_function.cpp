#include<bits/stdc++.h>
using namespace std;

class base1{
    private:
    int a;
    public:
    base1(int x=0){
              a=x;
    }
   friend int fun();
};
class base2{
    private:
    int a;
    public:
    base2(int x=0){
              a=x;
    }
   friend int fun();
};

int fun(){
    base1 b1(20);
    base2 b2(30);
    int c=b1.a +b2.a;
    return c;
    
    
}
int main(){
  cout<<fun();
}
//friend function is function which can access the private ,proteced and public class member and it act as a bridge betwen to or more classes
