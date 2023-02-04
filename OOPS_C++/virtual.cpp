#include<bits/stdc++.h>
using namespace std;

class car{
public:
virtual void volvo(){//by making it virtual it no more visible
    cout<<"volvo"<<endl;
}
void ducati(){
    cout<<"ducati"<<endl;
}
};
class bmw:public car{
public:
void volvo(){
cout<<"derivied volvo"<<endl;
}

void ducati(){
    cout<<"derived ducati"<<endl;
}
};
int main(){
   
    car *ptr;
 
    ptr=new  bmw();
      ptr->ducati();
    //by using virtual function it cant access the feature of base class it will now access the feature of derived class
    ptr->volvo();
  
}