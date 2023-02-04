#include<bits/stdc++.h>
using namespace std;

class car{
public:
void volvo(){
    cout<<"volvo";
}
void bmw(){
    cout<<"bmw";
}
};
class bmw:public car{
public:
void engine(){
    cout<<"v8 engine";
}
};int main(){
    //ptr of base class
    car *ptr;
    //ptr of base class point to derived object but it cant access the feature of derived class
    ptr=new  bmw();
    ptr->volvo();
    ptr->bmw();
}