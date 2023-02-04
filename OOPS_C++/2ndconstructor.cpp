#include<bits/stdc++.h>
using namespace std;
class bank{
private:
int balance;
public:
bank(int money){  //constuctor has same name as class and it does not has any return type
  balance=money; 
}
void getbalance(){
    cout<<"Your Balance Is:-"<<balance<<"$"<<endl;
}
};

int main(){
    bank hdfc(30000);
    hdfc.getbalance();

}