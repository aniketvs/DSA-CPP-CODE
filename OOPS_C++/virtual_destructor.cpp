#include<bits/stdc++.h>
using namespace std;


class kids{
    //by assing it 0 it become pur virtual function or abstract class and the object of thiis class can't be initated
    public:
    
    virtual ~kids(){
           cout<<"distroying whole object of base and derived due to virtual keyword"<<endl;
    }

};
class boy:public kids{
    public:
    void bun(){
        cout<<"brown bun"<<endl;
    }
     ~boy(){
        cout<<"boy:-destroying it due to virtual keyword in base class"<<endl;
    }
};
class girl :public kids{
    public:
    void bun(){
        cout<<"pink bun"<<endl;
    }
     ~girl(){
        cout<< "girl:-destroying it due to virtual keyword in base class"<<endl;
    }
};
int main(){
    kids *ptr;
    

    ptr=new girl();
    ptr=new boy();

    delete ptr;
}