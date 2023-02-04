#include<bits/stdc++.h>
using namespace std;


class mobile{

private:
string name,brand;
int price,ram;
public:
mobile(int price_a=0,int ram_a=2,string brand_a="samsung",string name_a="M11"){//by assigning dfault value our constructor is overloaded

    name=name_a;
    price=price_a;
    brand=brand_a;
    ram=ram_a;
}
mobile(mobile &mob){//it will create copy of our contructor
    name=mob.name;
    price=mob.price;
    brand=mob.brand;
    ram=mob.ram;
}
void getfeatures();
};
void mobile::getfeatures(){
    cout<<"Brand Name - "<<brand<<endl;
     cout<<"Modal Name - "<<name<<endl;
      cout<<"Modal Price - "<<price<<endl;
       cout<<"Monile Ram - "<<ram<<endl;
}
int main(){
mobile  m1(10000,4,"apple","Iphone13 pro max"),m2,m3(m1);
m1.getfeatures();
m2.getfeatures();
m3.getfeatures();

}