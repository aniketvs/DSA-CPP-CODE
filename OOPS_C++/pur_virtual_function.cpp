#include<bits/stdc++.h>
using namespace std;


class kids{
    //by assing it 0 it become pur virtual function or abstract class and the object of thiis class can't be initated
    public:
    virtual void bun()=0;

};
class boy:public kids{
    public:
    void bun(){
        cout<<"brown bun"<<endl;
    }
};
class girl :public kids{
    public:
    void bun(){
        cout<<"pink bun"<<endl;
    }
};
int main(){
    kids *ptr;
    ptr=new boy();
    ptr->bun();
    ptr=new girl();
    ptr->bun();
}
//and this bun function perform more than one opertaion and this feature is called polymorphisam