#include<iostream>
using namespace std;

class phone{
    public:
    string brand;
    string colour;
    int model;
    
    int price;

};
int main(){

  
  phone ph1;
  ph1.brand="redmi";
  ph1.price= 3000;
  ph1.colour="green black";

  cout<< ph1.brand;
  cout<< ph1.price;
  cout<<ph1.colour;
  
}