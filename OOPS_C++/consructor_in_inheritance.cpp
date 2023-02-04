#include<bits/stdc++.h>
using namespace std;



class base{
public:
base(){
    cout<<"default constructor is only called if it is not spcify in derived class"<<endl;
}
base(int c){
    cout<<"it can't called until it not specify in derived class"<<c;
}
};
class derived:public base{
public:

//by specify constructor in derived class we can call the paraetrized constructor
derived():base(){}
derived(int c):base(c){}
};
int main(){
    derived d ;
    derived d2(7);//wrong it through error

}