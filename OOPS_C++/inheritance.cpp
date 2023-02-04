#include<bits/stdc++.h>
using namespace std;

class Rectangle{//base class
public:
int length;
int breadth;
void area(int x,int y){
    length=x;breadth=y;
    cout<<"Area Is - "<<length*breadth<<endl;
}
};
class Cuboid : public Rectangle{//derived class
private:
int height;
public:
void volume(int h){
    height=h;
    cout<<"Volume Is - "<<length*breadth*height<<endl;
}
};
int main(){
Cuboid c;
c.area(3,3);c.volume(3);
}