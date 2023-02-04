#include<bits/stdc++.h>
using namespace std;

class House{
   
    int length,breadth;
 private:
    int cal(int x,int y){
        length=x;breadth=y;
         return length*breadth;
    }
public:
int ans(int x,int y){
    int u=cal(x,y);
    return u;
}
};


int main(){
House h;
int z= h.ans(500,600);
cout<<z<<endl;
}
