#include<bits/stdc++.h>
using namespace std;
class base{
public:
void msg(){
    cout<<"it does not call in derived class it call only in base";
}
};
class derived : public base{
    public:
void msg(){
    cout<<"by overiding derived class function is called";
    base::msg(); // this statement call the overiding function in base class
}
};
int main(){
    derived d;
    d.msg();
    cout<<endl;
    base b;
    b.msg();
}