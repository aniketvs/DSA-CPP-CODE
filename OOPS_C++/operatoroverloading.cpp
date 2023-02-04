#include<bits/stdc++.h>
using namespace std;

class operatoroverloading
{
private:
   int weight;
public:
   operatoroverloading (int x=0){
    weight=x;
   }
   operatoroverloading operator * (operatoroverloading w){

    operatoroverloading temp;
    temp.weight=weight*w.weight;
    return temp;
   }

   //preincrement operator verloading
    void operator ++ (){
        ++weight;
    }
    //post increment 
     void operator ++ (int){
        weight++;
    }
   void printdata(){
    cout<<weight<<endl;
   }

};




int main(){
operatoroverloading person1(2),person2(3),total;

total=person1*person2;
total.printdata();

++person1;
person1.printdata();
person2++;
person2.printdata();
}