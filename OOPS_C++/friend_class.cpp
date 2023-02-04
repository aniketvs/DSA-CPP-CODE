// by defining friend class the class can access the private protcted member of that class


#include<bits/stdc++.h>
using namespace std;

class base1{
    private:
    int a;
    public:
    base1(int x=0){
              a=x;
    }
   friend class base2;
};
class base2{
    private:
    int b;
    public:
    base2(int x=0){
              b=x;
    }
   
    int sum()
    {
 base1 b1(23);
 int c=b1.a+b;
 return c;
    }
  
};


int main(){
 base2 b2(333);
 cout<<b2.sum();
}